/******************************************************************************
*
* Module: Port
*
* File Name: Port_Reg.h
*
* Description: header file for Port device driver Registers,
*              implementation is based on AUTOSAR specfications.
*
* Author: Ahmed Wasfy
*
* Date:  May 26, 2019
******************************************************************************/
  /* System control base address and offsets.*/
  #define SYSTEM_CTL_BASE        (0x400FE000U)
  #define GPIO_CLOCKGATE_OFFSET  (0x608U)

  /* This macro is used whenever we want to write data to the microcontroller*/
  #define GPIO_DATA_WRITE_OP_CODE   (0x3FCU)


  /*THE LOCK*/
   #define GPIO_PORTC_LOCK_R  0x4C4F434B



#define GPIO_A_APB_BASE	0x40004000
#define GPIO_A_AHB_BASE	0x40058000

#define GPIO_B_APB_BASE	0x40005000
#define GPIO_B_AHB_BASE	0x40059000

#define GPIO_C_APB_BASE	0x40006000
#define GPIO_C_AHB_BASE	0x4005A000

#define GPIO_D_APB_BASE	0x40007000
#define GPIO_D_AHB_BASE	0x4005B000

#define GPIO_E_APB_BASE	0x40024000
#define GPIO_E_AHB_BASE	0x4005C000

#define GPIO_F_APB_BASE	0x40025000
#define GPIO_F_AHB_BASE	0x4005D000


#define BASE_A		0x40004000
#define BASE_B		0x40005000
#define BASE_C		0x40006000
#define BASE_D		0x40007000
#define BASE_E		0x40024000
#define BASE_F		0x40025000


//OFFSETES

//////////////////////////////////////////////
#define GPIODATA_offset	0x000

//Register 2: GPIO Direction (GPIODIR), offset 0x400
#define GPIODIR_offset		0x400
//////////////////////////////////////////////


//Register 3: GPIO Interrupt Sense (GPIOIS), offset 0x404
#define GPIOIS_offset		0x404

//Register 4: GPIO Interrupt Both Edges (GPIOIBE), offset 0x408
#define GPIOIBE_offset		0x408

//Register 5: GPIO Interrupt Event (GPIOIEV), offset 0x40C
#define GPIOIEV_offset		0x40C

//Register 6: GPIO Interrupt Mask (GPIOIM), offset 0x410
#define GPIOIM_offset		0x410

//Register 7: GPIO Raw Interrupt Status (GPIORIS), offset 0x414
#define GPIORIS_offset		0x414

//Register 8: GPIO Masked Interrupt Status (GPIOMIS), offset 0x418
#define GPIOMIS_offset		0x418

//Register 9: GPIO Interrupt Clear (GPIOICR), offset 0x41C
#define GPIOICR_offset		0x41C


//////////////////////////////////////////////
//Register 10: GPIO Alternate Function Select (GPIOAFSEL), offset 0x420
#define GPIOAFSEL_offset	0x420
//////////////////////////////////////////////


//Register 11: GPIO 2-mA Drive Select (GPIODR2R), offset 0x500
#define GPIODR2R_offset	0x500

//Register 12: GPIO 4-mA Drive Select (GPIODR4R), offset 0x504
#define GPIODR4R_offset	0x504

//Register 13: GPIO 8-mA Drive Select (GPIODR8R), offset 0x508
#define GPIODR8R_offset	0x508

//Register 14: GPIO Open Drain Select (GPIOODR), offset 0x50C
#define GPIOODR_offset	0x50C



//////////////////////////////////////////////
//Register 15: GPIO Pull-Up Select (GPIOPUR), offset 0x510
#define GPIOPUR_offset	0x510

//Register 16: GPIO Pull-Down Select (GPIOPDR), offset 0x514
#define GPIOPDR_offset	0x514

//Register 17: GPIO Slew Rate Control Select (GPIOSLR), offset 0x518
#define GPIOSLR_offset	0x518

//Register 18: GPIO Digital Enable (GPIODEN), offset 0x51C
#define GPIODEN_offset	0x51C

//Register 19: GPIO Lock (GPIOLOCK), offset 0x520
#define GPIOLOCK_offset	0x520

//Register 20: GPIO Commit (GPIOCR), offset 0x524
#define GPIOCR_offset	0x524

//Register 21: GPIO Analog Mode Select (GPIOAMSEL), offset 0x528
#define GPIOAMSEL_offset        0x528

//Register 22: GPIO Port Control (GPIOPCTL), offset 0x52C
#define GPIOPCTL_offset	0x52C



//////////////////////////////////////////////
//Register 23: GPIO ADC Control (GPIOADCCTL), offset 0x530
#define GPIOADCCTL_offset	0x530

//Register 24: GPIO DMA Control (GPIODMACTL), offset 0x534
#define GPIODMACTL_offset	0x534

//Register 25: GPIO Peripheral Identification 4 (GPIOPeriphID4), offset 0xFD0
#define GPIOPeriphID4_offset	0xFD0

//Register 26: GPIO Peripheral Identification 5 (GPIOPeriphID5), offset 0xFD4
#define GPIOPeriphID5_offset	0xFD4

//Register 27: GPIO Peripheral Identification 6 (GPIOPeriphID6), offset 0xFD8
#define GPIOPeriphID6_offset	0xFD8

//Register 28: GPIO Peripheral Identification 7 (GPIOPeriphID7), offset 0xFDC
#define GPIOPeriphID7_offset	0xFDC

//Register 29: GPIO Peripheral Identification 0 (GPIOPeriphID0), offset 0xFE0
#define GPIOPeriphID0_offset	0xFE0

//Register 30: GPIO Peripheral Identification 1 (GPIOPeriphID1), offset 0xFE4
#define GPIOPeriphID1_offset	0xFE4

//Register 31: GPIO Peripheral Identification 2 (GPIOPeriphID2), offset 0xFE8
#define GPIOPeriphID2_offset	0xFE8

//Register 32: GPIO Peripheral Identification 3 (GPIOPeriphID3), offset 0xFEC
#define GPIOPeriphID3_offset	0xFEC

//Register 33: GPIO PrimeCell Identification 0 (GPIOPCellID0), offset 0xFF0
#define GPIOPCellID0_offset	0xFF0

//Register 34: GPIO PrimeCell Identification 1 (GPIOPCellID1), offset 0xFF4
#define GPIOPCellID1_offset	0xFF4

//Register 35: GPIO PrimeCell Identification 2 (GPIOPCellID2), offset 0xFF8
#define GPIOPCellID2_offset	0xFF8

//Register 36: GPIO PrimeCell Identification 3 (GPIOPCellID3), offset 0xFFC
#define GPIOPCellID3_offset	0xFFC





