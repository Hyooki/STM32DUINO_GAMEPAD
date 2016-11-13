
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                     |I2C1|I2C2|SPI1 |SPI2 |USART1|USART2|USART3|USART4|TIM (PWM)                                 |USB|RCC       |SYS   
PA0 , // |JOY_SEL                         |    |    |     |     |      |      |      |*TX   |*TIM2_CH1                                 |   |          |      
PA1 , // |LDR_OUT [R1 PhotoCell]          |    |    |     |     |      |      |      |*RX   |*TIM15_CH1N *TIM2_CH2                     |   |          |      
PA2 , // |                                |    |    |     |     |      |*TX   |      |      |*TIM2_CH3 +TIM15_CH1                      |   |          |      
PA3 , // |                                |    |    |     |     |      |*RX   |      |      |*TIM2_CH4 +TIM15_CH2                      |   |          |      
PA4 , // |AUDIO_OUT_L [TS488_VIN1]        |    |    |     |     |      |      |      |      |*TIM14_CH1                                |   |          |      
PA5 , // |AUDIO_OUT_R [TS448_VIN2]        |    |    |*SCK |     |      |      |      |      |+TIM2_CH1                                 |   |          |      
PA6 , // |                                |    |    |*MISO|     |      |      |      |      |+TIM3_CH1 *TIM16_CH1                      |   |          |      
PA7 , // |                                |    |    |*MOSI|     |      |      |      |      |*TIM1_CH1N +TIM3_CH2 +TIM14_CH1 *TIM17_CH1|   |          |      
PA8 , // |SmartCard_CLK [ST8024_XTAL1]    |    |    |     |     |      |      |      |      |+TIM1_CH1                                 |   |          |      
PA9 , // |SmartCard_IO [ST8024_IOUC]      |    |    |     |     |*TX   |      |      |      |+TIM1_CH2                                 |   |          |      
PA10, // |SmartCard_RST [ST8024_RSTIN]    |    |    |     |     |*RX   |      |      |      |+TIM1_CH3                                 |   |          |      
PA11, // |                                |    |    |     |     |      |      |      |      |+TIM1_CH4                                 |*DM|          |      
PA12, // |                                |    |    |     |     |      |      |      |      |                                          |*DP|          |      
PA13, // |SWDAT                           |    |    |     |     |      |      |      |      |                                          |   |          |*SWDIO
PA14, // |SWCLK                           |    |    |     |     |      |+TX   |      |      |                                          |   |          |*SWCLK
PA15, // |                                |    |    |     |     |      |+RX   |      |      |+TIM2_CH1                                 |   |          |      
PB0 , // |                                |    |    |     |     |      |      |      |      |+TIM3_CH3 *TIM1_CH2N                      |   |          |      
PB1 , // |                                |    |    |     |     |      |      |      |      |*TIM1_CH3N +TIM14_CH1 +TIM3_CH4           |   |          |      
PB2 , // |SPI1_MOSI_DIR [MicroSD_DIR]     |    |    |     |     |      |      |      |      |                                          |   |          |      
PB3 , // |SPI1_SCK [MicroSD_SCLK]         |    |    |+SCK |     |      |      |      |      |+TIM2_CH2                                 |   |          |      
PB4 , // |                                |    |    |+MISO|     |      |      |      |      |+TIM3_CH1                                 |   |          |      
PB5 , // |TempSensor_INT [STLM75M2F_INT]  |    |    |+MOSI|     |      |      |      |      |+TIM3_CH2                                 |   |          |      
PB6 , // |I2C1_SCL[STM75M2F/CN2_SCL]      |*SCL|    |     |     |+TX   |      |      |      |*TIM16_CH1N                               |   |          |      
PB7 , // |I2C1_SDA[STM75M2F/CN2_SDA]      |*SDA|    |     |     |+RX   |      |      |      |*TIM17_CH1N                               |   |          |      
PB8 , // |HDMI_CEC_OD                     |+SCL|    |     |     |      |      |      |      |+TIM16_CH1                                |   |          |      
PB9 , // |IR_OUT [LD8 Infrared Led]       |+SDA|    |     |     |      |      |      |      |+TIM17_CH1                                |   |          |      
PB10, // |USB_VBUS_Detection              |    |*SCL|     |*SCK |      |      |+TX   |      |+TIM2_CH3                                 |   |          |      
PB11, // |                                |    |*SDA|     |     |      |      |+RX   |      |+TIM2_CH4                                 |   |          |      
PB12, // |                                |    |    |     |     |      |      |      |      |                                          |   |          |      
PB13, // |I2C2_SCL [HDMI_SCL]             |    |+SCL|     |+SCK |      |      |      |      |+TIM1_CH1N                                |   |          |      
PB14, // |I2C2_SDA [HDMI_SDA]             |    |+SDA|     |+MISO|      |      |      |      |+TIM1_CH2N +TIM15_CH1                     |   |          |      
PB15, // |SDCard_Detect [MicroSD_SW1]     |    |    |     |+MOSI|      |      |      |      |+TIM1_CH3N +TIM15_CH1N +TIM15_CH2         |   |          |      
PC0 , // |Potentiometer [RV3]             |    |    |     |     |      |      |      |      |                                          |   |          |      
PC1 , // |Audio_IN                        |    |    |     |     |      |      |      |      |                                          |   |          |      
PC2 , // |                                |    |    |     |*MISO|      |      |      |      |                                          |   |          |      
PC3 , // |                                |    |    |     |*MOSI|      |      |      |      |                                          |   |          |      
PC4 , // |                                |    |    |     |     |      |      |*TX   |      |                                          |   |          |      
PC5 , // |                                |    |    |     |     |      |      |*RX   |      |                                          |   |          |      
PC6 , // |IR_IN [TSOP34836]               |    |    |     |     |      |      |      |      |+TIM3_CH1                                 |   |          |      
PC7 , // |                                |    |    |     |     |      |      |      |      |+TIM3_CH2                                 |   |          |      
PC8 , // |                                |    |    |     |     |      |      |      |      |+TIM3_CH3                                 |   |          |      
PC9 , // |                                |    |    |     |     |      |      |      |      |+TIM3_CH4                                 |   |          |      
PC10, // |SmartCard_1V8 [ST8024_1V8]      |    |    |     |     |      |      |+TX   |+TX   |                                          |   |          |      
PC11, // |SmartCard_3/5V [ST8024_3/5V]    |    |    |     |     |      |      |+RX   |+RX   |                                          |   |          |      
PC12, // |SmartCard_OFF [ST8024_OFF]      |    |    |     |     |      |      |      |      |                                          |   |          |      
PC13, // |Tamper_Key [B2 PushButton]      |    |    |     |     |      |      |      |      |                                          |   |          |      
PC14, // |PC14-OSC32_IN                   |    |    |     |     |      |      |      |      |                                          |   |*OSC32_IN |      
PC15, // |PC15-OSC32_OUT                  |    |    |     |     |      |      |      |      |                                          |   |*OSC32_OUT|      
PD0 , // |CAN_RX [SN65HVD230_R]           |    |    |     |     |      |      |      |      |                                          |   |          |      
PD1 , // |CAN_TX [SN65HVD230_D]           |    |    |     |+SCK |      |      |      |      |                                          |   |          |      
PD2 , // |SmartCard_CMDVCC [ST8024_CMDVCC]|    |    |     |     |      |      |      |      |                                          |   |          |      
PD3 , // |USART2_CTS [ST3241_R4OUT]       |    |    |     |+MISO|      |      |      |      |                                          |   |          |      
PD4 , // |USART2_RTS [ST3241_T1IN]        |    |    |     |+MOSI|      |      |      |      |                                          |   |          |      
PD5 , // |USART2_TX [ST3241_T2IN]         |    |    |     |     |      |+TX   |      |      |                                          |   |          |      
PD6 , // |USART2_RX [ST3241_R3OUT]        |    |    |     |     |      |+RX   |      |      |                                          |   |          |      
PD7 , // |EX_RESET_OD [CN2_RESET]         |    |    |     |     |      |      |      |      |                                          |   |          |      
PD8 , // |LED1 [Green Led]                |    |    |     |     |      |      |+TX   |      |                                          |   |          |      
PD9 , // |LED2 [Orange Led]               |    |    |     |     |      |      |+RX   |      |                                          |   |          |      
PD10, // |LED3 [Red Led]                  |    |    |     |     |      |      |      |      |                                          |   |          |      
PD11, // |LED4 [Blue Led]                 |    |    |     |     |      |      |      |      |                                          |   |          |      
PD12, // |TS1 [Touch_Sensing]             |    |    |     |     |      |      |      |      |                                          |   |          |      
PD13, // |TS2 [Touch_Sensing]             |    |    |     |     |      |      |      |      |                                          |   |          |      
PD14, // |TS_CT [Touch_Sensing]           |    |    |     |     |      |      |      |      |                                          |   |          |      
PD15, // |HDMI_HDP_SINK_OD                |    |    |     |     |      |      |      |      |                                          |   |          |      
PE0 , // |HDMI_HPD_Source                 |    |    |     |     |      |      |      |      |+TIM16_CH1                                |   |          |      
PE1 , // |                                |    |    |     |     |      |      |      |      |+TIM17_CH1                                |   |          |      
PE2 , // |JOY_LEFT                        |    |    |     |     |      |      |      |      |                                          |   |          |      
PE3 , // |JOY_RIGHT                       |    |    |     |     |      |      |      |      |*TIM3_CH1                                 |   |          |      
PE4 , // |SHIELD [Touch_Sensing]          |    |    |     |     |      |      |      |      |*TIM3_CH2                                 |   |          |      
PE5 , // |SHIELD_CT [Touch_Sensing]       |    |    |     |     |      |      |      |      |*TIM3_CH3                                 |   |          |      
PE6 , // |LCD_CS_OD [TFTLDC_CS]           |    |    |     |     |      |      |      |      |*TIM3_CH4                                 |   |          |      
PE7 , // |                                |    |    |     |     |      |      |      |      |                                          |   |          |      
PE8 , // |                                |    |    |     |     |      |      |      |      |+TIM1_CH1N                                |   |          |      
PE9 , // |                                |    |    |     |     |      |      |      |      |*TIM1_CH1                                 |   |          |      
PE10, // |                                |    |    |     |     |      |      |      |      |+TIM1_CH2N                                |   |          |      
PE11, // |                                |    |    |     |     |      |      |      |      |*TIM1_CH2                                 |   |          |      
PE12, // |                                |    |    |     |     |      |      |      |      |+TIM1_CH3N                                |   |          |      
PE13, // |                                |    |    |+SCK |     |      |      |      |      |*TIM1_CH3                                 |   |          |      
PE14, // |SPI1_MISO [MicroSD_DO]          |    |    |+MISO|     |      |      |      |      |*TIM1_CH4                                 |   |          |      
PE15, // |SPI1_MOSI [MicroSD_DI]          |    |    |+MOSI|     |      |      |      |      |                                          |   |          |      
PF0 , // |PF0-OSC_IN                      |    |    |     |     |      |      |      |      |                                          |   |*OSC_IN   |      
PF1 , // |PF1-OSC_OUT                     |    |    |     |     |      |      |      |      |                                          |   |*OSC_OUT  |      
PF2 , // |MicroSD_CS_OD                   |    |    |     |     |      |      |      |      |                                          |   |          |      
PF3 , // |                                |    |    |     |     |      |      |      |      |                                          |   |          |      
PF6 , // |                                |    |    |     |     |      |      |      |      |                                          |   |          |      
PF9 , // |JOY_UP                          |    |    |     |     |      |      |      |      |*TIM15_CH1                                |   |          |      
PF10, // |JOY_DOWN                        |    |    |     |     |      |      |      |      |*TIM15_CH2                                |   |          |      
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
  { PF6 , GPIO_PIN_6 , GPIOF, GPIO_PIN_IO, false},
  { PF9 , GPIO_PIN_9 , GPIOF, GPIO_PIN_IO, false},
  { PF10, GPIO_PIN_10, GPIOF, GPIO_PIN_IO, false},
};



spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .mosi_alternate = GPIO_AF0_SPI1,
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_7, 
    .miso_alternate = GPIO_AF0_SPI1,
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_6, 
    .sck_alternate = GPIO_AF0_SPI1,
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_5, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI2, 
    .mosi_alternate = GPIO_AF1_SPI2,
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF1_SPI2,
    .miso_port = GPIOC, 
    .miso_pin = GPIO_PIN_2, 
    .sck_alternate = GPIO_AF5_SPI2,
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_10, 
  },
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF1_I2C1,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_7,
    .scl_alternate = GPIO_AF1_I2C1,
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
    .sda_alternate = GPIO_AF1_I2C2,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_11,
    .scl_alternate = GPIO_AF1_I2C2,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_10,
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
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_9,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_10,
    .uart_af_remap = GPIO_AF1_USART1,
    .tx_alternate  = GPIO_AF1_USART1,
    .rx_alternate  = GPIO_AF1_USART1,
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
    .uart_af_remap = GPIO_AF1_USART2,
    .tx_alternate  = GPIO_AF1_USART2,
    .rx_alternate  = GPIO_AF1_USART2,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART3, .irqtype = USART3_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_4,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_5,
    .uart_af_remap = GPIO_AF1_USART3,
    .tx_alternate  = GPIO_AF1_USART3,
    .rx_alternate  = GPIO_AF1_USART3,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART4, .irqtype = USART4_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_0,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_1,
    .uart_af_remap = GPIO_AF4_USART4,
    .tx_alternate  = GPIO_AF4_USART4,
    .rx_alternate  = GPIO_AF4_USART4,
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
};
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
dac_config_str g_dac_config[] = {
    
};
#endif

