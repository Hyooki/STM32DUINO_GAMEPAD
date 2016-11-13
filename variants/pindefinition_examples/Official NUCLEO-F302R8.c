
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL         |I2C1|I2C2|I2C3|SPI2 |SPI3 |USART1|USART2|USART3|ADC1 |TIM (PWM)                        |USB|RCC       |SYS           
PA0 , // |                    |    |    |    |     |     |      |      |      |*IN1 |*TIM2_CH1                        |   |          |              
PA1 , // |                    |    |    |    |     |     |      |      |      |*IN2 |*TIM15_CH1N *TIM2_CH2            |   |          |              
PA2 , // |USART_TX            |    |    |    |     |     |      |*TX   |      |*IN3 |*TIM2_CH3 *TIM15_CH1             |   |          |              
PA3 , // |USART_RX            |    |    |    |     |     |      |*RX   |      |*IN4 |*TIM2_CH4 *TIM15_CH2             |   |          |              
PA4 , // |                    |    |    |    |     |     |      |      |      |*IN5 |                                 |   |          |              
PA5 , // |                    |    |    |    |     |     |      |      |      |     |+TIM2_CH1                        |   |          |              
PA6 , // |                    |    |    |    |     |     |      |      |      |*IN10|*TIM16_CH1                       |   |          |              
PA7 , // |                    |    |    |    |     |     |      |      |      |*IN15|+TIM1_CH1N *TIM17_CH1            |   |          |              
PA8 , // |                    |    |    |*SCL|     |     |      |      |      |     |+TIM1_CH1                        |   |          |              
PA9 , // |                    |    |+SCL|    |     |     |+TX   |      |      |     |+TIM2_CH3 +TIM1_CH2              |   |          |              
PA10, // |                    |    |+SDA|    |+MISO|     |+RX   |      |      |     |+TIM2_CH4 +TIM1_CH3              |   |          |              
PA11, // |                    |    |    |    |+MOSI|     |      |      |      |     |+TIM1_CH1N +TIM1_CH4             |*DM|          |              
PA12, // |                    |    |    |    |     |     |      |      |      |     |+TIM1_CH2N +TIM16_CH1            |*DP|          |              
PA13, // |TMS                 |    |    |    |     |     |      |      |      |     |*TIM16_CH1N                      |   |          |*JTMS-SWDIO   
PA14, // |TCK                 |*SDA|    |    |     |     |      |+TX   |      |     |                                 |   |          |*JTCK-SWCLK   
PA15, // |                    |*SCL|    |    |     |     |      |+RX   |      |     |+TIM2_CH1                        |   |          |*JTDI         
PB0 , // |                    |    |    |    |     |     |      |      |      |*IN11|*TIM1_CH2N                       |   |          |              
PB1 , // |                    |    |    |    |     |     |      |      |      |*IN12|+TIM1_CH3N                       |   |          |              
PB2 , // |                    |    |    |    |     |     |      |      |      |     |                                 |   |          |              
PB3 , // |SWO                 |    |    |    |     |+SCK |      |+TX   |      |     |+TIM2_CH2                        |   |          |*JTDO-TRACESWO
PB4 , // |                    |    |    |    |     |+MISO|      |+RX   |      |     |+TIM16_CH1                       |   |          |*NJTRST       
PB5 , // |                    |    |    |+SDA|     |+MOSI|      |      |      |     |+TIM17_CH1                       |   |          |              
PB6 , // |                    |+SCL|    |    |     |     |+TX   |      |      |     |+TIM16_CH1N                      |   |          |              
PB7 , // |                    |+SDA|    |    |     |     |+RX   |      |      |     |*TIM17_CH1N                      |   |          |              
PB8 , // |                    |+SCL|    |    |     |     |      |      |+RX   |     |+TIM16_CH1                       |   |          |              
PB9 , // |                    |+SDA|    |    |     |     |      |      |+TX   |     |+TIM17_CH1                       |   |          |              
PB10, // |                    |    |    |    |     |     |      |      |*TX   |     |+TIM2_CH3                        |   |          |              
PB11, // |                    |    |    |    |     |     |      |      |*RX   |*IN14|+TIM2_CH4                        |   |          |              
PB12, // |                    |    |    |    |     |     |      |      |      |     |                                 |   |          |              
PB13, // |LD2 [Green Led]     |    |    |    |+SCK |     |      |      |      |*IN13|+TIM1_CH1N                       |   |          |              
PB14, // |                    |    |    |    |*MISO|     |      |      |      |     |+TIM1_CH2N +TIM15_CH1            |   |          |              
PB15, // |                    |    |    |    |*MOSI|     |      |      |      |     |+TIM1_CH3N +TIM15_CH1N +TIM15_CH2|   |          |              
PC0 , // |                    |    |    |    |     |     |      |      |      |*IN6 |*TIM1_CH1                        |   |          |              
PC1 , // |                    |    |    |    |     |     |      |      |      |*IN7 |*TIM1_CH2                        |   |          |              
PC2 , // |                    |    |    |    |     |     |      |      |      |*IN8 |*TIM1_CH3                        |   |          |              
PC3 , // |                    |    |    |    |     |     |      |      |      |*IN9 |*TIM1_CH4                        |   |          |              
PC4 , // |                    |    |    |    |     |     |*TX   |      |      |     |                                 |   |          |              
PC5 , // |                    |    |    |    |     |     |*RX   |      |      |     |                                 |   |          |              
PC6 , // |                    |    |    |    |     |     |      |      |      |     |                                 |   |          |              
PC7 , // |                    |    |    |    |     |     |      |      |      |     |                                 |   |          |              
PC8 , // |                    |    |    |    |     |     |      |      |      |     |                                 |   |          |              
PC9 , // |                    |    |    |*SDA|     |     |      |      |      |     |                                 |   |          |              
PC10, // |                    |    |    |    |     |*SCK |      |      |+TX   |     |                                 |   |          |              
PC11, // |                    |    |    |    |     |*MISO|      |      |+RX   |     |                                 |   |          |              
PC12, // |                    |    |    |    |     |*MOSI|      |      |      |     |                                 |   |          |              
PC13, // |B1 [Blue PushButton]|    |    |    |     |     |      |      |      |     |*TIM1_CH1N                       |   |          |              
PC14, // |                    |    |    |    |     |     |      |      |      |     |                                 |   |*OSC32_IN |              
PC15, // |                    |    |    |    |     |     |      |      |      |     |                                 |   |*OSC32_OUT|              
PD2 , // |                    |    |    |    |     |     |      |      |      |     |                                 |   |          |              
PF0 , // |                    |    |*SDA|    |     |     |      |      |      |     |*TIM1_CH3N                       |   |*OSC_IN   |              
PF1 , // |                    |    |*SCL|    |*SCK |     |      |      |      |     |                                 |   |*OSC_OUT  |              
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
  { PD2 , GPIO_PIN_2 , GPIOD, GPIO_PIN_IO, false},
  { PF0 , GPIO_PIN_0 , GPIOF, GPIO_PIN_IO, false},
  { PF1 , GPIO_PIN_1 , GPIOF, GPIO_PIN_IO, false},
};



