/***************************************************************
*
* Module: Port
*
* File Name: Port.h
*
* Description: Header file for Port Module,
*              implementation is based on AUTOSAR specfications.
*
* Author: Ahmed Wasfy
*
* Date:  May 26, 2019
****************************************************************/

#ifndef PORT_H
#define PORT_H


/* Port Vendor ID in AUTOSAR */
#define PORT_VENDOR_ID                    (2020U)

/* Port Module ID in AUTOSAR */
#define	PORT_MODULE_ID					  (124U)


/* Sytem clock configuration */
#define PORT_SYSTEM_CLOCK                 (1000000UL)

/*
 * SW Module Version is 1.0.0
 */
#define PORT_SW_MAJOR_VERSION             (1U)
#define PORT_SW_MINOR_VERSION             (0U)
#define PORT_SW_PATCH_VERSION             (0U)

/*
 * AUTOSAR Version is 4.0.3 compatible
 */
#define PORT_AR_RELEASE_MAJOR_VERSION    (4U)
#define PORT_AR_RELEASE_MINOR_VERSION    (3U)
#define PORT_AR_RELEASE_PATCH_VERSION    (1U)

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/

/* Standard AUTOSAR types */
#include "Std_Types.h"

/*Common Macros*/
#include "Common_Macros.h"

/* Port device driver configurations */
#include "Port_Cfg.h"

/*Port Registers*/
#include "Port_Reg.h"

/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/

/* Check if the files Port.h and Port_Cfg.h have the same vendor */
#if (PORT_VENDOR_ID != PORT_VENDOR_ID_CFG_H)
    #error "Port.h and Port_Cfg.h have different vendor ids"
#endif

#ifdef CHECK_AUTOSAR_VERSION
    /* Check if the files Port.h and Port_Cfg.h have the same version */
    #if ((PORT_AR_MAJOR_VERSION != PORT_AR_MAJOR_VERSION_CFG_H) || \
         (PORT_AR_MINOR_VERSION != PORT_AR_MINOR_VERSION_CFG_H) || \
         (PORT_AR_PATCH_VERSION != PORT_AR_PATCH_VERSION_CFG_H))
      #error "AutoSar Version Numbers of Port.h and Port_Cfg.h are different"
    #endif
#endif
#if ((PORT_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION_CFG_H) || \
     (PORT_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION_CFG_H) || \
     (PORT_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION_CFG_H))
  #error "Software Version Numbers of Port.h and Port_Cfg.h are different"
#endif

#ifdef CHECK_AUTOSAR_VERSION
    /* Check if the files Port.h and Std_Types.h have the same version */
    #if ((PORT_AR_MAJOR_VERSION != STD_TYPES_AR_MAJOR_VERSION) || \
         (PORT_AR_MINOR_VERSION != STD_TYPES_AR_MINOR_VERSION))
      #error "AutoSar Version Numbers of Port.h and Std_Types.h are different"
    #endif
#endif

/*==================================================================================================
                                 API Service Id Macros
 ==================================================================================================*/



/**
 * @brief   Instance ID of this port driver.
 */
#define PORT_INSTANCE_ID         (uint8)0x0



/* Service IDs */
/**
 * @brief   API service ID for PORT Init function.
 * @details Parameters used when raising an error/exception.
 *
 * @api
 *
 */
#define PORT_INIT_ID                    (uint8)0x00



/**
 * @brief   API service ID for PORT set pin direction function.
 * @details Parameters used when raising an error/exception.
 *
 * @api
 *
 */
#define PORT_SETPINDIRECTION_ID         (uint8)0x01



/**
 * @brief   API service ID for PORT refresh pin direction function.
 * @details Parameters used when raising an error/exception.
 *
 * @api
 *
 */
#define PORT_REFRESHPINDIRECTION_ID     (uint8)0x02


/**
 * @brief   API service ID for PORT get version info function.
 * @details Parameters used when raising an error/exception.
 *
 * @api
 *
 */
#define PORT_GETVERSIONINFO_ID          (uint8)0x03


/**
 * @brief   API service ID for PORT set pin mode.
 * @details Parameters used when raising an error/exception.
 *
 * @api
 *
 */
#define PORT_SETPINMODE_ID              (uint8)0x04




/*==================================================================================================
                                 DET Error Codes
 ==================================================================================================*/



/* Errors IDs */
/**
* @brief   Error ID of port driver.
* @details The following errors and exception are detectable by the PORT driver
*          if development error detection is enabled.
*
*/

/**
* @brief   Invalid Port Pin ID requested.
* @details Det Error value, returned by Port_SetPinDirection and Port_PinMode
*          if an wrong PortPin ID is passed.
*
* @implements Port_ErrorCodes_define
* @api
*/
 #define PORT_E_PARAM_PIN                ((uint8)0x0A)
