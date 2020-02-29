/******************************************************************************
*
* Module: Port_PBcfg
*
* File Name: Port_PBcfg.c
*
* Description: Source file for post build time configurable parameters,
*              implementation is based on AUTOSAR specfications.
*
* Author: Abdulmaguid Eissa
*
* Date:  May 26, 2019
******************************************************************************/

#include "Port.h"

/*
* SW Module Version is 1.0.0
*/
#define PORT_PBCFG_SW_MAJOR_VERSION             (1U)
#define PORT_PBCFG_SW_MINOR_VERSION             (0U)
#define PORT_PBCFG_SW_PATCH_VERSION             (0U)

/*
* AUTOSAR Version is 4.0.3 compatible
*/
#define PORT_PBCFG_AR_RELEASE_MAJOR_VERSION     (4U)
#define PORT_PBCFG_AR_RELEASE_MINOR_VERSION     (3U)
#define PORT_PBCFG_AR_RELEASE_PATCH_VERSION     (1U)

/* Check compatibility of Port.h AUTOSAR version with
* Port_PBcfg.c AUTOSAR version.
*/
#if ((PORT_PBCFG_AR_RELEASE_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
 ||  (PORT_PBCFG_AR_RELEASE_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
	#error "The AR version of Port.h does not match the expected version"
#endif

/* Check compatibility of Port.h SW version with
* Port_PBcfg.c SW version.
*/
#if ((PORT_PBCFG_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
 ||  (PORT_PBCFG_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
 ||  (PORT_PBCFG_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
	#error "The AR version of Port.h does not match the expected version"
#endif

/*


typedef struct{
  VAR(uint16,    AUTOMATIC) PinID;
  VAR(uint16,    AUTOMATIC) PinMode;
  VAR(boolean,    AUTOMATIC) PinDir;
  #if (PORT_PIN_LEVEL_VALUE == STD_ON)

  VAR(boolean,    AUTOMATIC) Pinlevel_init;
  #endif

  #if (PORT_PIN_DIRECTION_CHANGEABLE == STD_ON)
  VAR(boolean,    AUTOMATIC) PinDirection_changeable;
	#endif
#if (PORT_PIN_MODE_CHANGEABLE == STD_ON)

  VAR(boolean,    AUTOMATIC) PinMode_changeable;
  #endif

//additional things



}Port_ConfigPin;


*/

/* PB structure used with Dio_Init API */
const Port_ConfigType Port_Configuration[] = {

	{
		/* Pin ID */
		PortA_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},

	{
		/* Pin ID */
		PortA_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_UART,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_SSI,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortA_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortB_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortC_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin6,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortD_PortPin7,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortE_PortPin5,

		/* Pin Initial Mode */
		PORT_PIN_MODE_ADC,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin0,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin1,

		/* Pin Initial Mode */
		PORT_PIN_MODE_UART,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin2,

		/* Pin Initial Mode */
		PORT_PIN_MODE_I2C,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_LOW,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin3,

		/* Pin Initial Mode */
		PORT_PIN_MODE_DIO,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_LOW,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},
	{
		/* Pin ID */
		PortF_PortPin4,

		/* Pin Initial Mode */
		PORT_PIN_MODE_GPT,

		/* Pin Direction */
		PORT_PIN_OUT,

		/* Pin Initial Value */

		PORT_PIN_LEVEL_HIGH,

		/* Pin Direction Changeable */
		PORT_PIN_DIRECTION_CHANGEABLE,

		/* Pin Mode Changeable */
		PORT_PIN_MODE_CHANGEABLE


	},

	//continue
};