spi_init_info_t spi_init_info[] = { 
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
    .sck_pin = GPIO_PIN_1, 
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
    .rx_port = GPIOB, .rx_pin = GPIO_PIN_11,
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
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_11, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_12, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_13,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_13, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_11,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_14, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_15, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
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
    .port = GPIOA,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_5, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
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
    { I2C2  , SDA  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOA, GPIO_PIN_10 , GPIO_AF4_I2C2                      },
    { I2C3  , SCL  , GPIOA, GPIO_PIN_8  , GPIO_AF3_I2C3                      },
    { I2C3  , SDA  , GPIOB, GPIO_PIN_5  , GPIO_AF8_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_9  , GPIO_AF3_I2C3                      },
    { SPI2  , MISO , GPIOA, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOA, GPIO_PIN_11 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOF, GPIO_PIN_1  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2                      },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { TIM15 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM15                     },
    { TIM15 , CH1N , GPIOA, GPIO_PIN_1  , GPIO_AF9_TIM15                     },
    { TIM15 , CH1N , GPIOB, GPIO_PIN_15 , GPIO_AF2_TIM15                     },
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
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF6_TIM1                      },
    { TIM1  , CH1  , GPIOC, GPIO_PIN_0  , GPIO_AF2_TIM1                      },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF6_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_11 , GPIO_AF6_TIM1                      },
    { TIM1  , CH1N , GPIOC, GPIO_PIN_13 , GPIO_AF4_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF6_TIM1                      },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF6_TIM1                      },
    { TIM1  , CH2  , GPIOC, GPIO_PIN_1  , GPIO_AF2_TIM1                      },
    { TIM1  , CH2N , GPIOA, GPIO_PIN_12 , GPIO_AF6_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF6_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF6_TIM1                      },
    { TIM1  , CH3  , GPIOC, GPIO_PIN_2  , GPIO_AF2_TIM1                      },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF6_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF4_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF6_TIM1                      },
    { TIM1  , CH3N , GPIOF, GPIO_PIN_0  , GPIO_AF6_TIM1                      },
    { TIM1  , CH4  , GPIOC, GPIO_PIN_3  , GPIO_AF2_TIM1                      },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , GPIO_AF11_TIM1                     },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_9  , GPIO_AF10_TIM2                     },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_10 , GPIO_AF10_TIM2                     },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOC, GPIO_PIN_5  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOC, GPIO_PIN_4  , GPIO_AF7_USART1                    },
    { USART2, RX   , GPIOB, GPIO_PIN_4  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_15 , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOB, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_14 , GPIO_AF7_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOB, GPIO_PIN_8  , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_9  , GPIO_AF7_USART3                    },
};
