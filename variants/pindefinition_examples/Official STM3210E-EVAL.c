
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                          |I2C1|I2C2|SPI1 |SPI2 |SPI3 |USART1|USART2|USART3|ADC1 |TIM (PWM)                                 |USB|SDIO|RCC       |SYS           
PA0 , // |WAKEUP [B2 Blue Button]              |    |    |     |     |     |      |      |      |*IN0 |*TIM5_CH1 *TIM2_CH1                       |   |    |          |              
PA1 , // |USART2_RTS [ST3232E_T2IN]            |    |    |     |     |     |      |      |      |*IN1 |*TIM5_CH2 *TIM2_CH2                       |   |    |          |              
PA2 , // |USART2_TX [ST3232E_T1IN]             |    |    |     |     |     |      |*TX   |      |*IN2 |*TIM5_CH3 *TIM9_CH1 *TIM2_CH3             |   |    |          |              
PA3 , // |USART2_RX [ST3232_R1OUT]             |    |    |     |     |     |      |*RX   |      |*IN3 |*TIM5_CH4 *TIM9_CH2 *TIM2_CH4             |   |    |          |              
PA4 , // |                                     |    |    |     |     |     |      |      |      |*IN4 |                                          |   |    |          |              
PA5 , // |SPI1_SCK [M25P64_C]                  |    |    |*SCK |     |     |      |      |      |*IN5 |                                          |   |    |          |              
PA6 , // |SPI1_MISO [M25P64_Q]                 |    |    |*MISO|     |     |      |      |      |*IN6 |*TIM3_CH1 *TIM13_CH1                      |   |    |          |              
PA7 , // |SPI1_MOSI [M25P64_D]                 |    |    |*MOSI|     |     |      |      |      |*IN7 |+TIM1_CH1N *TIM8_CH1N *TIM3_CH2 *TIM14_CH1|   |    |          |              
PA8 , // |                                     |    |    |     |     |     |      |      |      |     |*TIM1_CH1                                 |   |    |          |              
PA9 , // |USART1_TX [ST3232E_T1IN]             |    |    |     |     |     |*TX   |      |      |     |*TIM1_CH2                                 |   |    |          |              
PA10, // |USART1_RX [ST3232E_R1OUT]            |    |    |     |     |     |*RX   |      |      |     |*TIM1_CH3                                 |   |    |          |              
PA11, // |USB_DM                               |    |    |     |     |     |      |      |      |     |*TIM1_CH4                                 |*DM|    |          |              
PA12, // |USB_DP                               |    |    |     |     |     |      |      |      |     |                                          |*DP|    |          |              
PA13, // |TMS/SWDIO                            |    |    |     |     |     |      |      |      |     |                                          |   |    |          |*JTMS-SWDIO   
PA14, // |TCK/SWCLK                            |    |    |     |     |     |      |      |      |     |                                          |   |    |          |*JTCK-SWCLK   
PA15, // |TDI                                  |    |    |     |     |     |      |      |      |     |+TIM2_CH1                                 |   |    |          |*JTDI         
PB0 , // |                                     |    |    |     |     |     |      |      |      |*IN8 |*TIM8_CH2N *TIM3_CH3 +TIM1_CH2N           |   |    |          |              
PB1 , // |                                     |    |    |     |     |     |      |      |      |*IN9 |*TIM3_CH4 +TIM1_CH3N *TIM8_CH3N           |   |    |          |              
PB2 , // |SPI1_CS [M25P64_S]                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PB3 , // |TDO/SWO                              |    |    |+SCK |     |*SCK |      |      |      |     |+TIM2_CH2                                 |   |    |          |*JTDO-TRACESWO
PB4 , // |TRST                                 |    |    |+MISO|     |*MISO|      |      |      |     |+TIM3_CH1                                 |   |    |          |*NJTRST       
PB5 , // |TemperatureSensor_INT [STLM75_OS/INT]|    |    |+MOSI|     |*MOSI|      |      |      |     |+TIM3_CH2                                 |   |    |          |              
PB6 , // |I2C_SCK [AK4343_CCLK/SCL]            |*SCL|    |     |     |     |+TX   |      |      |     |*TIM4_CH1                                 |   |    |          |              
PB7 , // |I2C_SDA [AK4343_CDTI/SDA]            |*SDA|    |     |     |     |+RX   |      |      |     |*TIM4_CH2                                 |   |    |          |              
PB8 , // |CAN_RX [SN65HVD_R]                   |+SCL|    |     |     |     |      |      |      |     |*TIM10_CH1 *TIM4_CH3                      |   |*D4 |          |              
PB9 , // |CAN_TX [SN65HVD_D]                   |+SDA|    |     |     |     |      |      |      |     |*TIM4_CH4 *TIM11_CH1                      |   |*D5 |          |              
PB10, // |                                     |    |*SCL|     |     |     |      |      |*TX   |     |+TIM2_CH3                                 |   |    |          |              
PB11, // |                                     |    |*SDA|     |     |     |      |      |*RX   |     |+TIM2_CH4                                 |   |    |          |              
PB12, // |I2S_CMD [AK4343_LRCK]                |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PB13, // |I2S_CK [AK4343_BICK]                 |    |    |     |*SCK |     |      |      |      |     |*TIM1_CH1N                                |   |    |          |              
PB14, // |USB_Disconnect                       |    |    |     |*MISO|     |      |      |      |     |*TIM1_CH2N *TIM12_CH1                     |   |    |          |              
PB15, // |I2S_DIN [AK4343_SDTI]                |    |    |     |*MOSI|     |      |      |      |     |*TIM1_CH3N *TIM12_CH2                     |   |    |          |              
PC0 , // |                                     |    |    |     |     |     |      |      |      |*IN10|                                          |   |    |          |              
PC1 , // |                                     |    |    |     |     |     |      |      |      |*IN11|                                          |   |    |          |              
PC2 , // |                                     |    |    |     |     |     |      |      |      |*IN12|                                          |   |    |          |              
PC3 , // |                                     |    |    |     |     |     |      |      |      |*IN13|                                          |   |    |          |              
PC4 , // |Potentiometer [RV1]                  |    |    |     |     |     |      |      |      |*IN14|                                          |   |    |          |              
PC5 , // |                                     |    |    |     |     |     |      |      |      |*IN15|                                          |   |    |          |              
PC6 , // |I2S_MCK [AK4343_MCK1]                |    |    |     |     |     |      |      |      |     |*TIM8_CH1 +TIM3_CH1                       |   |*D6 |          |              
PC7 , // |                                     |    |    |     |     |     |      |      |      |     |+TIM3_CH2 *TIM8_CH2                       |   |*D7 |          |              
PC8 , // |MicroSDCard_D0                       |    |    |     |     |     |      |      |      |     |+TIM3_CH3 *TIM8_CH3                       |   |*D0 |          |              
PC9 , // |MicroSDCard_D1                       |    |    |     |     |     |      |      |      |     |+TIM3_CH4 *TIM8_CH4                       |   |*D1 |          |              
PC10, // |MicroSDCard_D2                       |    |    |     |     |+SCK |      |      |+TX   |     |                                          |   |*D2 |          |              
PC11, // |MicroSDCard_D3                       |    |    |     |     |+MISO|      |      |+RX   |     |                                          |   |*D3 |          |              
PC12, // |MicroSDCard_CLK                      |    |    |     |     |+MOSI|      |      |      |     |                                          |   |*CK |          |              
PC13, // |Anti_Tamper [B3 Blue Button]         |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PC14, // |                                     |    |    |     |     |     |      |      |      |     |                                          |   |    |*OSC32_IN |              
PC15, // |                                     |    |    |     |     |     |      |      |      |     |                                          |   |    |*OSC32_OUT|              
PD0 , // |D2                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD1 , // |D3                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD2 , // |MicroSDCard_CMD                      |    |    |     |     |     |      |      |      |     |                                          |   |*CMD|          |              
PD3 , // |JOY_DOWN [MT008-A_DOWN]              |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD4 , // |FSMC_NOE                             |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD5 , // |FSMC_NWE                             |    |    |     |     |     |      |+TX   |      |     |                                          |   |    |          |              
PD6 , // |FSMC_NWAIT                           |    |    |     |     |     |      |+RX   |      |     |                                          |   |    |          |              
PD7 , // |FSMC_NCE2 [NandFlash_E]              |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD8 , // |D13                                  |    |    |     |     |     |      |      |+TX   |     |                                          |   |    |          |              
PD9 , // |D14                                  |    |    |     |     |     |      |      |+RX   |     |                                          |   |    |          |              
PD10, // |D15                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD11, // |A16                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PD12, // |A17                                  |    |    |     |     |     |      |      |      |     |+TIM4_CH1                                 |   |    |          |              
PD13, // |A18                                  |    |    |     |     |     |      |      |      |     |+TIM4_CH2                                 |   |    |          |              
PD14, // |D0                                   |    |    |     |     |     |      |      |      |     |+TIM4_CH3                                 |   |    |          |              
PD15, // |D1                                   |    |    |     |     |     |      |      |      |     |+TIM4_CH4                                 |   |    |          |              
PE0 , // |FMC_NBL0 [SRAM_BLE]                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PE1 , // |FMC_NBL1 [SRAM_BHE]                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PE2 , // |                                     |    |    |     |     |     |      |      |      |     |                                          |   |    |          |*TRACECLK     
PE3 , // |A19                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |*TRACED0      
PE4 , // |A20                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |*TRACED1      
PE5 , // |A21                                  |    |    |     |     |     |      |      |      |     |+TIM9_CH1                                 |   |    |          |*TRACED2      
PE6 , // |A22                                  |    |    |     |     |     |      |      |      |     |+TIM9_CH2                                 |   |    |          |*TRACED3      
PE7 , // |D                                    |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PE8 , // |D5                                   |    |    |     |     |     |      |      |      |     |+TIM1_CH1N                                |   |    |          |              
PE9 , // |D6                                   |    |    |     |     |     |      |      |      |     |+TIM1_CH1                                 |   |    |          |              
PE10, // |D7                                   |    |    |     |     |     |      |      |      |     |+TIM1_CH2N                                |   |    |          |              
PE11, // |D8                                   |    |    |     |     |     |      |      |      |     |+TIM1_CH2                                 |   |    |          |              
PE12, // |D9                                   |    |    |     |     |     |      |      |      |     |+TIM1_CH3N                                |   |    |          |              
PE13, // |D10                                  |    |    |     |     |     |      |      |      |     |+TIM1_CH3                                 |   |    |          |              
PE14, // |D11                                  |    |    |     |     |     |      |      |      |     |+TIM1_CH4                                 |   |    |          |              
PE15, // |D12                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF0 , // |A0                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF1 , // |A1                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF2 , // |A2                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF3 , // |A3                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF4 , // |A4                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF5 , // |A5                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF6 , // |LED1 [LD1 Green Led]                 |    |    |     |     |     |      |      |      |     |+TIM10_CH1                                |   |    |          |              
PF7 , // |LED2 [LD2 Orange Led]                |    |    |     |     |     |      |      |      |     |+TIM11_CH1                                |   |    |          |              
PF8 , // |LED3 [LD3 Red Led]                   |    |    |     |     |     |      |      |      |     |+TIM13_CH1                                |   |    |          |              
PF9 , // |LED4 [LD4 Blue Led]                  |    |    |     |     |     |      |      |      |     |+TIM14_CH1                                |   |    |          |              
PF10, // |                                     |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF11, // |MicroSDCard_Detect                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF12, // |A6                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF13, // |A7                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF14, // |A8                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PF15, // |A9                                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG0 , // |A10                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG1 , // |A11                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG2 , // |A12                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG3 , // |A13                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG4 , // |A14                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG5 , // |A15                                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG6 , // |                                     |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG7 , // |JOY_SEL [MT008-A_SEL]                |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG8 , // |User_Button [B4 Blue Button]         |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG9 , // |FSMC_NE2 [NorFlash_E]                |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG10, // |FSMC_NE3 [Sram_CE]                   |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG11, // |Audio_PDN [AK4343_PDN]               |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG12, // |FSMC_NE4 [TFTLCD_CS]                 |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG13, // |JOY_RIGHT [MT008-A_RIGHT]            |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG14, // |JOY_LEFT [MT008-A_LEFT]              |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
PG15, // |JOY_UP [MT008-A_UP]                  |    |    |     |     |     |      |      |      |     |                                          |   |    |          |              
NB_DIGITAL_PINS,
};