/**
* @brief   Port Pin Direction not configured as changeable.
* @details Det Error value, returned by Port_SetPinDirection
*          if the passed PortPin have unchangeable direction.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_DIRECTION_UNCHANGEABLE   ((uint8)0x0B)
/**
* @brief   API Port_Init() service called with wrong parameter.
* @details Det Error value, returned by Port_Init function
*          if Port_Init is called with wrong parameter.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_INIT_FAILED              ((uint8)0x0C)
/**
* @brief   API Port_SetPinMode() service called when mode is invalid.
* @details Det Error value, returned by Port_SetPinMode function
*          if the passed PortPinMode is invalid.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_PARAM_INVALID_MODE       ((uint8)0x0D)
/**
* @brief   API Port_SetPinMode() service called when mode is unchangeable.
* @details Det Error value, returned by Port_SetPinMode function
*          if the passed PortPin have a unchangeable Mode.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_MODE_UNCHANGEABLE        ((uint8)0x0E)
/**
* @brief   API service called without module initialization.
* @details Det Error value, returned by a function if API service called
*          prior to module initialization.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_UNINIT                   ((uint8)0x0F)
/**
* @brief   API service called with NULL Pointer Parameter.
* @details Det Error value, returned by Port_GetVersionInfo function
*          if API is called with NULL Pointer Parameter.
*
* @implements Port_ErrorCodes_define
* @api
*/
#define PORT_E_PARAM_POINTER            ((uint8)0x10)



/*=================================================================================================
*                               		 Module Data Types
=================================================================================================*/

/* Type definition for Port_PinType used by the API Port_SetPinDirection() */
typedef uint16 Port_PinType;


/* Type definition for Port_PinDirectionType used by the API
 * Port_SetPinDirection()
 */
typedef enum
{
  PORT_PIN_OUT = 0,
  PORT_PIN_IN = 1
}Port_PinDirectionType;

/* Port pin mode type, pins number is MCU specific. */

typedef uint16 Port_PinModeType;


typedef uint16 EcucIntegerParamDef;

typedef uint16 EcucBooleanParamDef;


/*
typedef struct{
//EcucIntegerParamDef PortPinId;
//	Port_PinModeType   PortPinInitialMode;
//	Port_PinDirectionType PortPinDirection;
 /// #if (PORT_PIN_LEVEL_VALUE == STD_ON)

 // VAR(EcucBooleanParamDef,    AUTOMATIC) Pinlevel_init;
 #endif  (PORT_PIN_LEVEL_VALUE == STD_ON)



  //#if (PORT_PIN_DIRECTION_CHANGEABLE == STD_ON)
//  VAR(EcucBooleanParamDef,    AUTOMATIC) PinDirection_changeable;
	//#endif  (PORT_PIN_DIRECTION_CHANGEABLE == STD_ON)
//#if (PORT_PIN_MODE_CHANGEABLE == STD_ON)

 // VAR(EcucBooleanParamDef,    AUTOMATIC) PinMode_changeable;
  #endif  (PORT_PIN_MODE_CHANGEABLE == STD_ON)
//}PortPinType;

*/

typedef struct{
		EcucIntegerParamDef PortPinId;
	Port_PinModeType   PortPinInitialMode;
	Port_PinDirectionType PortPinDirection;
 // #if (PORT_PIN_LEVEL_VALUE == STD_ON)

  VAR(EcucBooleanParamDef,    AUTOMATIC) Pinlevel_init;
  //#endif /* (PORT_PIN_LEVEL_VALUE == STD_ON) */

  //#if (PORT_PIN_DIRECTION_CHANGEABLE == STD_ON)
  VAR(EcucBooleanParamDef,    AUTOMATIC) PinDirection_changeable;
	//#endif /* (PORT_PIN_DIRECTION_CHANGEABLE == STD_ON) */
//#if (PORT_PIN_MODE_CHANGEABLE == STD_ON)

  VAR(EcucBooleanParamDef,    AUTOMATIC) PinMode_changeable;
  //#endif /* (PORT_PIN_MODE_CHANGEABLE == STD_ON) */
	//PortPinType* PortPin;
	//EcucIntegerParamDef PortNumberOfPortPins;
}Port_ConfigType;

/*=================================================================================================
*                                     FUNCTION PROTOTYPES
=================================================================================================*/


