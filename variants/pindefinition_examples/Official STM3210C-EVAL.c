
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                                  |I2C1|SPI1 |SPI2 |SPI3 |USART1|USART2|USART3|ADC1 |TIM (PWM)           |USB       |RCC       |SYS            
PA0 , // |MII_CRS [DP83848_CRS]                        |    |     |     |     |      |      |      |*IN0 |*TIM5_CH1 *TIM2_CH1 |          |          |               
PA1 , // |MII_RX_CLK [DP83848_RX_CLK]                  |    |     |     |     |      |      |      |*IN1 |*TIM5_CH2 *TIM2_CH2 |          |          |               
PA2 , // |MII_MDIO [DP83848_MDIO]                      |    |     |     |     |      |*TX   |      |*IN2 |*TIM5_CH3 *TIM2_CH3 |          |          |               
PA3 , // |MII_COL [DP83848_COL]                        |    |     |     |     |      |*RX   |      |*IN3 |*TIM5_CH4 *TIM2_CH4 |          |          |               
PA4 , // |MicroSDCard_CS                               |    |     |     |     |      |      |      |*IN4 |                    |          |          |               
PA5 , // |                                             |    |*SCK |     |     |      |      |      |*IN5 |                    |          |          |               
PA6 , // |IDD_Measurement                              |    |*MISO|     |     |      |      |      |*IN6 |*TIM3_CH1           |          |          |               
PA7 , // |                                             |    |*MOSI|     |     |      |      |      |*IN7 |+TIM1_CH1N *TIM3_CH2|          |          |               
PA8 , // |MCO [DP83848_X1]                             |    |     |     |     |      |      |      |     |*TIM1_CH1           |          |          |               
PA9 , // |USB_VBUS                                     |    |     |     |     |*TX   |      |      |     |*TIM1_CH2           |          |          |               
PA10, // |USB_ID                                       |    |     |     |     |*RX   |      |      |     |*TIM1_CH3           |          |          |               
PA11, // |USB_DM                                       |    |     |     |     |      |      |      |     |*TIM1_CH4           |*OTG_FS_DM|          |               
PA12, // |USB_DP                                       |    |     |     |     |      |      |      |     |                    |*OTG_FS_DP|          |               
PA13, // |TMS/SWDIO                                    |    |     |     |     |      |      |      |     |                    |          |          |*JTMS-SWDIO    
PA14, // |TCK/SWCLK                                    |    |     |     |     |      |      |      |     |                    |          |          |*JTCK-SWCLK    
PA15, // |TDI                                          |    |     |     |     |      |      |      |     |+TIM2_CH1           |          |          |*JTDI          
PB0 , // |                                             |    |     |     |     |      |      |      |*IN8 |*TIM3_CH3 +TIM1_CH2N|          |          |               
PB1 , // |                                             |    |     |     |     |      |      |      |*IN9 |*TIM3_CH4 +TIM1_CH3N|          |          |               
PB2 , // |LCD_CS                                       |    |     |     |     |      |      |      |     |                    |          |          |               
PB3 , // |TDO                                          |    |+SCK |     |*SCK |      |      |      |     |+TIM2_CH2           |          |          |*TRACESWO *JTDO
PB4 , // |                                             |    |+MISO|     |*MISO|      |      |      |     |+TIM3_CH1           |          |          |*NJTRST        
PB5 , // |                                             |    |+MOSI|     |*MOSI|      |      |      |     |+TIM3_CH2           |          |          |               
PB6 , // |I2C1_SCK [STMPE811_SCLK]                     |*SCL|     |     |     |+TX   |      |      |     |*TIM4_CH1           |          |          |               
PB7 , // |I2C1_SDA [STMPE811_SDA]                      |*SDA|     |     |     |+RX   |      |      |     |*TIM4_CH2           |          |          |               
PB8 , // |MII_TXD3 [DP83848_TXD_3]                     |+SCL|     |     |     |      |      |      |     |*TIM4_CH3           |          |          |               
PB9 , // |User_Button [B3 Blue Button]                 |+SDA|     |     |     |      |      |      |     |*TIM4_CH4           |          |          |               
PB10, // |                                             |    |     |     |     |      |      |*TX   |     |+TIM2_CH3           |          |          |               
PB11, // |MII_TX_EN [DP83848_TX_EN]                    |    |     |     |     |      |      |*RX   |     |+TIM2_CH4           |          |          |               
PB12, // |MII_TXD0/I2S_CMD [DP83848_TXD_0/CS43L22_LRCK]|    |     |     |     |      |      |      |     |                    |          |          |               
PB13, // |MII_TXD1/I2S_CK [DP83848_TXD_1/CS43L22_SCLK] |    |     |*SCK |     |      |      |      |     |*TIM1_CH1N          |          |          |               
PB14, // |IO_Expander_INT                              |    |     |*MISO|     |      |      |      |     |*TIM1_CH2N          |          |          |               
PB15, // |I2S_DIN [CS43L22_SDIN]                       |    |     |*MOSI|     |      |      |      |     |*TIM1_CH3N          |          |          |               
PC0 , // |                                             |    |     |     |     |      |      |      |*IN10|                    |          |          |               
PC1 , // |MII_MDC [DP83848_MDC]                        |    |     |     |     |      |      |      |*IN11|                    |          |          |               
PC2 , // |MII_TXD2 [DP83848_TXD_2]                     |    |     |     |     |      |      |      |*IN12|                    |          |          |               
PC3 , // |MII_TX_CLK [DP83848_TX_CLK]                  |    |     |     |     |      |      |      |*IN13|                    |          |          |               
PC4 , // |Potentiometer [RV1]                          |    |     |     |     |      |      |      |*IN14|                    |          |          |               
PC5 , // |VBAT_Voltage_OUT                             |    |     |     |     |      |      |      |*IN15|                    |          |          |               
PC6 , // |I2S_MCK [CS43L22_MCLK]                       |    |     |     |     |      |      |      |     |+TIM3_CH1           |          |          |               
PC7 , // |                                             |    |     |     |     |      |      |      |     |+TIM3_CH2           |          |          |               
PC8 , // |                                             |    |     |     |     |      |      |      |     |+TIM3_CH3           |          |          |               
PC9 , // |USB_PowerSwitchOn [STMPS2141_EN]             |    |     |     |     |      |      |      |     |+TIM3_CH4           |          |          |               
PC10, // |SPI3_SCK [LCD_SCL]                           |    |     |     |+SCK |      |      |+TX   |     |                    |          |          |               
PC11, // |SPI3_MISO [LCD_SDO]                          |    |     |     |+MISO|      |      |+RX   |     |                    |          |          |               
PC12, // |SPI3_MOSI [LCD_SDI]                          |    |     |     |+MOSI|      |      |      |     |                    |          |          |               
PC13, // |                                             |    |     |     |     |      |      |      |     |                    |          |          |               
PC14, // |PC14-OSC32_IN                                |    |     |     |     |      |      |      |     |                    |          |*OSC32_IN |               
PC15, // |PC15-OSC32_OUT                               |    |     |     |     |      |      |      |     |                    |          |*OSC32_OUT|               
PD0 , // |CAN1_RX [SN65HVD230_R]                       |    |     |     |     |      |      |      |     |                    |          |          |               
PD1 , // |CAN1_TX [SN65HVD230_D]                       |    |     |     |     |      |      |      |     |                    |          |          |               
PD2 , // |                                             |    |     |     |     |      |      |      |     |                    |          |          |               
PD3 , // |LED3 [LD3 Red Led]                           |    |     |     |     |      |      |      |     |                    |          |          |               
PD4 , // |LED4 [LD4 Blue Led]                          |    |     |     |     |      |      |      |     |                    |          |          |               
PD5 , // |USART2_TX [ST3241E_T2IN]                     |    |     |     |     |      |+TX   |      |     |                    |          |          |               
PD6 , // |USART2_RX [ST3241EB_R3OUT]                   |    |     |     |     |      |+RX   |      |     |                    |          |          |               
PD7 , // |LED1 [LD1 Green Led]                         |    |     |     |     |      |      |      |     |                    |          |          |               
PD8 , // |MII_RX_DV [DP83848_RX_DV]                    |    |     |     |     |      |      |+TX   |     |                    |          |          |               
PD9 , // |MII_RXD0 [DP83848_RXD_0]                     |    |     |     |     |      |      |+RX   |     |                    |          |          |               
PD10, // |MII_RXD1 [DP83848_RXD_1]                     |    |     |     |     |      |      |      |     |                    |          |          |               
PD11, // |MII_RXD2 [DP83848_RXD_2]                     |    |     |     |     |      |      |      |     |                    |          |          |               
PD12, // |MII_RXD3 [DP83848_RXD_3]                     |    |     |     |     |      |      |      |     |+TIM4_CH1           |          |          |               
PD13, // |LED2 [LD2 Orange Led]                        |    |     |     |     |      |      |      |     |+TIM4_CH2           |          |          |               
PD14, // |                                             |    |     |     |     |      |      |      |     |+TIM4_CH3           |          |          |               
PD15, // |                                             |    |     |     |     |      |      |      |     |+TIM4_CH4           |          |          |               
PE0 , // |MicroSDCard_Detection                        |    |     |     |     |      |      |      |     |                    |          |          |               
PE1 , // |USB_OverCurrent [STMPS2141_FAULT]            |    |     |     |     |      |      |      |     |                    |          |          |               
PE2 , // |TRACE_CK                                     |    |     |     |     |      |      |      |     |                    |          |          |*TRACECLK      
PE3 , // |TRACE_D0                                     |    |     |     |     |      |      |      |     |                    |          |          |*TRACED0       
PE4 , // |TRACE_D1                                     |    |     |     |     |      |      |      |     |                    |          |          |*TRACED1       
PE5 , // |TRACE_D2                                     |    |     |     |     |      |      |      |     |                    |          |          |*TRACED2       
PE6 , // |TRACE_D3                                     |    |     |     |     |      |      |      |     |                    |          |          |*TRACED3       
PE7 , // |                                             |    |     |     |     |      |      |      |     |                    |          |          |               
PE8 , // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH1N          |          |          |               
PE9 , // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH1           |          |          |               
PE10, // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH2N          |          |          |               
PE11, // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH2           |          |          |               
PE12, // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH3N          |          |          |               
PE13, // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH3           |          |          |               
PE14, // |                                             |    |     |     |     |      |      |      |     |+TIM1_CH4           |          |          |               
PE15, // |                                             |    |     |     |     |      |      |      |     |                    |          |          |               
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