pwm_config_str g_pwm_config[] = {
  {
    .port = GPIOE,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF0_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOE,
    .pin = GPIO_PIN_11,
    .alFunction = GPIO_AF0_TIM1,
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
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOE,
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF0_TIM1,
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
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF2_TIM1,
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
    .port = GPIOE,
    .pin = GPIO_PIN_14,
    .alFunction = GPIO_AF0_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF4_TIM14,
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
    .port = GPIOF,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF0_TIM15,
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
    .alFunction = GPIO_AF5_TIM15,
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
    .alFunction = GPIO_AF0_TIM15,
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
    .alFunction = GPIO_AF5_TIM16,
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
    .port = GPIOB,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF2_TIM16,
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
    .alFunction = GPIO_AF5_TIM17,
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
    .alFunction = GPIO_AF2_TIM17,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .alFunction = GPIO_AF2_TIM2,
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
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF0_TIM3,
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
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF0_TIM3,
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
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF0_TIM3,
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
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF0_TIM3,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF1_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF1_I2C1                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , GPIO_AF1_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_13 , GPIO_AF5_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , GPIO_AF1_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_14 , GPIO_AF5_I2C2                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOE, GPIO_PIN_14 , GPIO_AF1_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOE, GPIO_PIN_15 , GPIO_AF1_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOE, GPIO_PIN_13 , GPIO_AF1_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF1_SPI2                      },
    { SPI2  , MISO , GPIOD, GPIO_PIN_3  , GPIO_AF1_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF0_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF1_SPI2                      },
    { SPI2  , MOSI , GPIOD, GPIO_PIN_4  , GPIO_AF1_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF0_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF0_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_1  , GPIO_AF1_SPI2                      },
    { TIM14 , CH1  , GPIOB, GPIO_PIN_1  , GPIO_AF0_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_4  , GPIO_AF4_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF4_TIM14                     },
    { TIM15 , CH1  , GPIOF, GPIO_PIN_9  , GPIO_AF0_TIM15                     },
    { TIM15 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF0_TIM15                     },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM15                     },
    { TIM15 , CH1N , GPIOA, GPIO_PIN_1  , GPIO_AF5_TIM15                     },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_15 , GPIO_AF3_TIM15                     },
    { TIM15 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF0_TIM15                     },
    { TIM15 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF1_TIM15                     },
    { TIM15 , CH2  , GPIOF, GPIO_PIN_10 , GPIO_AF0_TIM15                     },
    { TIM16 , CH1  , GPIOE, GPIO_PIN_0  , GPIO_AF0_TIM16                     },
    { TIM16 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF2_TIM16                     },
    { TIM16 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_TIM16                     },
    { TIM16 , CH1N , GPIOB, GPIO_PIN_6  , GPIO_AF2_TIM16                     },
    { TIM17 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF2_TIM17                     },
    { TIM17 , CH1  , GPIOE, GPIO_PIN_1  , GPIO_AF0_TIM17                     },
    { TIM17 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF5_TIM17                     },
    { TIM17 , CH1N , GPIOB, GPIO_PIN_7  , GPIO_AF2_TIM17                     },
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF2_TIM1                      },
    { TIM1  , CH1  , GPIOE, GPIO_PIN_9  , GPIO_AF0_TIM1                      },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF2_TIM1                      },
    { TIM1  , CH1N , GPIOE, GPIO_PIN_8  , GPIO_AF0_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2  , GPIOE, GPIO_PIN_11 , GPIO_AF0_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2N , GPIOE, GPIO_PIN_10 , GPIO_AF0_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3  , GPIOE, GPIO_PIN_13 , GPIO_AF0_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF2_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF2_TIM1                      },
    { TIM1  , CH3N , GPIOE, GPIO_PIN_12 , GPIO_AF0_TIM1                      },
    { TIM1  , CH4  , GPIOE, GPIO_PIN_14 , GPIO_AF0_TIM1                      },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , GPIO_AF2_TIM1                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF1_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF0_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF1_TIM3                      },
    { TIM3  , CH1  , GPIOE, GPIO_PIN_3  , GPIO_AF0_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF1_TIM3                      },
    { TIM3  , CH2  , GPIOE, GPIO_PIN_4  , GPIO_AF0_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF0_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF1_TIM3                      },
    { TIM3  , CH3  , GPIOE, GPIO_PIN_5  , GPIO_AF0_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF0_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF1_TIM3                      },
    { TIM3  , CH4  , GPIOE, GPIO_PIN_6  , GPIO_AF0_TIM3                      },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF0_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF1_TIM3                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF1_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF0_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF1_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF0_USART1                    },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , GPIO_AF0_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF1_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_15 , GPIO_AF1_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF1_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF0_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_14 , GPIO_AF1_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF4_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF1_USART3                    },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , GPIO_AF0_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_5  , GPIO_AF1_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF4_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF1_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_4  , GPIO_AF1_USART3                    },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , GPIO_AF0_USART3                    },
    { USART4, RX   , GPIOA, GPIO_PIN_1  , GPIO_AF4_USART4                    },
    { USART4, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF0_USART4                    },
    { USART4, TX   , GPIOA, GPIO_PIN_0  , GPIO_AF4_USART4                    },
    { USART4, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF0_USART4                    },
};