#include "stm32f1xx_hal.h"
#include "spi_com.h"
#include "twi.h"
#include "uart.h"
#include "analog.h"
#include "variant.h"

extern const PinDescription g_APinDescription[]=
{
  { PA0 , GPIO_PIN_0 , GPIOA, GPIO_PIN_IO, false},
  { PA1 , GPIO_PIN_1 , GPIOA, GPIO_PIN_IO, false},
  { PA2 , GPIO_PIN_2 , GPIOA, GPIO_PIN_IO, false},
  { PA3 , GPIO_PIN_3 , GPIOA, GPIO_PIN_IO, false},
  { PA4 , GPIO_PIN_4 , GPIOA, GPIO_PIN_IO, false},
  { PA5 , GPIO_PIN_5 , GPIOA, GPIO_PIN_IO, false},
  { PA6 , GPIO_PIN_6 , GPIOA, GPIO_PIN_IO, false},
  { PA7 , GPIO_PIN_7 , GPIOA, GPIO_PIN_IO, false},
  { PA8 , GPIO_PIN_8 , GPIOA, GPIO_PIN_IO, false},
  { PA9 , GPIO_PIN_9 , GPIOA, GPIO_PIN_IO, false},
  { PA10, GPIO_PIN_10, GPIOA, GPIO_PIN_IO, false},
  { PA11, GPIO_PIN_11, GPIOA, GPIO_PIN_IO, false},
  { PA12, GPIO_PIN_12, GPIOA, GPIO_PIN_IO, false},
  { PA13, GPIO_PIN_13, GPIOA, GPIO_PIN_IO, false},
  { PA14, GPIO_PIN_14, GPIOA, GPIO_PIN_IO, false},
  { PA15, GPIO_PIN_15, GPIOA, GPIO_PIN_IO, false},
  { PB0 , GPIO_PIN_0 , GPIOB, GPIO_PIN_IO, false},
  { PB1 , GPIO_PIN_1 , GPIOB, GPIO_PIN_IO, false},
  { PB2 , GPIO_PIN_2 , GPIOB, GPIO_PIN_IO, false},
  { PB3 , GPIO_PIN_3 , GPIOB, GPIO_PIN_IO, false},
  { PB4 , GPIO_PIN_4 , GPIOB, GPIO_PIN_IO, false},
  { PB5 , GPIO_PIN_5 , GPIOB, GPIO_PIN_IO, false},
  { PB6 , GPIO_PIN_6 , GPIOB, GPIO_PIN_IO, false},
  { PB7 , GPIO_PIN_7 , GPIOB, GPIO_PIN_IO, false},
  { PB8 , GPIO_PIN_8 , GPIOB, GPIO_PIN_IO, false},
  { PB9 , GPIO_PIN_9 , GPIOB, GPIO_PIN_IO, false},
  { PB10, GPIO_PIN_10, GPIOB, GPIO_PIN_IO, false},
  { PB11, GPIO_PIN_11, GPIOB, GPIO_PIN_IO, false},
  { PB12, GPIO_PIN_12, GPIOB, GPIO_PIN_IO, false},
  { PB13, GPIO_PIN_13, GPIOB, GPIO_PIN_IO, false},
  { PB14, GPIO_PIN_14, GPIOB, GPIO_PIN_IO, false},
  { PB15, GPIO_PIN_15, GPIOB, GPIO_PIN_IO, false},
  { PC0 , GPIO_PIN_0 , GPIOC, GPIO_PIN_IO, false},
  { PC1 , GPIO_PIN_1 , GPIOC, GPIO_PIN_IO, false},
  { PC2 , GPIO_PIN_2 , GPIOC, GPIO_PIN_IO, false},
  { PC3 , GPIO_PIN_3 , GPIOC, GPIO_PIN_IO, false},
  { PC4 , GPIO_PIN_4 , GPIOC, GPIO_PIN_IO, false},
  { PC5 , GPIO_PIN_5 , GPIOC, GPIO_PIN_IO, false},
  { PC6 , GPIO_PIN_6 , GPIOC, GPIO_PIN_IO, false},
  { PC7 , GPIO_PIN_7 , GPIOC, GPIO_PIN_IO, false},
  { PC8 , GPIO_PIN_8 , GPIOC, GPIO_PIN_IO, false},
  { PC9 , GPIO_PIN_9 , GPIOC, GPIO_PIN_IO, false},
  { PC10, GPIO_PIN_10, GPIOC, GPIO_PIN_IO, false},
  { PC11, GPIO_PIN_11, GPIOC, GPIO_PIN_IO, false},
  { PC12, GPIO_PIN_12, GPIOC, GPIO_PIN_IO, false},
  { PC13, GPIO_PIN_13, GPIOC, GPIO_PIN_IO, false},
  { PC14, GPIO_PIN_14, GPIOC, GPIO_PIN_IO, false},
  { PC15, GPIO_PIN_15, GPIOC, GPIO_PIN_IO, false},
  { PD0 , GPIO_PIN_0 , GPIOD, GPIO_PIN_IO, false},
  { PD1 , GPIO_PIN_1 , GPIOD, GPIO_PIN_IO, false},
  { PD2 , GPIO_PIN_2 , GPIOD, GPIO_PIN_IO, false},
  { PD3 , GPIO_PIN_3 , GPIOD, GPIO_PIN_IO, false},
  { PD4 , GPIO_PIN_4 , GPIOD, GPIO_PIN_IO, false},
  { PD5 , GPIO_PIN_5 , GPIOD, GPIO_PIN_IO, false},
  { PD6 , GPIO_PIN_6 , GPIOD, GPIO_PIN_IO, false},
  { PD7 , GPIO_PIN_7 , GPIOD, GPIO_PIN_IO, false},
  { PD8 , GPIO_PIN_8 , GPIOD, GPIO_PIN_IO, false},
  { PD9 , GPIO_PIN_9 , GPIOD, GPIO_PIN_IO, false},
  { PD10, GPIO_PIN_10, GPIOD, GPIO_PIN_IO, false},
  { PD11, GPIO_PIN_11, GPIOD, GPIO_PIN_IO, false},
  { PD12, GPIO_PIN_12, GPIOD, GPIO_PIN_IO, false},
  { PD13, GPIO_PIN_13, GPIOD, GPIO_PIN_IO, false},
  { PD14, GPIO_PIN_14, GPIOD, GPIO_PIN_IO, false},
  { PD15, GPIO_PIN_15, GPIOD, GPIO_PIN_IO, false},
  { PE0 , GPIO_PIN_0 , GPIOE, GPIO_PIN_IO, false},
  { PE1 , GPIO_PIN_1 , GPIOE, GPIO_PIN_IO, false},
  { PE2 , GPIO_PIN_2 , GPIOE, GPIO_PIN_IO, false},
  { PE3 , GPIO_PIN_3 , GPIOE, GPIO_PIN_IO, false},
  { PE4 , GPIO_PIN_4 , GPIOE, GPIO_PIN_IO, false},
  { PE5 , GPIO_PIN_5 , GPIOE, GPIO_PIN_IO, false},
  { PE6 , GPIO_PIN_6 , GPIOE, GPIO_PIN_IO, false},
  { PE7 , GPIO_PIN_7 , GPIOE, GPIO_PIN_IO, false},
  { PE8 , GPIO_PIN_8 , GPIOE, GPIO_PIN_IO, false},
  { PE9 , GPIO_PIN_9 , GPIOE, GPIO_PIN_IO, false},
  { PE10, GPIO_PIN_10, GPIOE, GPIO_PIN_IO, false},
  { PE11, GPIO_PIN_11, GPIOE, GPIO_PIN_IO, false},
  { PE12, GPIO_PIN_12, GPIOE, GPIO_PIN_IO, false},
  { PE13, GPIO_PIN_13, GPIOE, GPIO_PIN_IO, false},
  { PE14, GPIO_PIN_14, GPIOE, GPIO_PIN_IO, false},
  { PE15, GPIO_PIN_15, GPIOE, GPIO_PIN_IO, false},
  { PF0 , GPIO_PIN_0 , GPIOF, GPIO_PIN_IO, false},
  { PF1 , GPIO_PIN_1 , GPIOF, GPIO_PIN_IO, false},
  { PF2 , GPIO_PIN_2 , GPIOF, GPIO_PIN_IO, false},
  { PF3 , GPIO_PIN_3 , GPIOF, GPIO_PIN_IO, false},
  { PF4 , GPIO_PIN_4 , GPIOF, GPIO_PIN_IO, false},
  { PF5 , GPIO_PIN_5 , GPIOF, GPIO_PIN_IO, false},
  { PF6 , GPIO_PIN_6 , GPIOF, GPIO_PIN_IO, false},
  { PF7 , GPIO_PIN_7 , GPIOF, GPIO_PIN_IO, false},
  { PF8 , GPIO_PIN_8 , GPIOF, GPIO_PIN_IO, false},
  { PF9 , GPIO_PIN_9 , GPIOF, GPIO_PIN_IO, false},
  { PF10, GPIO_PIN_10, GPIOF, GPIO_PIN_IO, false},
  { PF11, GPIO_PIN_11, GPIOF, GPIO_PIN_IO, false},
  { PF12, GPIO_PIN_12, GPIOF, GPIO_PIN_IO, false},
  { PF13, GPIO_PIN_13, GPIOF, GPIO_PIN_IO, false},
  { PF14, GPIO_PIN_14, GPIOF, GPIO_PIN_IO, false},
  { PF15, GPIO_PIN_15, GPIOF, GPIO_PIN_IO, false},
  { PG0 , GPIO_PIN_0 , GPIOG, GPIO_PIN_IO, false},
  { PG1 , GPIO_PIN_1 , GPIOG, GPIO_PIN_IO, false},
  { PG2 , GPIO_PIN_2 , GPIOG, GPIO_PIN_IO, false},
  { PG3 , GPIO_PIN_3 , GPIOG, GPIO_PIN_IO, false},
  { PG4 , GPIO_PIN_4 , GPIOG, GPIO_PIN_IO, false},
  { PG5 , GPIO_PIN_5 , GPIOG, GPIO_PIN_IO, false},
  { PG6 , GPIO_PIN_6 , GPIOG, GPIO_PIN_IO, false},
  { PG7 , GPIO_PIN_7 , GPIOG, GPIO_PIN_IO, false},
  { PG8 , GPIO_PIN_8 , GPIOG, GPIO_PIN_IO, false},
  { PG9 , GPIO_PIN_9 , GPIOG, GPIO_PIN_IO, false},
  { PG10, GPIO_PIN_10, GPIOG, GPIO_PIN_IO, false},
  { PG11, GPIO_PIN_11, GPIOG, GPIO_PIN_IO, false},
  { PG12, GPIO_PIN_12, GPIOG, GPIO_PIN_IO, false},
  { PG13, GPIO_PIN_13, GPIOG, GPIO_PIN_IO, false},
  { PG14, GPIO_PIN_14, GPIOG, GPIO_PIN_IO, false},
  { PG15, GPIO_PIN_15, GPIOG, GPIO_PIN_IO, false},
};


