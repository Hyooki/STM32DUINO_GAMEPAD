
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                       |I2C1|I2C2|I2C3|SPI1 |SPI2 |USART1|USART2|USART4|USART5|TIM (PWM)                       |USB|RCC       |SYS    
PA0 , // |PRESSURE [TSZ122IST_1]            |    |    |    |     |     |      |      |*TX   |      |*TIM2_CH1                       |   |          |       
PA1 , // |                                  |    |    |    |     |     |      |      |*RX   |      |*TIM2_CH2                       |   |          |       
PA2 , // |                                  |    |    |    |     |     |      |*TX   |      |      |+TIM21_CH1 *TIM2_CH3            |   |          |       
PA3 , // |                                  |    |    |    |     |     |      |*RX   |      |      |+TIM21_CH2 *TIM2_CH4            |   |          |       
PA4 , // |DAC OUT1                          |    |    |    |     |     |      |      |      |      |                                |   |          |       
PA5 , // |ADC_IN5                           |    |    |    |*SCK |     |      |      |      |      |+TIM2_CH1                       |   |          |       
PA6 , // |                                  |    |    |    |*MISO|     |      |      |      |      |+TIM3_CH1 +TIM22_CH1            |   |          |       
PA7 , // |DET_COMP2_OUT [TP18]              |    |    |    |*MOSI|     |      |      |      |      |+TIM3_CH2 +TIM22_CH2            |   |          |       
PA8 , // |                                  |    |    |+SCL|     |     |      |      |      |      |                                |   |          |       
PA9 , // |                                  |*SCL|    |    |     |     |*TX   |      |      |      |                                |   |          |       
PA10, // |                                  |*SDA|    |    |     |     |*RX   |      |      |      |                                |   |          |       
PA11, // |USB_DM                            |    |    |    |+MISO|     |      |      |      |      |                                |*DM|          |       
PA12, // |USB_DP                            |    |    |    |+MOSI|     |      |      |      |      |                                |*DP|          |       
PA13, // |SWDIO                             |    |    |    |     |     |      |      |      |      |                                |   |          |*SWDIO 
PA14, // |SWCLK                             |    |    |    |     |     |      |+TX   |      |      |                                |   |          |*SWCLK 
PA15, // |                                  |    |    |    |     |     |      |+RX   |      |      |+TIM2_CH1                       |   |          |       
PB0 , // |                                  |    |    |    |     |     |      |      |      |      |+TIM3_CH3                       |   |          |       
PB1 , // |                                  |    |    |    |     |     |      |      |      |      |+TIM3_CH4                       |   |          |       
PB2 , // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PB3 , // |DET_COMP2_INM                     |    |    |    |+SCK |     |      |      |      |+TX   |+TIM2_CH2                       |   |          |       
PB4 , // |DET_COMP2_INP                     |    |    |+SDA|+MISO|     |      |      |      |+RX   |+TIM3_CH1 +TIM22_CH1            |   |          |       
PB5 , // |TempSensor_INT [STLM75M2F_OS/INT] |    |    |    |+MOSI|     |      |      |      |      |+TIM3_CH2 +TIM22_CH2 +LPTIM1_IN1|   |          |       
PB6 , // |I2C1_SCL [STLM75M2F_SCL]          |+SCL|    |    |     |     |+TX   |      |      |      |                                |   |          |       
PB7 , // |I2C1_SDA [STLM75M2F_SDA]          |+SDA|    |    |     |     |+RX   |      |      |      |+LPTIM1_IN2                     |   |          |*PVD_IN
PB8 , // |                                  |+SCL|    |    |     |     |      |      |      |      |                                |   |          |       
PB9 , // |                                  |+SDA|    |    |     |     |      |      |      |      |                                |   |          |       
PB10, // |                                  |    |*SCL|    |     |*SCK |      |      |      |      |+TIM2_CH3                       |   |          |       
PB11, // |                                  |    |*SDA|    |     |     |      |      |      |      |+TIM2_CH4                       |   |          |       
PB12, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PB13, // |                                  |    |+SCL|    |     |+SCK |      |      |      |      |+TIM21_CH1                      |   |          |       
PB14, // |                                  |    |+SDA|    |     |+MISO|      |      |      |      |+TIM21_CH2                      |   |          |       
PB15, // |                                  |    |    |    |     |+MOSI|      |      |      |      |                                |   |          |       
PC0 , // |DET_LPTIM_CH1 [TS862AIPT_9]       |    |    |*SCL|     |     |      |      |      |      |*LPTIM1_IN1                     |   |          |       
PC1 , // |                                  |    |    |*SDA|     |     |      |      |      |      |                                |   |          |       
PC2 , // |                                  |    |    |    |     |*MISO|      |      |      |      |*LPTIM1_IN2                     |   |          |       
PC3 , // |                                  |    |    |    |     |*MOSI|      |      |      |      |                                |   |          |       
PC4 , // |TST_MOSI_DIR [SN74LVC2T45DCUT_DIR]|    |    |    |     |     |      |      |      |      |                                |   |          |       
PC5 , // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PC6 , // |                                  |    |    |    |     |     |      |      |      |      |+TIM3_CH1 +TIM22_CH1            |   |          |       
PC7 , // |                                  |    |    |    |     |     |      |      |      |      |+TIM3_CH2 +TIM22_CH2            |   |          |       
PC8 , // |                                  |    |    |    |     |     |      |      |      |      |+TIM3_CH3                       |   |          |       
PC9 , // |                                  |    |    |+SDA|     |     |      |      |      |      |+TIM3_CH4                       |   |          |       
PC10, // |                                  |    |    |    |     |     |      |      |+TX   |      |                                |   |          |       
PC11, // |                                  |    |    |    |     |     |      |      |+RX   |      |                                |   |          |       
PC12, // |                                  |    |    |    |     |     |      |      |      |+TX   |                                |   |          |       
PC13, // |KEY [B2]                          |    |    |    |     |     |      |      |      |      |                                |   |          |       
PC14, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |*OSC32_IN |       
PC15, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |*OSC32_OUT|       
PD0 , // |MicroSD_CS                        |    |    |    |     |     |      |      |      |      |+TIM21_CH1                      |   |          |       
PD1 , // |LED3                              |    |    |    |     |+SCK |      |      |      |      |                                |   |          |       
PD2 , // |                                  |    |    |    |     |     |      |      |      |+RX   |                                |   |          |       
PD3 , // |USART2_CTS_3V3 [ST3241EBPR_R4OUT] |    |    |    |     |+MISO|      |      |      |      |                                |   |          |       
PD4 , // |USART2_RTS [N74LVC2T45DCUT_A2]    |    |    |    |     |+MOSI|      |      |      |      |                                |   |          |       
PD5 , // |USART2_TX [N74LVC2T45DCUT_A1]     |    |    |    |     |     |      |+TX   |      |      |                                |   |          |       
PD6 , // |USART2_RX_3V3 [ST3241EBPR_R3OUT]  |    |    |    |     |     |      |+RX   |      |      |                                |   |          |       
PD7 , // |DET_PULSE                         |    |    |    |     |     |      |      |      |      |+TIM21_CH2                      |   |          |       
PD8 , // |LPUART_TX [SN74LVC2T45DCUT_A1]    |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD9 , // |LPUART_RX_3V3 [ST3241EBPR_R3OUT]  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD10, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD11, // |LPUART_CTS_3V3 [ST3241EBPR_R4OUT] |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD12, // |LPUART_RTS [SN74LVC2T45DCUT_A2]   |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD13, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD14, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PD15, // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PE0 , // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PE1 , // |                                  |    |    |    |     |     |      |      |      |      |                                |   |          |       
PE2 , // |EXT_RESET                         |    |    |    |     |     |      |      |      |      |                                |   |          |       
PE3 , // |                                  |    |    |    |     |     |      |      |      |      |*TIM3_CH1 *TIM22_CH1            |   |          |       
PE4 , // |LED1 [Green]                      |    |    |    |     |     |      |      |      |      |*TIM3_CH2 *TIM22_CH2            |   |          |       
PE5 , // |LED2 [Orange]                     |    |    |    |     |     |      |      |      |      |*TIM3_CH3 *TIM21_CH1            |   |          |       
PE6 , // |MFX_IRQOUT [MFX_IRQOUT]           |    |    |    |     |     |      |      |      |      |*TIM3_CH4 *TIM21_CH2            |   |          |       
PE7 , // |LED4 [Blue]                       |    |    |    |     |     |      |      |      |      |                                |   |          |       
PE8 , // |USART4_TX [SN74LVC2T45DCUT_A1]    |    |    |    |     |     |      |      |+TX   |      |                                |   |          |       
PE9 , // |USART4_RX_3V3                     |    |    |    |     |     |      |      |+RX   |      |+TIM2_CH1                       |   |          |       
PE10, // |TFT_CS [SN74LVC2T45DCUT_A2]       |    |    |    |     |     |      |      |      |*TX   |+TIM2_CH2                       |   |          |       
PE11, // |                                  |    |    |    |     |     |      |      |      |*RX   |+TIM2_CH3                       |   |          |       
PE12, // |                                  |    |    |    |     |     |      |      |      |      |+TIM2_CH4                       |   |          |       
PE13, // |SPI1_SCK [SN74LVC2T45DCUT_A1]     |    |    |    |+SCK |     |      |      |      |      |                                |   |          |       
PE14, // |SPI1_MISO_3V3                     |    |    |    |+MISO|     |      |      |      |      |                                |   |          |       
PE15, // |SPI1_MOSI [SN74LVC2T45DCUT_A1]    |    |    |    |+MOSI|     |      |      |      |      |                                |   |          |       
PH0 , // |                                  |    |    |    |     |     |      |      |      |      |                                |   |*OSC_IN   |       
PH1 , // |                                  |    |    |    |     |     |      |      |      |      |                                |   |*OSC_OUT  |       
PH9 , // |SPI1_MOSI_DIR                     |    |    |    |     |     |      |      |      |      |                                |   |          |       
PH10, // |MFX_WKUP                          |    |    |    |     |     |      |      |      |      |                                |   |          |       
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
  { PH0 , GPIO_PIN_0 , GPIOH, GPIO_PIN_IO, false},
  { PH1 , GPIO_PIN_1 , GPIOH, GPIO_PIN_IO, false},
  { PH9 , GPIO_PIN_9 , GPIOH, GPIO_PIN_IO, false},
  { PH10, GPIO_PIN_10, GPIOH, GPIO_PIN_IO, false},
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
    .mosi_alternate = GPIO_AF2_SPI2,
    .mosi_port = GPIOC, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF2_SPI2,
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
    .sda_alternate = GPIO_AF6_I2C1,
    .sda_port = GPIOA,
    .sda_pin = GPIO_PIN_10,
    .scl_alternate = GPIO_AF6_I2C1,
    .scl_port = GPIOA,
    .scl_pin = GPIO_PIN_9,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C2,
    .irq = I2C2_EV_IRQn,
    .sda_alternate = GPIO_AF6_I2C2,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_11,
    .scl_alternate = GPIO_AF6_I2C2,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_10,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C3,
    .irq = I2C3_EV_IRQn,
    .sda_alternate = GPIO_AF7_I2C3,
    .sda_port = GPIOC,
    .sda_pin = GPIO_PIN_1,
    .scl_alternate = GPIO_AF7_I2C3,
    .scl_port = GPIOC,
    .scl_pin = GPIO_PIN_0,
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
    .uart_af_remap = GPIO_AF4_USART1,
    .tx_alternate  = GPIO_AF4_USART1,
    .rx_alternate  = GPIO_AF4_USART1,
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
    .uart_af_remap = GPIO_AF4_USART2,
    .tx_alternate  = GPIO_AF4_USART2,
    .rx_alternate  = GPIO_AF4_USART2,
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
    .uart_af_remap = GPIO_AF6_USART4,
    .tx_alternate  = GPIO_AF6_USART4,
    .rx_alternate  = GPIO_AF6_USART4,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART5, .irqtype = USART5_IRQn,
    .tx_port = GPIOE, .tx_pin = GPIO_PIN_10,
    .rx_port = GPIOE, .rx_pin = GPIO_PIN_11,
    .uart_af_remap = GPIO_AF6_USART5,
    .tx_alternate  = GPIO_AF6_USART5,
    .rx_alternate  = GPIO_AF6_USART5,
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
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF0_TIM21,
    .timInstance = TIM21,
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
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF0_TIM21,
    .timInstance = TIM21,
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
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF0_TIM22,
    .timInstance = TIM22,
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
    .alFunction = GPIO_AF0_TIM22,
    .timInstance = TIM22,
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
    .pin = GPIO_PIN_3,
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
    .port = GPIOE,
    .pin = GPIO_PIN_5,
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
    .pin = GPIO_PIN_6,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOA, GPIO_PIN_9  , GPIO_AF6_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOA, GPIO_PIN_10 , GPIO_AF6_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , GPIO_AF6_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_13 , GPIO_AF5_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , GPIO_AF6_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_14 , GPIO_AF5_I2C2                      },
    { I2C3  , SCL  , GPIOA, GPIO_PIN_8  , GPIO_AF7_I2C3                      },
    { I2C3  , SCL  , GPIOC, GPIO_PIN_0  , GPIO_AF7_I2C3                      },
    { I2C3  , SDA  , GPIOB, GPIO_PIN_4  , GPIO_AF7_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_1  , GPIO_AF7_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_9  , GPIO_AF7_I2C3                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOE, GPIO_PIN_14 , GPIO_AF2_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_11 , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_12 , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOE, GPIO_PIN_15 , GPIO_AF2_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOE, GPIO_PIN_13 , GPIO_AF2_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF2_SPI2                      },
    { SPI2  , MISO , GPIOD, GPIO_PIN_3  , GPIO_AF2_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF0_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF2_SPI2                      },
    { SPI2  , MOSI , GPIOD, GPIO_PIN_4  , GPIO_AF1_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF0_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF0_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_1  , GPIO_AF1_SPI2                      },
    { TIM21 , CH1  , GPIOE, GPIO_PIN_5  , GPIO_AF0_TIM21                     },
    { TIM21 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF0_TIM21                     },
    { TIM21 , CH1  , GPIOB, GPIO_PIN_13 , GPIO_AF6_TIM21                     },
    { TIM21 , CH1  , GPIOD, GPIO_PIN_0  , GPIO_AF0_TIM21                     },
    { TIM21 , CH2  , GPIOD, GPIO_PIN_7  , GPIO_AF1_TIM21                     },
    { TIM21 , CH2  , GPIOE, GPIO_PIN_6  , GPIO_AF0_TIM21                     },
    { TIM21 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF0_TIM21                     },
    { TIM21 , CH2  , GPIOB, GPIO_PIN_14 , GPIO_AF6_TIM21                     },
    { TIM22 , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF4_TIM22                     },
    { TIM22 , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF0_TIM22                     },
    { TIM22 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF5_TIM22                     },
    { TIM22 , CH1  , GPIOE, GPIO_PIN_3  , GPIO_AF0_TIM22                     },
    { TIM22 , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF4_TIM22                     },
    { TIM22 , CH2  , GPIOE, GPIO_PIN_4  , GPIO_AF0_TIM22                     },
    { TIM22 , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF0_TIM22                     },
    { TIM22 , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF5_TIM22                     },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOE, GPIO_PIN_9  , GPIO_AF0_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF5_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOE, GPIO_PIN_10 , GPIO_AF0_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOE, GPIO_PIN_11 , GPIO_AF0_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOE, GPIO_PIN_12 , GPIO_AF0_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOE, GPIO_PIN_3  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF4_TIM3                      },
    { TIM3  , CH2  , GPIOE, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOE, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOE, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF2_TIM3                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF4_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF0_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF4_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF0_USART1                    },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , GPIO_AF0_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF4_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_15 , GPIO_AF4_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF4_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF0_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_14 , GPIO_AF4_USART2                    },
    { USART4, RX   , GPIOA, GPIO_PIN_1  , GPIO_AF6_USART4                    },
    { USART4, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF6_USART4                    },
    { USART4, RX   , GPIOE, GPIO_PIN_9  , GPIO_AF6_USART4                    },
    { USART4, TX   , GPIOA, GPIO_PIN_0  , GPIO_AF6_USART4                    },
    { USART4, TX   , GPIOE, GPIO_PIN_8  , GPIO_AF6_USART4                    },
    { USART4, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF6_USART4                    },
    { USART5, RX   , GPIOB, GPIO_PIN_4  , GPIO_AF6_USART5                    },
    { USART5, RX   , GPIOD, GPIO_PIN_2  , GPIO_AF6_USART5                    },
    { USART5, RX   , GPIOE, GPIO_PIN_11 , GPIO_AF6_USART5                    },
    { USART5, TX   , GPIOE, GPIO_PIN_10 , GPIO_AF6_USART5                    },
    { USART5, TX   , GPIOC, GPIO_PIN_12 , GPIO_AF2_USART5                    },
    { USART5, TX   , GPIOB, GPIO_PIN_3  , GPIO_AF6_USART5                    },
};
