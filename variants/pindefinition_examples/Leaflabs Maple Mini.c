
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL |I2C1|I2C2|SPI1 |SPI2 |USART1|USART2|USART3|ADC1|TIM (PWM)           |USB|RCC       |SYS           
PA0 , // |            |    |    |     |     |      |      |      |*IN0|*TIM2_CH1           |   |          |              
PA1 , // |            |    |    |     |     |      |      |      |*IN1|*TIM2_CH2           |   |          |              
PA2 , // |            |    |    |     |     |      |*TX   |      |*IN2|*TIM2_CH3           |   |          |              
PA3 , // |            |    |    |     |     |      |*RX   |      |*IN3|*TIM2_CH4           |   |          |              
PA4 , // |            |    |    |     |     |      |      |      |*IN4|                    |   |          |              
PA5 , // |            |    |    |*SCK |     |      |      |      |*IN5|                    |   |          |              
PA6 , // |            |    |    |*MISO|     |      |      |      |*IN6|*TIM3_CH1           |   |          |              
PA7 , // |            |    |    |*MOSI|     |      |      |      |*IN7|+TIM1_CH1N *TIM3_CH2|   |          |              
PA8 , // |            |    |    |     |     |      |      |      |    |*TIM1_CH1           |   |          |              
PA9 , // |            |    |    |     |     |*TX   |      |      |    |*TIM1_CH2           |   |          |              
PA10, // |            |    |    |     |     |*RX   |      |      |    |*TIM1_CH3           |   |          |              
PA11, // |            |    |    |     |     |      |      |      |    |*TIM1_CH4           |*DM|          |              
PA12, // |            |    |    |     |     |      |      |      |    |                    |*DP|          |              
PA13, // |            |    |    |     |     |      |      |      |    |                    |   |          |*JTMS-SWDIO   
PA14, // |            |    |    |     |     |      |      |      |    |                    |   |          |*JTCK-SWCLK   
PA15, // |            |    |    |     |     |      |      |      |    |+TIM2_CH1           |   |          |*JTDI         
PB0 , // |            |    |    |     |     |      |      |      |*IN8|*TIM3_CH3 +TIM1_CH2N|   |          |              
PB1 , // |LED         |    |    |     |     |      |      |      |*IN9|*TIM3_CH4 +TIM1_CH3N|   |          |              
PB2 , // |            |    |    |     |     |      |      |      |    |                    |   |          |              
PB3 , // |            |    |    |+SCK |     |      |      |      |    |+TIM2_CH2           |   |          |*JTDO-TRACESWO
PB4 , // |            |    |    |+MISO|     |      |      |      |    |+TIM3_CH1           |   |          |*NJTRST       
PB5 , // |            |    |    |+MOSI|     |      |      |      |    |+TIM3_CH2           |   |          |              
PB6 , // |            |*SCL|    |     |     |+TX   |      |      |    |*TIM4_CH1           |   |          |              
PB7 , // |            |*SDA|    |     |     |+RX   |      |      |    |*TIM4_CH2           |   |          |              
PB8 , // |BOOT0/BUTTON|+SCL|    |     |     |      |      |      |    |*TIM4_CH3           |   |          |              
PB9 , // |USB DISC    |+SDA|    |     |     |      |      |      |    |*TIM4_CH4           |   |          |              
PB10, // |            |    |*SCL|     |     |      |      |*TX   |    |+TIM2_CH3           |   |          |              
PB11, // |            |    |*SDA|     |     |      |      |*RX   |    |+TIM2_CH4           |   |          |              
PB12, // |            |    |    |     |     |      |      |      |    |                    |   |          |              
PB13, // |            |    |    |     |*SCK |      |      |      |    |*TIM1_CH1N          |   |          |              
PB14, // |            |    |    |     |*MISO|      |      |      |    |*TIM1_CH2N          |   |          |              
PB15, // |            |    |    |     |*MOSI|      |      |      |    |*TIM1_CH3N          |   |          |              
PC13, // |            |    |    |     |     |      |      |      |    |                    |   |          |              
PC14, // |            |    |    |     |     |      |      |      |    |                    |   |*OSC32_IN |              
PC15, // |            |    |    |     |     |      |      |      |    |                    |   |*OSC32_OUT|              
PD0 , // |            |    |    |     |     |      |      |      |    |                    |   |*OSC_IN   |              
PD1 , // |            |    |    |     |     |      |      |      |    |                    |   |*OSC_OUT  |              
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
  { PC13, GPIO_PIN_13, GPIOC, GPIO_PIN_IO, false},
  { PC14, GPIO_PIN_14, GPIOC, GPIO_PIN_IO, false},
  { PC15, GPIO_PIN_15, GPIOC, GPIO_PIN_IO, false},
  { PD0 , GPIO_PIN_0 , GPIOD, GPIO_PIN_IO, false},
  { PD1 , GPIO_PIN_1 , GPIOD, GPIO_PIN_IO, false},
};


static void AF_NO_REMAP (void) { }
static void AF__HAL_AFIO_REMAP_SPI1_DISABLE(void) { __HAL_AFIO_REMAP_SPI1_DISABLE(); }
static void AF__HAL_AFIO_REMAP_SPI1_ENABLE(void) { __HAL_AFIO_REMAP_SPI1_ENABLE(); }

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
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM1_PARTIAL    },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , AF__HAL_AFIO_REMAP_TIM1_PARTIAL    },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , AF__HAL_AFIO_REMAP_TIM1_DISABLE    },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , AF__HAL_AFIO_REMAP_TIM1_PARTIAL    },
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
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , AF__HAL_AFIO_REMAP_TIM3_PARTIAL    },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , AF__HAL_AFIO_REMAP_TIM3_DISABLE    },
    { TIM4  , CH1  , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH2  , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH3  , GPIOB, GPIO_PIN_8  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { TIM4  , CH4  , GPIOB, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_TIM4_DISABLE    },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART1_DISABLE  },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , AF__HAL_AFIO_REMAP_USART1_ENABLE   },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , AF__HAL_AFIO_REMAP_USART1_DISABLE  },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , AF__HAL_AFIO_REMAP_USART1_ENABLE   },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , AF__HAL_AFIO_REMAP_USART2_DISABLE  },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , AF__HAL_AFIO_REMAP_USART2_DISABLE  },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , AF__HAL_AFIO_REMAP_USART3_DISABLE  },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , AF__HAL_AFIO_REMAP_USART3_DISABLE  },
};
