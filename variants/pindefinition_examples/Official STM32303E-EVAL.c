
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                    |I2C1|I2C2|I2C3|SPI1 |SPI2 |SPI3 |SPI4 |USART1|USART2|USART3|ADC1 |TIM (PWM)                                 |USB|RCC       |SYS           
PA0 , // |LDR_OUT [R164 PhotoCell]       |    |    |    |     |     |     |     |      |      |      |*IN1 |*TIM2_CH1                                 |   |          |              
PA1 , // |OPAMP1_IN+                     |    |    |    |     |     |     |     |      |      |      |*IN2 |*TIM2_CH2 *TIM15_CH1N                     |   |          |              
PA2 , // |OPAMP1_OUT                     |    |    |    |     |     |     |     |      |*TX   |      |*IN3 |*TIM2_CH3 +TIM15_CH1                      |   |          |              
PA3 , // |OPAMP1_IN-                     |    |    |    |     |     |     |     |      |*RX   |      |*IN4 |*TIM2_CH4 +TIM15_CH2                      |   |          |              
PA4 , // |I2S_WS [CS42L52_LRCK]          |    |    |    |     |     |     |     |      |      |      |     |+TIM3_CH2                                 |   |          |              
PA5 , // |                               |    |    |    |*SCK |     |     |     |      |      |      |     |+TIM2_CH1                                 |   |          |              
PA6 , // |OPAMP2_OUT                     |    |    |    |*MISO|     |     |     |      |      |      |     |+TIM3_CH1 *TIM16_CH1                      |   |          |              
PA7 , // |OPAMP2_IN+                     |    |    |    |*MOSI|     |     |     |      |      |      |     |*TIM8_CH1N +TIM3_CH2 +TIM1_CH1N *TIM17_CH1|   |          |              
PA8 , // |MCO [CS2200_REF_CLK]           |    |    |*SCL|     |     |     |     |      |      |      |     |+TIM1_CH1                                 |   |          |              
PA9 , // |I2S_MCK [CS42L52_MCLK]         |    |+SCL|    |     |     |     |     |+TX   |      |      |     |+TIM1_CH2 +TIM2_CH3                       |   |          |              
PA10, // |I2C2_SDA [CS42L52/CS2200_SDA]  |    |+SDA|    |     |+MISO|     |     |+RX   |      |      |     |+TIM1_CH3 +TIM2_CH4                       |   |          |              
PA11, // |                               |    |    |    |     |+MOSI|     |     |      |      |      |     |+TIM1_CH4 +TIM1_CH1N +TIM4_CH1            |*DM|          |              
PA12, // |                               |    |    |    |     |     |     |     |      |      |      |     |+TIM1_CH2N +TIM16_CH1 +TIM4_CH2           |*DP|          |              
PA13, // |TMS/SWDIO                      |    |    |    |     |     |     |     |      |      |      |     |*TIM16_CH1N +TIM4_CH3                     |   |          |*JTMS-SWDIO   
PA14, // |TMS/SWCLK                      |*SDA|    |    |     |     |     |     |      |+TX   |      |     |+TIM8_CH2                                 |   |          |*JTCK-SWCLK   
PA15, // |TDI                            |*SCL|    |    |     |     |     |     |      |+RX   |      |     |+TIM8_CH1 +TIM2_CH1                       |   |          |*JTDI         
PB0 , // |Hum_In [HS1101LF]              |    |    |    |     |     |     |     |      |      |      |     |*TIM8_CH2N +TIM3_CH3 *TIM1_CH2N           |   |          |              
PB1 , // |OPAMP3_OUT                     |    |    |    |     |     |     |     |      |      |      |     |+TIM3_CH4 +TIM1_CH3N *TIM8_CH3N           |   |          |              
PB2 , // |V1_8_POR                       |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PB3 , // |TDO/SWO                        |    |    |    |+SCK |     |+SCK |     |      |+TX   |      |     |+TIM8_CH1N +TIM2_CH2                      |   |          |*JTDO-TRACESWO
PB4 , // |TRST                           |    |    |    |+MISO|     |+MISO|     |      |+RX   |      |     |+TIM8_CH2N +TIM3_CH1 +TIM16_CH1           |   |          |*NJTRST       
PB5 , // |JOY_LEFT                       |    |    |+SDA|+MOSI|     |+MOSI|     |      |      |      |     |+TIM3_CH2 +TIM8_CH3N +TIM17_CH1           |   |          |              
PB6 , // |                               |+SCL|    |    |     |     |     |     |+TX   |      |      |     |+TIM8_CH1 +TIM16_CH1N +TIM4_CH1           |   |          |              
PB7 , // |                               |+SDA|    |    |     |     |     |     |+RX   |      |      |     |*TIM17_CH1N +TIM3_CH4 +TIM4_CH2           |   |          |              
PB8 , // |USB_Disconnect                 |+SCL|    |    |     |     |     |     |      |      |+RX   |     |+TIM8_CH2 +TIM16_CH1 +TIM4_CH3            |   |          |              
PB9 , // |IR_LED                         |+SDA|    |    |     |     |     |     |      |      |+TX   |     |+TIM8_CH3 +TIM17_CH1 +TIM4_CH4            |   |          |              
PB10, // |OPAMP4_IN-                     |    |    |    |     |     |     |     |      |      |*TX   |     |+TIM2_CH3                                 |   |          |              
PB11, // |SHIELD_CT [Touch_Sensing]      |    |    |    |     |     |     |     |      |      |+RX   |*IN14|+TIM2_CH4                                 |   |          |              
PB12, // |SHIELD [Touch_Sensing]         |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PB13, // |OPAMP4_IN2+                    |    |    |    |     |+SCK |     |     |      |      |      |     |+TIM1_CH1N                                |   |          |              
PB14, // |SPI2_MISO [MicroSD_DO]         |    |    |    |     |*MISO|     |     |      |      |      |     |+TIM1_CH2N +TIM15_CH1                     |   |          |              
PB15, // |SPI2_MOSI [MicroSD_DI]         |    |    |    |     |*MOSI|     |     |      |      |      |     |+TIM1_CH3N +TIM15_CH2 +TIM15_CH1N         |   |          |              
PC0 , // |                               |    |    |    |     |     |     |     |      |      |      |*IN6 |*TIM1_CH1                                 |   |          |              
PC1 , // |COM_IN+ [RV2 Potentiometer]    |    |    |    |     |     |     |     |      |      |      |*IN7 |*TIM1_CH2                                 |   |          |              
PC2 , // |                               |    |    |    |     |     |     |     |      |      |      |*IN8 |*TIM1_CH3                                 |   |          |              
PC3 , // |                               |    |    |    |     |     |     |     |      |      |      |*IN9 |*TIM1_CH4                                 |   |          |              
PC4 , // |USART1_TX [ST3241_T2IN]        |    |    |    |     |     |     |     |*TX   |      |      |     |                                          |   |          |              
PC5 , // |OPAMP2_IN-                     |    |    |    |     |     |     |     |*RX   |      |      |     |                                          |   |          |              
PC6 , // |SDCard_Detect [MicroSD_SW1]    |    |    |    |     |     |     |     |      |      |      |     |*TIM8_CH1 +TIM3_CH1                       |   |          |              
PC7 , // |                               |    |    |    |     |     |     |     |      |      |      |     |*TIM8_CH2 +TIM3_CH2                       |   |          |              
PC8 , // |Hum_Out [HS1101LF]             |    |    |    |     |     |     |     |      |      |      |     |*TIM8_CH3 +TIM3_CH3                       |   |          |              
PC9 , // |I2S_CKIN [CS2200_CLK_OUT]      |    |    |*SDA|     |     |     |     |      |      |      |     |*TIM8_CH4 +TIM3_CH4                       |   |          |              
PC10, // |I2S_SCK [CS42L52_SCLK]         |    |    |    |     |     |*SCK |     |      |      |+TX   |     |+TIM8_CH1N                                |   |          |              
PC11, // |I2S_DOUT [CS42L52_SDOUT]       |    |    |    |     |     |*MISO|     |      |      |+RX   |     |+TIM8_CH2N                                |   |          |              
PC12, // |I2S_SDIN [CS42L52_SDIN]        |    |    |    |     |     |*MOSI|     |      |      |      |     |+TIM8_CH3N                                |   |          |              
PC13, // |JOY_SEL                        |    |    |    |     |     |     |     |      |      |      |     |*TIM1_CH1N                                |   |          |              
PC14, // |PC14-OSC32_IN                  |    |    |    |     |     |     |     |      |      |      |     |                                          |   |*OSC32_IN |              
PC15, // |PC15-OSC32_OUT                 |    |    |    |     |     |     |     |      |      |      |     |                                          |   |*OSC32_OUT|              
PD0 , // |CAN_RX [SN65HVD230_R]          |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PD1 , // |CAN_TX [SN65HVD230_D]          |    |    |    |     |     |     |     |      |      |      |     |+TIM8_CH4                                 |   |          |              
PD2 , // |                               |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PD3 , // |                               |    |    |    |     |     |     |     |      |      |      |     |+TIM2_CH1                                 |   |          |              
PD4 , // |                               |    |    |    |     |     |     |     |      |      |      |     |+TIM2_CH2                                 |   |          |              
PD5 , // |JOY_DOWN                       |    |    |    |     |     |     |     |      |+TX   |      |     |                                          |   |          |              
PD6 , // |JOY_RIGHT                      |    |    |    |     |     |     |     |      |+RX   |      |     |+TIM2_CH4                                 |   |          |              
PD7 , // |E2P_CS [M95M01_S]              |    |    |    |     |     |     |     |      |      |      |     |+TIM2_CH3                                 |   |          |              
PD8 , // |                               |    |    |    |     |     |     |     |      |      |+TX   |     |                                          |   |          |              
PD9 , // |                               |    |    |    |     |     |     |     |      |      |+RX   |     |                                          |   |          |              
PD10, // |                               |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PD11, // |                               |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PD12, // |TS_CT [Touch_Sensing]          |    |    |    |     |     |     |     |      |      |      |     |*TIM4_CH1                                 |   |          |              
PD13, // |TS1 [Touch_Sensing]            |    |    |    |     |     |     |     |      |      |      |     |*TIM4_CH2                                 |   |          |              
PD14, // |LED_FB                         |    |    |    |     |     |     |     |      |      |      |     |*TIM4_CH3                                 |   |          |              
PD15, // |TS2 [Touch_Sensing]            |    |    |    |     |     |     |     |      |      |      |     |*TIM4_CH4                                 |   |          |              
PE0 , // |LCD_CS [SPILCD_CS]             |    |    |    |     |     |     |     |+TX   |      |      |     |+TIM16_CH1                                |   |          |              
PE1 , // |USART1_RX [ST3241_R3OUT]       |    |    |    |     |     |     |     |+RX   |      |      |     |*TIM20_CH4 +TIM17_CH1                     |   |          |              
PE2 , // |TRACE_CK                       |    |    |    |     |     |     |*SCK |      |      |      |     |*TIM3_CH1 *TIM20_CH1                      |   |          |*TRACECK      
PE3 , // |TRACE_D0                       |    |    |    |     |     |     |     |      |      |      |     |*TIM3_CH2 *TIM20_CH2                      |   |          |*TRACED0      
PE4 , // |TRACE_D1                       |    |    |    |     |     |     |     |      |      |      |     |*TIM3_CH3 *TIM20_CH1N                     |   |          |*TRACED1      
PE5 , // |TRACE_D2                       |    |    |    |     |     |     |*MISO|      |      |      |     |*TIM20_CH2N *TIM3_CH4                     |   |          |*TRACED2      
PE6 , // |Key_Button [B2 Blue PushButton]|    |    |    |     |     |     |*MOSI|      |      |      |     |*TIM20_CH3N                               |   |          |*TRACED3      
PE7 , // |JOY_UP                         |    |    |    |     |     |     |     |      |      |      |     |                                          |   |          |              
PE8 , // |LED1 [Green Led]               |    |    |    |     |     |     |     |      |      |      |     |+TIM1_CH1N                                |   |          |              
PE9 , // |LED2 [Orange Led]              |    |    |    |     |     |     |     |      |      |      |     |+TIM1_CH1                                 |   |          |              
PE10, // |LED3 [Red Led]                 |    |    |    |     |     |     |     |      |      |      |     |+TIM1_CH2N                                |   |          |              
PE11, // |LED4 [Blue Led]                |    |    |    |     |     |     |     |      |      |      |     |+TIM1_CH2                                 |   |          |              
PE12, // |                               |    |    |    |     |     |     |+SCK |      |      |      |     |+TIM1_CH3N                                |   |          |              
PE13, // |LED_DRV                        |    |    |    |     |     |     |+MISO|      |      |      |     |+TIM1_CH3                                 |   |          |              
PE14, // |SPI2_DIR [MicroSD_DIR]         |    |    |    |     |     |     |+MOSI|      |      |      |     |+TIM1_CH4                                 |   |          |              
PE15, // |MicroSD_CS                     |    |    |    |     |     |     |     |      |      |*RX   |     |                                          |   |          |              
PF0 , // |PF0-OSC_IN                     |    |*SDA|    |     |     |     |     |      |      |      |     |*TIM1_CH3N                                |   |*OSC_IN   |              
PF1 , // |PF1-OSC_OUT                    |    |*SCL|    |     |+SCK |     |     |      |      |      |     |                                          |   |*OSC_OUT  |              
PF2 , // |                               |    |    |    |     |     |     |     |      |      |      |*IN10|*TIM20_CH3                                |   |          |              
PF6 , // |I2C2_SCL [CS42L52/CS2200_SCL]  |    |+SCL|    |     |     |     |     |      |      |      |     |+TIM4_CH4                                 |   |          |              
PF9 , // |SPI2_SCK [MicroSD_SCLK]        |    |    |    |     |*SCK |     |     |      |      |      |     |*TIM15_CH1                                |   |          |              
PF10, // |                               |    |    |    |     |+SCK |     |     |      |      |      |     |*TIM15_CH2                                |   |          |              
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
  { PF6 , GPIO_PIN_6 , GPIOF, GPIO_PIN_IO, false},
  { PF9 , GPIO_PIN_9 , GPIOF, GPIO_PIN_IO, false},
  { PF10, GPIO_PIN_10, GPIOF, GPIO_PIN_IO, false},
};



spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .mosi_alternate = GPIO_AF5_SPI1,
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_7, 
    .miso_alternate = GPIO_AF5_SPI1,
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_6, 
    .sck_alternate = GPIO_AF5_SPI1,
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_5, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI2, 
    .mosi_alternate = GPIO_AF5_SPI2,
    .mosi_port = GPIOB, 
    .mosi_pin =  GPIO_PIN_15, 
    .miso_alternate = GPIO_AF5_SPI2,
    .miso_port = GPIOB, 
    .miso_pin = GPIO_PIN_14, 
    .sck_alternate = GPIO_AF5_SPI2,
    .sck_port = GPIOF, 
    .sck_pin = GPIO_PIN_9, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI3, 
    .mosi_alternate = GPIO_AF6_SPI3,
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_12, 
    .miso_alternate = GPIO_AF6_SPI3,
    .miso_port = GPIOC, 
    .miso_pin = GPIO_PIN_11, 
    .sck_alternate = GPIO_AF6_SPI3,
    .sck_port = GPIOC, 
    .sck_pin = GPIO_PIN_10, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI4, 
    .mosi_alternate = GPIO_AF5_SPI4,
    .mosi_port = GPIOE, 
    .mosi_pin =  GPIO_PIN_6, 
    .miso_alternate = GPIO_AF5_SPI4,
    .miso_port = GPIOE, 
    .miso_pin = GPIO_PIN_5, 
    .sck_alternate = GPIO_AF5_SPI4,
    .sck_port = GPIOE, 
    .sck_pin = GPIO_PIN_2, 
  },
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C1,
    .sda_port = GPIOA,
    .sda_pin = GPIO_PIN_14,
    .scl_alternate = GPIO_AF4_I2C1,
    .scl_port = GPIOA,
    .scl_pin = GPIO_PIN_15,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C2,
    .irq = I2C2_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C2,
    .sda_port = GPIOF,
    .sda_pin = GPIO_PIN_0,
    .scl_alternate = GPIO_AF4_I2C2,
    .scl_port = GPIOF,
    .scl_pin = GPIO_PIN_1,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C3,
    .irq = I2C3_EV_IRQn,
    .sda_alternate = GPIO_AF3_I2C3,
    .sda_port = GPIOC,
    .sda_pin = GPIO_PIN_9,
    .scl_alternate = GPIO_AF3_I2C3,
    .scl_port = GPIOA,
    .scl_pin = GPIO_PIN_8,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
};