/**
 * @brief   Initializes the Port Driver module.
 * @details The function @p Port_Init() will initialize ALL ports and port pins
 *          with the configuration set pointed to by the parameter @p ConfigPtr.
 * @post    Port_Init() must be called before all other Port Driver module's functions
 *          otherwise no operation can occur on the MCU ports and port pins.
 *
 * @param[in] ConfigPtr     A pointer to the structure which contains
 *                          initialization parameters.
 *
 * @requirements    PORT078, PORT071, PORT113, PORT140, PORT100, PORT107,
 *                  PORT031, PORT051, PORT087, PORT105, PORT121, PORT002,
 *                  PORT003, PORT005, PORT113, PORT041, PORT042, PORT043.
 *
 * @api
 *
 * @remarks Covers PORT078, PORT071, PORT55, PORT140
 * @remarks Covers PORT100, PORT107
 * @remarks Covers PORT031, PORT051, PORT087
 * @remarks Covers PORT105
 * @remarks Covers PORT121
 * @remarks Covers PORT002, PORT003, PORT005, PORT113
 * @remarks Covers PORT041, PORT042, PORT043
 * @remarks Implements DESIGN001, DESIGN002, DPORT01013, DPORT01030
 * @remarks Implements DPORT01011, DPORT01015, DPORT01014, DPORT05000
 */
extern FUNC(void, PORT_CODE) Port_Init
(
    P2CONST(Port_ConfigType,AUTOMATIC,PORT_APPL_DATA) ConfigPtr
);


/**
 * @brief   Sets the port pin direction.
 * @details The function @p Port_SetPinDirection() will set the port pin direction
 *          during runtime.
 * @pre     @p Port_Init() must have been called first. In order to change the
 *          pin direction the PortPinDirectionChangeable flag must have been set
 *          to @p TRUE.
 *
 * @param[in] Pin           Pin ID number.
 * @param[in] Direction     Port Pin direction.
 *
 * @requirements    PORT059, PORT063, PORT086, PORT117, PORT141.
 *
 * @api
 *
 * @remarks Covers PORT059, PORT063, PORT086, PORT117, PORT141
 * @remarks Implements DESIGN001, DESIGN002, DPORT01013
 */
#if (PORT_SET_PIN_DIRECTION_API == STD_ON) || defined(__DOXYGEN__)
extern FUNC(void, PORT_CODE) Port_SetPinDirection
(
    VAR(Port_PinType, PORT_VAR) Pin,
    VAR(Port_PinDirectionType, PORT_VAR) Direction
);
#endif

/**
 * @brief   Refreshes port direction.
 * @details This function will refresh the direction of all configured ports to
 *          the configured direction.<br>
 *          The PORT driver will exclude from refreshing those port pins that
 *          are configured as "pin direction changeable during runtime".
 * @pre     @p Port_Init() must have been called first.
 *
 * @requirements    PORT060, PORT061, PORT117, PORT142.
 *
 * @api
 *
 * @remarks Covers PORT060, PORT061, PORT117, PORT142
 * @remarks Implements DESIGN001, DESIGN002, DPORT01012
 * @remarks Test_case TST_CS_001, TST_CS_001
 */
extern FUNC(void, PORT_CODE) Port_RefreshPortDirection
(
    void
);

/**
 * @brief   Sets the port pin mode.
 * @details The function @p Port_SetPinMode() will set the port pin mode of the
 *          referenced pin during runtime.
 * @pre     @p Port_Init() must have been called first.
 *
 * @param[in] Pin       Pin ID number.
 * @param[in] Mode      New Port Pin mode to be set on port pin.
 *
 * @requirements    PORT117, PORT145.
 *
 * @api
 *
 * @remarks Covers PORT117, PORT145
 * @remarks Implements DESIGN001, DESIGN002, DPORT01014
 */
#if (PORT_SET_PIN_MODE_API == STD_ON) || defined(__DOXYGEN__)
extern FUNC(void, PORT_CODE) Port_SetPinMode
(
    VAR(Port_PinType, PORT_VAR) Pin,
    VAR(Port_PinModeType, PORT_VAR) Mode
);
#endif

/**
 * @brief   Returns the version information of this module.
 * @details The function @p Port_GetVersionInfo() will return the version
 *          information of this module. The version information includes:<br>
 *          - Module Id,
 *          - Vendor Id,
 *          - Vendor specific version numbers.
 *          .
 *
 * @param[in,out] pVersionInfo      Pointer to where to store the version
 *                                  information of this module.
 *
 * @requirements    PORT103
 *
 * @api
 *
 * @remarks Covers PORT103
 * @remarks Implements DESIGN001, DESIGN002, DPORT01015
 */
#if  (PORT_VERSION_INFO_API == STD_ON) || defined(__DOXYGEN__)
extern FUNC (void, PORT_CODE) Port_GetVersionInfo(P2VAR(Std_VersionInfoType, PORT_VAR_FAST, PORT_APPL_DATA) pVersionInfo);
#endif /* PORT_VERSION_INFO_API == STD_ON */



#endif 	/* PORT_H */