static void AF_NO_REMAP (void) { }
static void AF__HAL_AFIO_REMAP_SPI1_DISABLE(void) { __HAL_AFIO_REMAP_SPI1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_ENABLE(void) { __HAL_AFIO_REMAP_SPI1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_SPI3_DISABLE(void) { __HAL_AFIO_REMAP_SPI3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI3_ENABLE(void) { __HAL_AFIO_REMAP_SPI3_ENABLE(); }

spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .spi_alternate = AF__HAL_AFIO_REMAP_SPI1_DISABLE,
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_7, 
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_6, 
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_5, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI2, 
    .spi_alternate = AF_NO_REMAP,
    .mosi_port = GPIOB, 
    .mosi_pin =  GPIO_PIN_15, 
    .miso_port = GPIOB, 
    .miso_pin = GPIO_PIN_14, 
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_13, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI3, 
    .spi_alternate = AF__HAL_AFIO_REMAP_SPI3_DISABLE,
    .mosi_port = GPIOB, 
    .mosi_pin =  GPIO_PIN_5, 
    .miso_port = GPIOB, 
    .miso_pin = GPIO_PIN_4, 
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_3, 
  },
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);
static void AF__HAL_AFIO_REMAP_I2C1_DISABLE(void) { __HAL_AFIO_REMAP_I2C1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_I2C1_ENABLE(void) { __HAL_AFIO_REMAP_I2C1_ENABLE(); }

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .i2c_alternate = AF__HAL_AFIO_REMAP_I2C1_DISABLE,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_7,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_6,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C2,
    .irq = I2C2_EV_IRQn,
    .i2c_alternate = AF_NO_REMAP,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_11,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_10,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
};

uint8_t NB_I2C_INSTANCES = sizeof(g_i2c_init_info) / sizeof(g_i2c_init_info[0]);

static void AF__HAL_AFIO_REMAP_USART1_DISABLE(void) { __HAL_AFIO_REMAP_USART1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART1_ENABLE(void) { __HAL_AFIO_REMAP_USART1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_DISABLE(void) { __HAL_AFIO_REMAP_USART2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART2_ENABLE(void) { __HAL_AFIO_REMAP_USART2_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_DISABLE(void) { __HAL_AFIO_REMAP_USART3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_ENABLE(void) { __HAL_AFIO_REMAP_USART3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_USART3_PARTIAL(void) { __HAL_AFIO_REMAP_USART3_PARTIAL(); }

uart_conf_t g_uart_config[] = {
  {
    //UART ID and IRQ
    .usart_typedef = USART1, .irqtype = USART1_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_9,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_10,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART2, .irqtype = USART2_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_2,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_3,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART3, .irqtype = USART3_IRQn,
    .tx_port = GPIOB, .tx_pin = GPIO_PIN_10,
    .rx_port = GPIOB, .rx_pin = GPIO_PIN_11,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
};

uint8_t NB_UART_MANAGED = sizeof(g_uart_config) / sizeof(g_uart_config[0]);

UART_HandleTypeDef g_UartHandle[sizeof(g_uart_config) / sizeof(g_uart_config[0])];

static void AF__HAL_AFIO_REMAP_TIM10_DISABLE(void) { __HAL_AFIO_REMAP_TIM10_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM10_ENABLE(void) { __HAL_AFIO_REMAP_TIM10_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM11_DISABLE(void) { __HAL_AFIO_REMAP_TIM11_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM11_ENABLE(void) { __HAL_AFIO_REMAP_TIM11_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM13_DISABLE(void) { __HAL_AFIO_REMAP_TIM13_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM13_ENABLE(void) { __HAL_AFIO_REMAP_TIM13_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM14_DISABLE(void) { __HAL_AFIO_REMAP_TIM14_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM14_ENABLE(void) { __HAL_AFIO_REMAP_TIM14_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_DISABLE(void) { __HAL_AFIO_REMAP_TIM1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_ENABLE(void) { __HAL_AFIO_REMAP_TIM1_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM1_PARTIAL(void) { __HAL_AFIO_REMAP_TIM1_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM2_DISABLE(void) { __HAL_AFIO_REMAP_TIM2_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_1(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_1(); }
static void AF__HAL_AFIO_REMAP_TIM2_PARTIAL_2(void) { __HAL_AFIO_REMAP_TIM2_PARTIAL_2(); }
static void AF__HAL_AFIO_REMAP_TIM3_DISABLE(void) { __HAL_AFIO_REMAP_TIM3_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_ENABLE(void) { __HAL_AFIO_REMAP_TIM3_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM3_PARTIAL(void) { __HAL_AFIO_REMAP_TIM3_PARTIAL(); }
static void AF__HAL_AFIO_REMAP_TIM4_DISABLE(void) { __HAL_AFIO_REMAP_TIM4_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM4_ENABLE(void) { __HAL_AFIO_REMAP_TIM4_ENABLE(); }
static void AF__HAL_AFIO_REMAP_TIM9_DISABLE(void) { __HAL_AFIO_REMAP_TIM9_DISABLE(); }
static void AF__HAL_AFIO_REMAP_TIM9_ENABLE(void) { __HAL_AFIO_REMAP_TIM9_ENABLE(); }

#define SAMPLINGTIME  ADC_SAMPLETIME_1CYCLE_5  /*!< ADC conversions sampling time. */

adc_config_str g_adc_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_0, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_1, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_11, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_12, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_13, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_14, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_15, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_2, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_3, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_4, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_5, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_6, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_7, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_8, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_9, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
};
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
dac_config_str g_dac_config[] = {
    
};
#endif

pwm_config_str g_pwm_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_8,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_13,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_9,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_14,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_10,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_15,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_11,
    .alFunction = AF__HAL_AFIO_REMAP_TIM1_DISABLE,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_8,
    .alFunction = AF__HAL_AFIO_REMAP_TIM10_DISABLE,
    .timInstance = TIM10,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_9,
    .alFunction = AF__HAL_AFIO_REMAP_TIM11_DISABLE,
    .timInstance = TIM11,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_14,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM12,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_15,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM12,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .alFunction = AF__HAL_AFIO_REMAP_TIM13_DISABLE,
    .timInstance = TIM13,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = AF__HAL_AFIO_REMAP_TIM14_DISABLE,
    .timInstance = TIM14,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .alFunction = AF__HAL_AFIO_REMAP_TIM2_DISABLE,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .alFunction = AF__HAL_AFIO_REMAP_TIM2_DISABLE,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .alFunction = AF__HAL_AFIO_REMAP_TIM2_DISABLE,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = AF__HAL_AFIO_REMAP_TIM2_DISABLE,
    .timInstance = TIM2,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .alFunction = AF__HAL_AFIO_REMAP_TIM3_DISABLE,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = AF__HAL_AFIO_REMAP_TIM3_DISABLE,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .alFunction = AF__HAL_AFIO_REMAP_TIM3_DISABLE,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .alFunction = AF__HAL_AFIO_REMAP_TIM3_DISABLE,
    .timInstance = TIM3,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_6,
    .alFunction = AF__HAL_AFIO_REMAP_TIM4_DISABLE,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_7,
    .alFunction = AF__HAL_AFIO_REMAP_TIM4_DISABLE,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_8,
    .alFunction = AF__HAL_AFIO_REMAP_TIM4_DISABLE,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_9,
    .alFunction = AF__HAL_AFIO_REMAP_TIM4_DISABLE,
    .timInstance = TIM4,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM5,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_6,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_7,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_8,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_3,
    .useNchannel = 1,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_9,
    .alFunction = AF_NO_REMAP,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_4,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .alFunction = AF__HAL_AFIO_REMAP_TIM9_DISABLE,
    .timInstance = TIM9,
    .timChannel = TIM_CHANNEL_1,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = AF__HAL_AFIO_REMAP_TIM9_DISABLE,
    .timInstance = TIM9,
    .timChannel = TIM_CHANNEL_2,
    .useNchannel = 0,
    .timConfig = {
      .OCMode       = TIM_OCMODE_PWM1,
      .OCPolarity   = TIM_OCPOLARITY_HIGH,
      .OCFastMode   = TIM_OCFAST_DISABLE,
      .OCNPolarity  = TIM_OCNPOLARITY_HIGH,
      .OCNIdleState = TIM_OCNIDLESTATE_RESET,
      .OCIdleState  = TIM_OCIDLESTATE_RESET
     },
     .timHandle = {}
  },
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_I2C1_DISABLE    },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_I2C1_ENABLE     },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_I2C1_DISABLE    },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_I2C1_ENABLE     },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , AF_NO_REMAP                        },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , AF_NO_REMAP                        },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI1_ENABLE     },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_SPI1_DISABLE    },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_ENABLE     },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_SPI1_DISABLE    },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI1_DISABLE    },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_SPI1_ENABLE     },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , AF_NO_REMAP                        },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , AF_NO_REMAP                        },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , AF_NO_REMAP                        },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_SPI3_DISABLE    },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_SPI3_ENABLE     },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_SPI3_DISABLE    },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , AF__HAL_AFIO_REMAP_SPI3_ENABLE     },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_SPI3_ENABLE     },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_SPI3_DISABLE    },
    { TIM10 , CH1  , GPIOB, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM10_DISABLE   },
    { TIM10 , CH1  , GPIOF, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM10_ENABLE    },
    { TIM11 , CH1  , GPIOB, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM11_DISABLE   },
    { TIM11 , CH1  , GPIOF, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM11_ENABLE    },
    { TIM12 , CH1  , GPIOB, GPIO_PIN_14 , AF_NO_REMAP                        },
    { TIM12 , CH2  , GPIOB, GPIO_PIN_15 , AF_NO_REMAP                        },
    { TIM13 , CH1  , GPIOF, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM13_ENABLE    },
    { TIM13 , CH1  , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM13_DISABLE   },
    { TIM14 , CH1  , GPIOF, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM14_ENABLE    },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM14_DISABLE   },
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH1  , GPIOE, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH1N , GPIOE, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM1_PARTIAL    },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH2  , GPIOE, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , AF__HAL_AFIO_REMAP_TIM1_PARTIAL    },
    { TIM1  , CH2N , GPIOE, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH3  , GPIOE, GPIO_PIN_13 , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , AF__HAL_AFIO_REMAP_TIM1_PARTIAL    },
    { TIM1  , CH3N , GPIOE, GPIO_PIN_12 , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH4  , GPIOE, GPIO_PIN_14 , AF__HAL_AFIO_REMAP_TIM1_ENABLE     },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , AF__HAL_AFIO_REMAP_TIM2_DISABLE    },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , AF__HAL_AFIO_REMAP_TIM2_PARTIAL_1  },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , AF__HAL_AFIO_REMAP_TIM2_DISABLE    },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_TIM2_PARTIAL_1  },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_TIM2_PARTIAL_2  },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_TIM2_DISABLE    },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_TIM2_PARTIAL_2  },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_TIM2_DISABLE    },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , AF__HAL_AFIO_REMAP_TIM3_PARTIAL    },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM3_ENABLE     },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_TIM3_PARTIAL    },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM3_ENABLE     },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM3_ENABLE     },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM3_ENABLE     },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM4  , CH1  , GPIOD, GPIO_PIN_12 , AF__HAL_AFIO_REMAP_TIM4_ENABLE     },
    { TIM4  , CH1  , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH2  , GPIOD, GPIO_PIN_13 , AF__HAL_AFIO_REMAP_TIM4_ENABLE     },
    { TIM4  , CH2  , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH3  , GPIOB, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH3  , GPIOD, GPIO_PIN_14 , AF__HAL_AFIO_REMAP_TIM4_ENABLE     },
    { TIM4  , CH4  , GPIOB, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH4  , GPIOD, GPIO_PIN_15 , AF__HAL_AFIO_REMAP_TIM4_ENABLE     },
    { TIM5  , CH1  , GPIOA, GPIO_PIN_0  , AF_NO_REMAP                        },
    { TIM5  , CH2  , GPIOA, GPIO_PIN_1  , AF_NO_REMAP                        },
    { TIM5  , CH3  , GPIOA, GPIO_PIN_2  , AF_NO_REMAP                        },
    { TIM5  , CH4  , GPIOA, GPIO_PIN_3  , AF_NO_REMAP                        },
    { TIM8  , CH1  , GPIOC, GPIO_PIN_6  , AF_NO_REMAP                        },
    { TIM8  , CH1N , GPIOA, GPIO_PIN_7  , AF_NO_REMAP                        },
    { TIM8  , CH2  , GPIOC, GPIO_PIN_7  , AF_NO_REMAP                        },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_0  , AF_NO_REMAP                        },
    { TIM8  , CH3  , GPIOC, GPIO_PIN_8  , AF_NO_REMAP                        },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_1  , AF_NO_REMAP                        },
    { TIM8  , CH4  , GPIOC, GPIO_PIN_9  , AF_NO_REMAP                        },
    { TIM9  , CH1  , GPIOE, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_TIM9_ENABLE     },
    { TIM9  , CH1  , GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_TIM9_DISABLE    },
    { TIM9  , CH2  , GPIOE, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM9_ENABLE     },
    { TIM9  , CH2  , GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_TIM9_DISABLE    },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART1_DISABLE  },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_USART1_ENABLE   },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART1_DISABLE  },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART1_ENABLE   },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART2_ENABLE   },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_USART2_DISABLE  },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_USART2_DISABLE  },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_USART2_ENABLE   },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_DISABLE  },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_PARTIAL  },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART3_ENABLE   },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_DISABLE  },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_PARTIAL  },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_USART3_ENABLE   },
};