uint8_t NB_I2C_INSTANCES = sizeof(g_i2c_init_info) / sizeof(g_i2c_init_info[0]);


uart_conf_t g_uart_config[] = {
  {
    //UART ID and IRQ
    .usart_typedef = USART1, .irqtype = USART1_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_4,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_5,
    .uart_af_remap = GPIO_AF7_USART1,
    .tx_alternate  = GPIO_AF7_USART1,
    .rx_alternate  = GPIO_AF7_USART1,
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
    .uart_af_remap = GPIO_AF7_USART2,
    .tx_alternate  = GPIO_AF7_USART2,
    .rx_alternate  = GPIO_AF7_USART2,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART3, .irqtype = USART3_IRQn,
    .tx_port = GPIOB, .tx_pin = GPIO_PIN_10,
    .rx_port = GPIOE, .rx_pin = GPIO_PIN_15,
    .uart_af_remap = GPIO_AF7_USART3,
    .tx_alternate  = GPIO_AF7_USART3,
    .rx_alternate  = GPIO_AF7_USART3,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
};

uint8_t NB_UART_MANAGED = sizeof(g_uart_config) / sizeof(g_uart_config[0]);

UART_HandleTypeDef g_UartHandle[sizeof(g_uart_config) / sizeof(g_uart_config[0])];


#define SAMPLINGTIME  ADC_SAMPLETIME_1CYCLE_5  /*!< ADC conversions sampling time. */

adc_config_str g_adc_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_1, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOF,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_11,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_14, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_2, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_3, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_4, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_6, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_7, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_8, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_3,
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
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOC,
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF4_TIM1,
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
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF2_TIM1,
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
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF6_TIM1,
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
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOF,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF6_TIM1,
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
    .port = GPIOC,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOF,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF3_TIM15,
    .timInstance = TIM15,
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
    .alFunction = GPIO_AF9_TIM15,
    .timInstance = TIM15,
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
    .port = GPIOF,
    .pin = GPIO_PIN_10,
    .alFunction = GPIO_AF3_TIM15,
    .timInstance = TIM15,
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
    .alFunction = GPIO_AF1_TIM16,
    .timInstance = TIM16,
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
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF1_TIM16,
    .timInstance = TIM16,
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
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF1_TIM17,
    .timInstance = TIM17,
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
    .alFunction = GPIO_AF1_TIM17,
    .timInstance = TIM17,
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
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF1_TIM2,
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
    .alFunction = GPIO_AF1_TIM2,
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
    .alFunction = GPIO_AF1_TIM2,
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
    .alFunction = GPIO_AF1_TIM2,
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
    .port = GPIOE,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF6_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOE,
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF6_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOE,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF6_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOE,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF6_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOF,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF2_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOE,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF6_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOE,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF6_TIM20,
    .timInstance = TIM20,
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
    .port = GPIOE,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF2_TIM3,
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
    .port = GPIOE,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF2_TIM3,
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
    .port = GPIOE,
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF2_TIM3,
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
    .port = GPIOE,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF2_TIM3,
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
    .port = GPIOD,
    .pin = GPIO_PIN_12,
    .alFunction = GPIO_AF2_TIM4,
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
    .port = GPIOD,
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF2_TIM4,
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
    .port = GPIOD,
    .pin = GPIO_PIN_14,
    .alFunction = GPIO_AF2_TIM4,
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
    .port = GPIOD,
    .pin = GPIO_PIN_15,
    .alFunction = GPIO_AF2_TIM4,
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
    .port = GPIOC,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF4_TIM8,
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
    .alFunction = GPIO_AF4_TIM8,
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
    .alFunction = GPIO_AF4_TIM8,
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
    .alFunction = GPIO_AF4_TIM8,
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
    .alFunction = GPIO_AF4_TIM8,
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
    .alFunction = GPIO_AF4_TIM8,
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
    .alFunction = GPIO_AF4_TIM8,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOA, GPIO_PIN_15 , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOA, GPIO_PIN_14 , GPIO_AF4_I2C1                      },
    { I2C2  , SCL  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOA, GPIO_PIN_9  , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOF, GPIO_PIN_6  , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOA, GPIO_PIN_10 , GPIO_AF4_I2C2                      },
    { I2C3  , SCL  , GPIOA, GPIO_PIN_8  , GPIO_AF3_I2C3                      },
    { I2C3  , SDA  , GPIOB, GPIO_PIN_5  , GPIO_AF8_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_9  , GPIO_AF3_I2C3                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1                      },
    { SPI2  , MISO , GPIOA, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOA, GPIO_PIN_11 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOF, GPIO_PIN_1  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOF, GPIO_PIN_9  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOF, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { SPI4  , MISO , GPIOE, GPIO_PIN_5  , GPIO_AF5_SPI4                      },
    { SPI4  , MISO , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI4                      },
    { SPI4  , MOSI , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI4                      },
    { SPI4  , MOSI , GPIOE, GPIO_PIN_6  , GPIO_AF5_SPI4                      },
    { SPI4  , SCK  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI4                      },
    { SPI4  , SCK  , GPIOE, GPIO_PIN_2  , GPIO_AF5_SPI4                      },
    { TIM15 , CH1  , GPIOF, GPIO_PIN_9  , GPIO_AF3_TIM15                     },
    { TIM15 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM15                     },
    { TIM15 , CH1N , GPIOA, GPIO_PIN_1  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_15 , GPIO_AF2_TIM15                     },
    { TIM15 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF9_TIM15                     },
    { TIM15 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF1_TIM15                     },
    { TIM15 , CH2  , GPIOF, GPIO_PIN_10 , GPIO_AF3_TIM15                     },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_12 , GPIO_AF1_TIM16                     },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF1_TIM16                     },
    { TIM16 , CH1  , GPIOE, GPIO_PIN_0  , GPIO_AF4_TIM16                     },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF1_TIM16                     },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF1_TIM16                     },
    { TIM16 , CH1N , GPIOA, GPIO_PIN_13 , GPIO_AF1_TIM16                     },
    { TIM16 , CH1N , GPIOB, GPIO_PIN_6  , GPIO_AF1_TIM16                     },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_5  , GPIO_AF10_TIM17                    },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF1_TIM17                     },
    { TIM17 , CH1  , GPIOE, GPIO_PIN_1  , GPIO_AF4_TIM17                     },
    { TIM17 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF1_TIM17                     },
    { TIM17 , CH1N , GPIOB, GPIO_PIN_7  , GPIO_AF1_TIM17                     },
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF6_TIM1                      },
    { TIM1  , CH1  , GPIOC, GPIO_PIN_0  , GPIO_AF2_TIM1                      },
    { TIM1  , CH1  , GPIOE, GPIO_PIN_9  , GPIO_AF2_TIM1                      },
    { TIM1  , CH1N , GPIOE, GPIO_PIN_8  , GPIO_AF2_TIM1                      },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF6_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_11 , GPIO_AF6_TIM1                      },
    { TIM1  , CH1N , GPIOC, GPIO_PIN_13 , GPIO_AF4_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF6_TIM1                      },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF6_TIM1                      },
    { TIM1  , CH2  , GPIOC, GPIO_PIN_1  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2  , GPIOE, GPIO_PIN_11 , GPIO_AF2_TIM1                      },
    { TIM1  , CH2N , GPIOA, GPIO_PIN_12 , GPIO_AF6_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF6_TIM1                      },
    { TIM1  , CH2N , GPIOE, GPIO_PIN_10 , GPIO_AF2_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF6_TIM1                      },
    { TIM1  , CH3  , GPIOC, GPIO_PIN_2  , GPIO_AF2_TIM1                      },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF6_TIM1                      },
    { TIM1  , CH3  , GPIOE, GPIO_PIN_13 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF4_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF6_TIM1                      },
    { TIM1  , CH3N , GPIOE, GPIO_PIN_12 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3N , GPIOF, GPIO_PIN_0  , GPIO_AF6_TIM1                      },
    { TIM1  , CH4  , GPIOC, GPIO_PIN_3  , GPIO_AF2_TIM1                      },
    { TIM1  , CH4  , GPIOE, GPIO_PIN_14 , GPIO_AF2_TIM1                      },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , GPIO_AF11_TIM1                     },
    { TIM20 , CH1  , GPIOE, GPIO_PIN_2  , GPIO_AF6_TIM20                     },
    { TIM20 , CH1N , GPIOE, GPIO_PIN_4  , GPIO_AF6_TIM20                     },
    { TIM20 , CH2  , GPIOE, GPIO_PIN_3  , GPIO_AF6_TIM20                     },
    { TIM20 , CH2N , GPIOE, GPIO_PIN_5  , GPIO_AF6_TIM20                     },
    { TIM20 , CH3  , GPIOF, GPIO_PIN_2  , GPIO_AF2_TIM20                     },
    { TIM20 , CH3N , GPIOE, GPIO_PIN_6  , GPIO_AF6_TIM20                     },
    { TIM20 , CH4  , GPIOE, GPIO_PIN_1  , GPIO_AF6_TIM20                     },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOD, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOD, GPIO_PIN_4  , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOD, GPIO_PIN_7  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_9  , GPIO_AF10_TIM2                     },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOD, GPIO_PIN_6  , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_10 , GPIO_AF10_TIM2                     },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOE, GPIO_PIN_2  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOE, GPIO_PIN_3  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOE, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOE, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_7  , GPIO_AF10_TIM3                     },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF2_TIM3                      },
    { TIM4  , CH1  , GPIOD, GPIO_PIN_12 , GPIO_AF2_TIM4                      },
    { TIM4  , CH1  , GPIOA, GPIO_PIN_11 , GPIO_AF10_TIM4                     },
    { TIM4  , CH1  , GPIOB, GPIO_PIN_6  , GPIO_AF2_TIM4                      },
    { TIM4  , CH2  , GPIOA, GPIO_PIN_12 , GPIO_AF10_TIM4                     },
    { TIM4  , CH2  , GPIOD, GPIO_PIN_13 , GPIO_AF2_TIM4                      },
    { TIM4  , CH2  , GPIOB, GPIO_PIN_7  , GPIO_AF2_TIM4                      },
    { TIM4  , CH3  , GPIOA, GPIO_PIN_13 , GPIO_AF10_TIM4                     },
    { TIM4  , CH3  , GPIOB, GPIO_PIN_8  , GPIO_AF2_TIM4                      },
    { TIM4  , CH3  , GPIOD, GPIO_PIN_14 , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOB, GPIO_PIN_9  , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOD, GPIO_PIN_15 , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOF, GPIO_PIN_6  , GPIO_AF2_TIM4                      },
    { TIM8  , CH1  , GPIOB, GPIO_PIN_6  , GPIO_AF5_TIM8                      },
    { TIM8  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF4_TIM8                      },
    { TIM8  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF2_TIM8                      },
    { TIM8  , CH1N , GPIOC, GPIO_PIN_10 , GPIO_AF4_TIM8                      },
    { TIM8  , CH1N , GPIOB, GPIO_PIN_3  , GPIO_AF4_TIM8                      },
    { TIM8  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF4_TIM8                      },
    { TIM8  , CH2  , GPIOB, GPIO_PIN_8  , GPIO_AF10_TIM8                     },
    { TIM8  , CH2  , GPIOA, GPIO_PIN_14 , GPIO_AF5_TIM8                      },
    { TIM8  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF4_TIM8                      },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_4  , GPIO_AF4_TIM8                      },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF4_TIM8                      },
    { TIM8  , CH2N , GPIOC, GPIO_PIN_11 , GPIO_AF4_TIM8                      },
    { TIM8  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF4_TIM8                      },
    { TIM8  , CH3  , GPIOB, GPIO_PIN_9  , GPIO_AF10_TIM8                     },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_5  , GPIO_AF3_TIM8                      },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF4_TIM8                      },
    { TIM8  , CH3N , GPIOC, GPIO_PIN_12 , GPIO_AF4_TIM8                      },
    { TIM8  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF4_TIM8                      },
    { TIM8  , CH4  , GPIOD, GPIO_PIN_1  , GPIO_AF4_TIM8                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOE, GPIO_PIN_1  , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOC, GPIO_PIN_5  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOE, GPIO_PIN_0  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOC, GPIO_PIN_4  , GPIO_AF7_USART1                    },
    { USART2, RX   , GPIOB, GPIO_PIN_4  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_15 , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOB, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_14 , GPIO_AF7_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOE, GPIO_PIN_15 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOB, GPIO_PIN_8  , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3                    },
};
