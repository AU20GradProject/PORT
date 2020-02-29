/******************************************************************************
*
* Module: Port
*
* File Name: Port.c
*
* Description: Source file for Port device driver APIs implementation,
*              implementation is based on AUTOSAR specfications.
*
* Author: Ahmed Wasfy
*
* Date:  May 26, 2019
******************************************************************************/

#include "Port.h"
#include "..\DET\Det.h"


#if (PORT_DEV_ERROR_DETECT == STD_ON)
#include "Det.h"
	/* AUTOSAR version checking */
	#if ((DET_AR_MAJOR_VERSION != PORT_AR_RELEASE_MAJOR_VERSION)\
	 ||  (DET_AR_MINOR_VERSION != PORT_AR_RELEASE_MINOR_VERSION)\
	 ||  (DET_AR_PATCH_VERSION != PORT_AR_RELEASE_PATCH_VERSION))
		#error "The AR version of Det.h does not match the expected version"
	#endif /* AUTOSAR version checking */

	/* SW module version checking */
	#if ((DET_SW_MAJOR_VERSION != PORT_SW_MAJOR_VERSION)\
	 ||  (DET_SW_MINOR_VERSION != PORT_SW_MINOR_VERSION)\
	 ||  (DET_SW_PATCH_VERSION != PORT_SW_PATCH_VERSION))
		#error "The AR version of Det.h does not match the expected version"
	#endif /* SW module version checking */
#endif /* (DET_DEV_ERROR_DETECT == STD_ON) */



#if (PORT_SET_PIN_DIRECTION_API == STD_ON) || defined(__DOXYGEN__)
extern FUNC(void, PORT_CODE) Port_SetPinDirection
(
    VAR(Port_PinType, PORT_VAR) Pin,
    VAR(Port_PinDirectionType, PORT_VAR) Direction
	){
		uint32 B[6] = {BASE_A,BASE_B,BASE_C,BASE_D,BASE_E,BASE_F};
		uint32 Base;
		if (Pin<PortF_PortPin0){
			Base=B[Pin/8];
			Pin%=8;
		}
		else	{
			Base=BASE_F;
			Pin=(Pin-PortF_PortPin0)%5;
		}
		if(Direction == PORT_PIN_OUT){
		SET_BIT(Base + GPIODIR_offset,Pin);
	}else{
		CLEAR_BIT(Base + GPIODIR_offset,Pin);
	}

	}
#endif

extern FUNC(void, PORT_CODE) Port_SetPinMode
(
    VAR(Port_PinType, PORT_VAR) Pin,
    VAR(Port_PinModeType, PORT_VAR) Mode
	){

		uint32 B[6] = {BASE_A,BASE_B,BASE_C,BASE_D,BASE_E,BASE_F};
		uint32 Base;
		if (Pin<PortF_PortPin0){
			Base=B[Pin/8];
			Pin%=8;
		}
		else	{
			Base=BASE_F;
			Pin=(Pin-PortF_PortPin0)%5;
		}
	if(Mode == PORT_PIN_MODE_ADC){
		SET_BIT(Base + GPIOAMSEL_offset,Pin);
	}else if(Mode == PORT_PIN_MODE_ADC){
		SET_BIT(Base + GPIOADCCTL_offset,Pin);
	}else if(Mode == PORT_PIN_MODE_DIO){
		CLEAR_BIT(Base + GPIOADCCTL_offset,Pin);
		CLEAR_BIT(Base + GPIOAMSEL_offset,Pin);
		SET_BIT(Base + GPIODEN_offset,Pin);
	}else{
		SET_BIT(Base + GPIOAFSEL_offset,Pin);
		SET_BIT(Base + GPIODEN_offset,Pin);
		WRITE_REG_32BIT(Base + GPIOPCTL_offset,READ_REG_32BIT(Base + GPIOPCTL_offset) | ( (uint32) Mode << (Pin << 2) ) );

	}

	}




