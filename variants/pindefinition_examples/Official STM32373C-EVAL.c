
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                    |I2C1|I2C2|SPI1 |SPI2 |SPI3 |USART1|USART2|USART3|ADC1                 |TIM (PWM)                                            |USB|RCC       |SYS           
PA0 , // |                               |    |    |     |     |     |      |      |      |*IN0                 |+TIM5_CH1 *TIM19_CH1 *TIM2_CH1                       |   |          |              
PA1 , // |LDR_OUT [R63 PhotoCell]        |    |    |     |     |*SCK |      |      |      |*IN1                 |+TIM5_CH2 *TIM15_CH1N *TIM19_CH2 *TIM2_CH2           |   |          |              
PA2 , // |Key_Button [B3 Blue PushButton]|    |    |     |     |*MISO|      |*TX   |      |*IN2                 |*TIM19_CH3 +TIM5_CH3 *TIM2_CH3 *TIM15_CH1            |   |          |              
PA3 , // |COM_IN+                        |    |    |     |     |*MOSI|      |*RX   |      |*IN3                 |+TIM5_CH4 *TIM19_CH4 *TIM2_CH4 *TIM15_CH2            |   |          |              
PA4 , // |ADC_DAC_SAR1 [CN11]            |    |    |     |     |     |      |      |      |*IN4                 |*TIM3_CH2 *TIM12_CH1                                 |   |          |              
PA5 , // |ADC_DAC_SAR2 [CN10]            |    |    |*SCK |     |     |      |      |      |*IN5                 |+TIM14_CH1 +TIM2_CH1 *TIM12_CH2                      |   |          |              
PA6 , // |ECG_DAC [ElectroCardiogram]    |    |    |*MISO|     |     |      |      |      |*IN6                 |*TIM3_CH1 *TIM13_CH1 *TIM16_CH1                      |   |          |              
PA7 , // |COMP_OUT [LD9 Green Led]       |    |    |*MOSI|     |     |      |      |      |*IN7                 |+TIM3_CH2 +TIM14_CH1 *TIM17_CH1                      |   |          |              
PA8 , // |I2C2_SMB [STLM75M2E_INT]       |    |    |     |+SCK |     |      |      |      |                     |+TIM5_CH1                                            |   |          |              
PA9 , // |I2C2_SCL [STLM75M2E_SCL]       |    |+SCL|     |+MISO|     |+TX   |      |      |                     |+TIM13_CH1 +TIM2_CH3                                 |   |          |              
PA10, // |I2C2_SDA [STLM75M2E_SDA]       |    |+SDA|     |+MOSI|     |+RX   |      |      |                     |+TIM14_CH1 +TIM2_CH4                                 |   |          |              
PA11, // |                               |    |    |     |     |     |      |      |      |                     |+TIM5_CH2 +TIM4_CH1                                  |*DM|          |              
PA12, // |                               |    |    |+SCK |     |     |      |      |      |                     |+TIM5_CH3 +TIM4_CH2 +TIM16_CH1                       |*DP|          |              
PA13, // |TMS/SWDIO                      |    |    |+MISO|     |     |      |      |      |                     |+TIM5_CH4 *TIM16_CH1N +TIM4_CH3                      |   |          |*JTMS-SWDIO   
PA14, // |TMS/SWCLK                      |*SDA|    |     |     |     |      |      |      |                     |+TIM12_CH1                                           |   |          |*JTCK-SWCLK   
PA15, // |TDI                            |*SCL|    |     |     |     |      |      |      |                     |+TIM2_CH1 +TIM12_CH2                                 |   |          |*JTDI         
PB0 , // |MIC_IN [Microphone]            |    |    |+MOSI|     |     |      |      |      |*IN8 *AIN6P          |*TIM3_CH3 +TIM3_CH2                                  |   |          |              
PB1 , // |ADC_POT_IN [RV3 Potentiometer] |    |    |     |     |     |      |      |      |*IN9 *AIN5P *AIN6M   |*TIM3_CH4                                            |   |          |              
PB2 , // |V1_8_POR                       |    |    |     |     |     |      |      |      |*AIN4P               |                                                     |   |          |              
PB3 , // |TDO/SWO                        |    |    |+SCK |     |+SCK |      |+TX   |      |                     |+TIM13_CH1 +TIM2_CH2                                 |   |          |*JTDO-TRACESWO
PB4 , // |TRST                           |    |    |+MISO|     |+MISO|      |+RX   |      |                     |+TIM3_CH1 +TIM15_CH1N +TIM16_CH1                     |   |          |*NJTRST       
PB5 , // |IR_IN [U22 Infrared Receiver]  |    |    |+MOSI|     |+MOSI|      |      |      |                     |+TIM3_CH2 +TIM17_CH1                                 |   |          |              
PB6 , // |I2C1_SCL [HDMI_SCL]            |+SCL|    |     |     |     |+TX   |      |      |                     |+TIM3_CH3 +TIM19_CH1 +TIM16_CH1N +TIM15_CH1 +TIM4_CH1|   |          |              
PB7 , // |I2C1_SDA [HDMI_SDA]            |+SDA|    |     |     |     |+RX   |      |      |                     |*TIM17_CH1N +TIM19_CH2 +TIM3_CH4 +TIM15_CH2 +TIM4_CH2|   |          |              
PB8 , // |HDMI_CEC                       |+SCL|    |     |+SCK |     |      |      |+TX   |                     |+TIM19_CH3 +TIM4_CH3 +TIM16_CH1                      |   |          |              
PB9 , // |IR_LED [LD10 Infrared Led]     |+SDA|    |     |     |     |      |      |+RX   |                     |+TIM4_CH4 +TIM19_CH4 +TIM17_CH1                      |   |          |              
PB10, // |                               |    |    |     |*SCK |     |      |      |*TX   |                     |+TIM2_CH3                                            |   |          |              
PB14, // |                               |    |    |     |+MISO|     |      |      |      |                     |+TIM15_CH1 +TIM12_CH1                                |   |          |              
PB15, // |                               |    |    |     |+MOSI|     |      |      |      |                     |+TIM15_CH1N +TIM15_CH2 +TIM12_CH2                    |   |          |              
PC0 , // |LED1 [Green Led]               |    |    |     |     |     |      |      |      |*IN10                |*TIM5_CH1                                            |   |          |              
PC1 , // |LED2 [Orange Led]              |    |    |     |     |     |      |      |      |*IN11                |*TIM5_CH2                                            |   |          |              
PC2 , // |LED3 [Red Led]                 |    |    |     |*MISO|     |      |      |      |*IN12                |*TIM5_CH3                                            |   |          |              
PC3 , // |LED4 [Blue Led]                |    |    |     |*MOSI|     |      |      |      |*IN13                |*TIM5_CH4                                            |   |          |              
PC4 , // |                               |    |    |     |     |     |*TX   |      |      |*IN14                |+TIM13_CH1                                           |   |          |              
PC5 , // |USB_DISCONNECT                 |    |    |     |     |     |*RX   |      |      |*IN15                |                                                     |   |          |              
PC6 , // |I2S_CMD [CS43L22_LRCK]         |    |    |     |     |     |      |      |      |                     |+TIM3_CH1                                            |   |          |              
PC7 , // |I2S_CK [CS43L22_SCLK]          |    |    |+SCK |     |     |      |      |      |                     |+TIM3_CH2                                            |   |          |              
PC8 , // |I2S_MCLK [CS43L22_MCLK]        |    |    |+MISO|     |     |      |      |      |                     |+TIM3_CH3                                            |   |          |              
PC9 , // |I2S_DIN [CS43L22_SDIN]         |    |    |+MOSI|     |     |      |      |      |                     |+TIM3_CH4                                            |   |          |              
PC10, // |SPI3_SCK [TFTLCD_SCL]          |    |    |     |     |+SCK |      |      |+TX   |                     |+TIM19_CH1                                           |   |          |              
PC11, // |SPI3_MISO [TFTLCD_SDO]         |    |    |     |     |+MISO|      |      |+RX   |                     |+TIM19_CH2                                           |   |          |              
PC12, // |SPI3_MOSI [TFTLCD_SDI]         |    |    |     |     |+MOSI|      |      |      |                     |+TIM19_CH3                                           |   |          |              
PC13, // |                               |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PC14, // |PC14-OSC32_IN                  |    |    |     |     |     |      |      |      |                     |                                                     |   |*OSC32_IN |              
PC15, // |PC15-OSC32_OUT                 |    |    |     |     |     |      |      |      |*EXTI15              |                                                     |   |*OSC32_OUT|              
PD0 , // |CAN_RX [SN65HVD230D_R]         |    |    |     |     |     |      |      |      |                     |+TIM19_CH4                                           |   |          |              
PD1 , // |CAN_TX [SN65HVD230D_D]         |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PD2 , // |LCD_CS [TFTLCD_CS]             |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PD3 , // |USART2_CTS [ST3241_R4OUT]      |    |    |     |+MISO|     |      |      |      |                     |                                                     |   |          |              
PD4 , // |USART2_RTS [ST3241_T1IN]       |    |    |     |+MOSI|     |      |      |      |                     |                                                     |   |          |              
PD5 , // |USART2_TX [ST3241_T2IN]        |    |    |     |     |     |      |+TX   |      |                     |                                                     |   |          |              
PD6 , // |USART2_RX [ST3241_R3OUT]       |    |    |     |     |     |      |+RX   |      |                     |                                                     |   |          |              
PD7 , // |HDMI_HPD_SOURCE                |    |    |     |+SCK |     |      |      |      |                     |                                                     |   |          |              
PD8 , // |                               |    |    |     |+SCK |     |      |      |+TX   |                     |                                                     |   |          |              
PD9 , // |                               |    |    |     |     |     |      |      |+RX   |                     |                                                     |   |          |              
PD10, // |                               |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PD11, // |AUDIO_RST [CS43L22_RESET]      |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PD12, // |SLIDER_1 [Touch_Slider]        |    |    |     |     |     |      |      |      |                     |*TIM4_CH1                                            |   |          |              
PD13, // |SLIDER_2 [Touch_Slider]        |    |    |     |     |     |      |      |      |                     |*TIM4_CH2                                            |   |          |              
PD14, // |SLIDER_3 [Touch_Slider]        |    |    |     |     |     |      |      |      |                     |*TIM4_CH3                                            |   |          |              
PD15, // |SLIDER_CT [Touch_Slider]       |    |    |     |     |     |      |      |      |                     |*TIM4_CH4                                            |   |          |              
PE0 , // |HDMI_HPD_SINK                  |    |    |     |     |     |+TX   |      |      |                     |                                                     |   |          |              
PE1 , // |                               |    |    |     |     |     |+RX   |      |      |                     |                                                     |   |          |              
PE2 , // |MicroSD_CS                     |    |    |     |     |     |      |      |      |                     |                                                     |   |          |*TRACECK      
PE3 , // |SDCard_Detect [MicroSD_SW1]    |    |    |     |     |     |      |      |      |                     |                                                     |   |          |*TRACED0      
PE4 , // |SHIELD [Touch_Slider]          |    |    |     |     |     |      |      |      |                     |                                                     |   |          |*TRACED1      
PE5 , // |SHIELD_CT [Touch_Slider]       |    |    |     |     |     |      |      |      |                     |                                                     |   |          |*TRACED2      
PE6 , // |JOY_SEL                        |    |    |     |     |     |      |      |      |                     |                                                     |   |          |*TRACED3      
PE7 , // |RTD_IN [Temperature_Sensor]    |    |    |     |     |     |      |      |      |*AIN3P *AIN4M        |                                                     |   |          |              
PE8 , // |PRESSURE_P [MPX2102_Vout+]     |    |    |     |     |     |      |      |      |*AIN8P               |                                                     |   |          |              
PE9 , // |PRESSURE_N [MPX2102_Vout-]     |    |    |     |     |     |      |      |      |*AIN8M *AIN7P        |                                                     |   |          |              
PE10, // |                               |    |    |     |     |     |      |      |      |*AIN2P               |                                                     |   |          |              
PE11, // |ADC_SD [CN9]                   |    |    |     |     |     |      |      |      |*EXTI11 *AIN1P *AIN2M|                                                     |   |          |              
PE12, // |ECG [ElectroCardiogram]        |    |    |     |     |     |      |      |      |*AIN0P               |                                                     |   |          |              
PE13, // |                               |    |    |     |     |     |      |      |      |*AIN0M               |                                                     |   |          |              
PE14, // |PRESSURE_TEMP [MPX2102_GND]    |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PE15, // |                               |    |    |     |     |     |      |      |*RX   |                     |                                                     |   |          |              
PF0 , // |PF0-OSC_IN                     |    |*SDA|     |     |     |      |      |      |                     |                                                     |   |*OSC_IN   |              
PF1 , // |PF1-OSC_OUT                    |    |*SCL|     |     |     |      |      |      |                     |                                                     |   |*OSC_OUT  |              
PF2 , // |JOY_DOWN                       |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PF4 , // |JOY_LEFT                       |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
PF6 , // |                               |    |+SCL|+MOSI|     |     |      |      |      |                     |+TIM4_CH4                                            |   |          |              
PF9 , // |JOY_RIGHT                      |    |    |     |     |     |      |      |      |                     |*TIM14_CH1                                           |   |          |              
PF10, // |JOY_UP                         |    |    |     |     |     |      |      |      |                     |                                                     |   |          |              
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
  { PF4 , GPIO_PIN_4 , GPIOF, GPIO_PIN_IO, false},
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
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF5_SPI2,
    .miso_port = GPIOC, 
    .miso_pin = GPIO_PIN_2, 
    .sck_alternate = GPIO_AF5_SPI2,
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_10, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI3, 
    .mosi_alternate = GPIO_AF6_SPI3,
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF6_SPI3,
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_2, 
    .sck_alternate = GPIO_AF6_SPI3,
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_1, 
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
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF10_TIM12,
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
    .port = GPIOA,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF10_TIM12,
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
    .alFunction = GPIO_AF9_TIM13,
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
    .port = GPIOF,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF2_TIM14,
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
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF9_TIM15,
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
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF9_TIM15,
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
    .alFunction = GPIO_AF11_TIM19,
    .timInstance = TIM19,
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
    .alFunction = GPIO_AF11_TIM19,
    .timInstance = TIM19,
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
    .alFunction = GPIO_AF11_TIM19,
    .timInstance = TIM19,
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
    .alFunction = GPIO_AF11_TIM19,
    .timInstance = TIM19,
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
    .port = GPIOA,
    .pin = GPIO_PIN_6,
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
    .port = GPIOA,
    .pin = GPIO_PIN_4,
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
    .port = GPIOB,
    .pin = GPIO_PIN_0,
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
    .port = GPIOB,
    .pin = GPIO_PIN_1,
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
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF2_TIM5,
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
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF2_TIM5,
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
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF2_TIM5,
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
    .port = GPIOC,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF2_TIM5,
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
    { SPI1  , MISO , GPIOA, GPIO_PIN_13 , GPIO_AF6_SPI1                      },
    { SPI1  , MISO , GPIOC, GPIO_PIN_8  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOC, GPIO_PIN_9  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOF, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_0  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_12 , GPIO_AF6_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOC, GPIO_PIN_7  , GPIO_AF5_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOA, GPIO_PIN_9  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOA, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOD, GPIO_PIN_4  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOA, GPIO_PIN_8  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_8  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_8  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_7  , GPIO_AF5_SPI2                      },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOA, GPIO_PIN_2  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOA, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOA, GPIO_PIN_1  , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { TIM12 , CH1  , GPIOA, GPIO_PIN_4  , GPIO_AF10_TIM12                    },
    { TIM12 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF9_TIM12                     },
    { TIM12 , CH1  , GPIOA, GPIO_PIN_14 , GPIO_AF10_TIM12                    },
    { TIM12 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF9_TIM12                     },
    { TIM12 , CH2  , GPIOA, GPIO_PIN_5  , GPIO_AF10_TIM12                    },
    { TIM12 , CH2  , GPIOA, GPIO_PIN_15 , GPIO_AF10_TIM12                    },
    { TIM13 , CH1  , GPIOC, GPIO_PIN_4  , GPIO_AF2_TIM13                     },
    { TIM13 , CH1  , GPIOA, GPIO_PIN_9  , GPIO_AF2_TIM13                     },
    { TIM13 , CH1  , GPIOB, GPIO_PIN_3  , GPIO_AF9_TIM13                     },
    { TIM13 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF9_TIM13                     },
    { TIM14 , CH1  , GPIOF, GPIO_PIN_9  , GPIO_AF2_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_10 , GPIO_AF9_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF9_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF9_TIM14                     },
    { TIM15 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_6  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM15                     },
    { TIM15 , CH1N , GPIOA, GPIO_PIN_1  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_15 , GPIO_AF2_TIM15                     },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_4  , GPIO_AF9_TIM15                     },
    { TIM15 , CH2  , GPIOB, GPIO_PIN_7  , GPIO_AF9_TIM15                     },
    { TIM15 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF9_TIM15                     },
    { TIM15 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF1_TIM15                     },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_12 , GPIO_AF1_TIM16                     },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF1_TIM16                     },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF1_TIM16                     },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF1_TIM16                     },
    { TIM16 , CH1N , GPIOA, GPIO_PIN_13 , GPIO_AF1_TIM16                     },
    { TIM16 , CH1N , GPIOB, GPIO_PIN_6  , GPIO_AF1_TIM16                     },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_5  , GPIO_AF10_TIM17                    },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF1_TIM17                     },
    { TIM17 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF1_TIM17                     },
    { TIM17 , CH1N , GPIOB, GPIO_PIN_7  , GPIO_AF1_TIM17                     },
    { TIM19 , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF11_TIM19                    },
    { TIM19 , CH1  , GPIOB, GPIO_PIN_6  , GPIO_AF11_TIM19                    },
    { TIM19 , CH1  , GPIOC, GPIO_PIN_10 , GPIO_AF2_TIM19                     },
    { TIM19 , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF11_TIM19                    },
    { TIM19 , CH2  , GPIOB, GPIO_PIN_7  , GPIO_AF11_TIM19                    },
    { TIM19 , CH2  , GPIOC, GPIO_PIN_11 , GPIO_AF2_TIM19                     },
    { TIM19 , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF11_TIM19                    },
    { TIM19 , CH3  , GPIOB, GPIO_PIN_8  , GPIO_AF11_TIM19                    },
    { TIM19 , CH3  , GPIOC, GPIO_PIN_12 , GPIO_AF2_TIM19                     },
    { TIM19 , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF11_TIM19                    },
    { TIM19 , CH4  , GPIOB, GPIO_PIN_9  , GPIO_AF11_TIM19                    },
    { TIM19 , CH4  , GPIOD, GPIO_PIN_0  , GPIO_AF2_TIM19                     },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_9  , GPIO_AF10_TIM2                     },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_10 , GPIO_AF10_TIM2                     },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_0  , GPIO_AF10_TIM3                     },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_6  , GPIO_AF10_TIM3                     },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM3                      },
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
    { TIM5  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM5                      },
    { TIM5  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF2_TIM5                      },
    { TIM5  , CH1  , GPIOC, GPIO_PIN_0  , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOA, GPIO_PIN_11 , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOC, GPIO_PIN_1  , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOA, GPIO_PIN_12 , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOC, GPIO_PIN_2  , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOA, GPIO_PIN_13 , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOC, GPIO_PIN_3  , GPIO_AF2_TIM5                      },
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
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOB, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART3, RX   , GPIOE, GPIO_PIN_15 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOB, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_8  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3                    },
};
