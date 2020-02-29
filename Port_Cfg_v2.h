/*****************************************************************
*
* Module: Port_Cfg
*
* File Name: Port_Cfg.h
*
* Description: Header file for Port Module,
*			   implementation is based on AUTOSAR specfications.
*              Contains symbolic names definitions.
*
*
* Author: Ahmed Wasfy
*
* Date:  October 2, 2019
*******************************************************************/

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/* Port Vendor ID in AUTOSAR */
#define PORT_VENDOR_ID_CFG_H                    (2020U)

/*
* SW Module Version is 1.0.0
*/
#define PORT_SW_MAJOR_VERSION_CFG_H     (1U)
#define PORT_SW_MINOR_VERSION_CFG_H     (0U)
#define PORT_SW_PATCH_VERSION_CFG_H    (0U)

/*
* AUTOSAR Version is 4.3.1 compatible
*/

#define PORT_CFG_AR_RELEASE_PATCH_VERSION     (1U)

#define PORT_MODULE_ID_VALUE            124
#define PORT_VENDOR_ID_VALUE            23




/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/


/* Instance ID of the PORT Driver Component */
#define PORT_INSTANCE_ID_VALUE                    0

/* Enables/Disables Development error detect */
#define PORT_DEV_ERROR_DETECT                     STD_OFF

/* Enables/Disables Port_SetPinDirection API */
#define PORT_SET_PIN_DIRECTION_API                STD_ON

/* Enables/Disables Port_SetPinMode API */
#define PORT_SET_PIN_MODE_API                     STD_ON

/* Enables/Disables Port_GetVersionInfo API */
#define PORT_VERSION_INFO_API                     STD_ON



/* Pre-compile parameter for number of pins per each port */
#define PORT_NUMBER_OF_PORT_PINS                (43U)                            (43U)

/* Number of configured port modes */
#define PORT_CONFIG_MODE_NUM                  (15U)






/* Precompile and Post Build option for setting the Pin direction,
   according to its mode E.g. a pin used for an ADC must be configured
   to be an in port. */
#define PORT_PIN_DIRECTION                    (STD_ON)

/* Precompile and Post Build option for changing a Pin
   direction during runtime */
#define PORT_PIN_DIRECTION_CHANGEABLE         (STD_ON)

/* Precompile and Post Build option for setting initial Pin mode
   to be ADC, DIO, LIN, .. */
#define PORT_PIN_INITIAL_MODE                 (STD_ON)

/* Precompile and Post Build option for setting
   Port Pin Level value from Port pin list. */
#define PORT_PIN_LEVEL_VALUE                  (STD_ON)

/* Precompile and Post Build option for setting Pin mode
to be ADC, DIO, LIN, .. */
#define PORT_PIN_MODE                         (STD_ON)

/* Precompile and Post Build option for Port pin mode changeability */
#define PORT_PIN_MODE_CHANGEABLE              (STD_ON)

/* Port Pin Level value from Port pin list */
#if (PORT_PIN_LEVEL_VALUE == STD_ON)
#define PORT_PIN_LEVEL_HIGH                   (STD_HIGH)
#define PORT_PIN_LEVEL_LOW                   (STD_LOW)
#endif /* (PORT_PIN_LEVEL_VALUE == STD_ON) */


/* Port Pin MODE value  */
#define PORT_PIN_MODE_NOT_USED	(11U)
#define PORT_PIN_MODE_TRIGGER_ADC	(12U)

#define PORT_PIN_MODE_ADC		(0U)
#define PORT_PIN_MODE_DIO		(1U)
#define PORT_PIN_MODE_CAN		(2U)
#define PORT_PIN_MODE_GPT		(3U)
#define PORT_PIN_MODE_WDG		(4U)
#define PORT_PIN_MODE_FLEXRAY	(5U)
#define PORT_PIN_MODE_ICU		(6U)
#define PORT_PIN_MODE_LIN		(7U)
#define PORT_PIN_MODE_MEM		(8U)
#define PORT_PIN_MODE_PWM		(9U)
#define PORT_PIN_MODE_SPI		(10U)

#define PORT_PIN_NOT_ACTIVE     (ffU)

/*
#DEFINE PORT_NUMBER_OF_PORT PINS (PRECOMPILED , ARRY NUMBER OF pins )



*/


/* Port Pin ID Handles */
#define PortA_PortPin0    (0U)
#define PortA_PortPin1    (1U)
#define PortA_PortPin2    (2U)
#define PortA_PortPin3    (3U)
#define PortA_PortPin4    (4U)
#define PortA_PortPin5    (5U)
#define PortA_PortPin6    (6U)
#define PortA_PortPin7    (7U)
#define PortB_PortPin0    (8U)
#define PortB_PortPin1    (9U)
#define PortB_PortPin2    (10U)
#define PortB_PortPin3    (11U)
#define PortB_PortPin4    (12U)
#define PortB_PortPin5    (13U)
#define PortB_PortPin6    (14U)
#define PortB_PortPin7    (15U)
#define PortC_PortPin0    (16U)
#define PortC_PortPin1    (17U)
#define PortC_PortPin2    (18U)
#define PortC_PortPin3    (19U)
#define PortC_PortPin4    (20U)
#define PortC_PortPin5    (21U)
#define PortC_PortPin6    (22U)
#define PortC_PortPin7    (23U)
#define PortD_PortPin0    (24U)
#define PortD_PortPin1    (25U)
#define PortD_PortPin2    (26U)
#define PortD_PortPin3    (27U)
#define PortD_PortPin4    (28U)
#define PortD_PortPin5    (29U)
#define PortD_PortPin6    (30U)
#define PortD_PortPin7    (31U)
#define PortE_PortPin0    (32U)
#define PortE_PortPin1    (33U)
#define PortE_PortPin2    (34U)
#define PortE_PortPin3    (35U)
#define PortE_PortPin4    (36U)
#define PortE_PortPin5    (37U)
#define PortF_PortPin0    (38U)
#define PortF_PortPin1    (39U)
#define PortF_PortPin2    (40U)
#define PortF_PortPin3    (41U)
#define PortF_PortPin4    (42U)