extern FUNC(void, PORT_CODE) Port_Init
(
    P2CONST(Port_ConfigType,AUTOMATIC,PORT_APPL_DATA) ConfigPtr
	){

		uint32 B[6] = {BASE_A,BASE_B,BASE_C,BASE_D,BASE_E,BASE_F};
		uint32 Base,pin;
	//	Port_PinDirectionType Dir;
	//	Port_PinModeType Mode;
		uint8 i=0;
		for(i=0;i<PORT_NUMBER_OF_PORT_PINS;i++){
		pin=ConfigPtr[i].PortPinId;
		if (pin<PortF_PortPin0){
			Base=B[pin/8];
			pin%=8;
		}
		else	{
			Base=BASE_F;
			pin=(pin-PortF_PortPin0)%5;
		}
                
		if (ConfigPtr[i].PortPinInitialMode==PORT_PIN_NOT_ACTIVE)continue;

			WRITE_REG_32BIT((Base+GPIOLOCK_offset),GPIO_PORTC_LOCK_R);
			//(*((volatile uint32 *)(Base+GPIOLOCK_offset)))=GPIO_PORTC_LOCK_R;
                SET_BIT((Base + GPIOCR_offset),pin);

		if (ConfigPtr[i].PortPinInitialMode==PORT_PIN_MODE_DIO) {
                        READ_REG_32BIT(Base + GPIOPCTL_offset)&=(~(3<<((pin << 2)))) ;
			CLEAR_BIT(Base + GPIOAMSEL_offset,pin);
			CLEAR_BIT(Base + GPIOPCTL_offset,pin);
			CLEAR_BIT(Base + GPIOAFSEL_offset,pin);

			//WRITE_REG_32BIT(Base + GPIOPCTL,READ_REG_32BIT(Base + GPIOPCTL) | ( (uint32) Mode << (Pin << 2) ) );
			//WRITE_REG_32BIT(Base + GPIOPCTL,READ_REG_32BIT(Base + GPIOPCTL) | ( (uint32) Mode << (Pin << 2) ) );

			SET_BIT(Base + GPIOPUR_offset,pin);
			SET_BIT(Base + GPIODEN_offset,pin);
			if(ConfigPtr[i].PortPinDirection==PORT_PIN_OUT){
				SET_BIT(Base + GPIODIR_offset,pin);
				}
				else{
					CLEAR_BIT(Base + GPIODIR_offset,pin);

				}



		}


		else if (ConfigPtr[i].PortPinInitialMode==PORT_PIN_MODE_ADC){
                  
                        
                        
                        READ_REG_32BIT(Base + GPIOPCTL_offset)&=(~(3<<((pin << 2)))) ;
			SET_BIT((Base + GPIOAMSEL_offset),pin);
			if(ConfigPtr[i].PortPinDirection==PORT_PIN_OUT){
				SET_BIT(Base + GPIODIR_offset,pin);
				}
				else{
					CLEAR_BIT(Base + GPIODIR_offset,pin);

				}
		}


		else{
		SET_BIT(Base + GPIOAFSEL_offset,pin);
		SET_BIT(Base + GPIODEN_offset,pin);
                
                 //volatile int mode = ( (uint32) ConfigPtr[i].PortPinInitialMode << (pin << 2) );
                
                 //volatile int reading=READ_REG_32BIT(Base + GPIOPCTL_offset)&=(~(3<<((pin << 2)))) ;
                
                 //int x=reading;
                   
		WRITE_REG_32BIT((Base + GPIOPCTL_offset),( (READ_REG_32BIT(Base + GPIOPCTL_offset)&=(~(3<<((pin << 2))))) | ( (uint32) ConfigPtr[i].PortPinInitialMode << (pin << 2) ) ));
                //int x=6;
		if(ConfigPtr[i].PortPinDirection==PORT_PIN_OUT){
				SET_BIT(Base + GPIODIR_offset,pin);
				}
				else{
					CLEAR_BIT(Base + GPIODIR_offset,pin);

				}
	}


                }
        
        }


void Port_RefreshPortDirection(void){}/*{


}*/


/*{
	uint32 B[6] = {BASE_A,BASE_B,BASE_C,BASE_D,BASE_E,BASE_F};
	uint32 i = 0,j,Pin,Base;
	for(j = 0;j < PORT_NUMBER_OF_PORT_PINS;j++){
		pin=PortConfig[i].PortPin;

		if (pin<PortF_PortPin0){
			Base=B[pin/8];
			pin%=8;
		}
		else	{
			Base=BASE_F;
			pin=(pin-PortF_PortPin0)%5;
		}
		for(Pin = 0;Pin < PORT_PIN_NUMBER;Pin++){
			if(PortConfig.PortPin[i].PortPinInitialMode == PORT_PIN_NOT_ACTIVE){

			}else if(PortConfig.PortPin[i].PortPinDirection == PORT_PIN_OUT){
	    		SET_BIT(Base + GPIODIR,Pin);
	    	}else{
	    		CLEAR_BIT(Base + GPIODIR,Pin);
	    	}
			i++;
		}
	}
}
*/
