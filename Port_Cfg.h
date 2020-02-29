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
#define PORT_NUMBER_OF_PORT_PINS                                            (43U)

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
#define PORT_PIN_MODE_ADC		(0U)
#define PORT_PIN_MODE_DIO		(10U)
#define PORT_PIN_NOT_ACTIVE             (9U)


#define PORT_PIN_MODE_UART             (1U)

#define PORT_PIN_MODE_SSI              (2U)
#define PORT_PIN_MODE_UART1            (2U)

#define PORT_PIN_MODE_I2C              (3U)
#define PORT_PIN_MODE_CAN0             (3U)

#define PORT_PIN_MODE_PWM0             (4U)

#define PORT_PIN_MODE_PWM1             (5U)

#define PORT_PIN_MODE_QEI              (6U)

#define PORT_PIN_MODE_GPT              (7U)

#define PORT_PIN_MODE_CAN             (8U)
#define PORT_PIN_MODE_USB             (8U)










/*
#DEFINE PORT_NUMBER_OF_PORT PINS (PRECOMPILED , ARRY NUMBER OF pins )



*/


/* Port Pin Handles */
#define PortA_PortPin0    (uint16)0
#define PortA_PortPin1    (uint16)1
#define PortA_PortPin2    (uint16)2
#define PortA_PortPin3    (uint16)3
#define PortA_PortPin4    (uint16)4
#define PortA_PortPin5    (uint16)5
#define PortA_PortPin6    (uint16)6
#define PortA_PortPin7    (uint16)7
#define PortB_PortPin0    (uint16)8
#define PortB_PortPin1    (uint16)9
#define PortB_PortPin2    (uint16)10
#define PortB_PortPin3    (uint16)11
#define PortB_PortPin4    (uint16)12
#define PortB_PortPin5    (uint16)13
#define PortB_PortPin6    (uint16)14
#define PortB_PortPin7    (uint16)15
#define PortC_PortPin0    (uint16)16
#define PortC_PortPin1    (uint16)17
#define PortC_PortPin2    (uint16)18
#define PortC_PortPin3    (uint16)19
#define PortC_PortPin4    (uint16)20
#define PortC_PortPin5    (uint16)21
#define PortC_PortPin6    (uint16)22
#define PortC_PortPin7    (uint16)23
#define PortD_PortPin0    (uint16)24
#define PortD_PortPin1    (uint16)25
#define PortD_PortPin2    (uint16)26
#define PortD_PortPin3    (uint16)27
#define PortD_PortPin4    (uint16)28
#define PortD_PortPin5    (uint16)29
#define PortD_PortPin6    (uint16)30
#define PortD_PortPin7    (uint16)31
#define PortE_PortPin0    (uint16)32
#define PortE_PortPin1    (uint16)33
#define PortE_PortPin2    (uint16)34
#define PortE_PortPin3    (uint16)35
#define PortE_PortPin4    (uint16)36
#define PortE_PortPin5    (uint16)37
#define PortF_PortPin0    (uint16)38
#define PortF_PortPin1    (uint16)39
#define PortF_PortPin2    (uint16)40
#define PortF_PortPin3    (uint16)41
#define PortF_PortPin4    (uint16)42
