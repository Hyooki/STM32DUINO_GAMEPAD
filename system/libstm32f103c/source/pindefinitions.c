#include "stm32f1xx_hal.h"
#include "spi_com.h"
#include "twi.h"
#include "uart.h"
#include "analog.h"

static void SPI1_Alternate(void)                { __HAL_AFIO_REMAP_SPI1_DISABLE(); } 

spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .spi_alternate = SPI1_Alternate, 
    .mosi_port = GPIOA, 
    .mosi_pin =  GPIO_PIN_7, 
    .miso_port = GPIOA, 
    .miso_pin = GPIO_PIN_6, 
    .sck_port = GPIOA, 
    .sck_pin = GPIO_PIN_5, 
  } 
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

static void i2c1_alternate(void)       {  __HAL_RCC_AFIO_CLK_ENABLE();
                                          __HAL_AFIO_REMAP_I2C1_ENABLE(); }

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .i2c_alternate = i2c1_alternate,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_9,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_8,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  }
};

uint8_t NB_I2C_INSTANCES = sizeof(g_i2c_init_info) / sizeof(g_i2c_init_info[0]);

static void USART1_AF_Remap(void)       {__HAL_RCC_AFIO_CLK_ENABLE(); __HAL_AFIO_REMAP_USART1_DISABLE();}
static void USART2_AF_Remap(void)       {__HAL_RCC_AFIO_CLK_ENABLE(); __HAL_AFIO_REMAP_USART2_DISABLE();}

uart_conf_t g_uart_config[] = {
  //USART1 (PA9/PA10)
  {
    //UART ID and IRQ
    .usart_typedef = USART1, .irqtype = USART1_IRQn,
    //tx pin configuration
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_9,
    //rx pin configuration
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_10,
    .uart_af_remap = USART1_AF_Remap,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  //USART2 (PA2/PA3)
  {
    .usart_typedef = USART2, .irqtype = USART2_IRQn,
    //tx pin configuration
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_2,
    //rx pin configuration
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_3,
    .uart_af_remap = USART2_AF_Remap,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  }
};

uint8_t NB_UART_MANAGED = sizeof(g_uart_config) / sizeof(g_uart_config[0]);

UART_HandleTypeDef g_UartHandle[sizeof(g_uart_config) / sizeof(g_uart_config[0])];

static void TIM1_AF_PartialRemap(void)  { __HAL_RCC_AFIO_CLK_ENABLE();
                                          __HAL_AFIO_REMAP_TIM1_PARTIAL();}  // CH1N/A7
static void TIM2_AF_FullRemap(void)     { __HAL_RCC_AFIO_CLK_ENABLE();
                                          __HAL_AFIO_REMAP_TIM2_ENABLE();}   // CH2/B3 CH3/B10
static void TIM3_AF_FullRemap(void)     { __HAL_RCC_AFIO_CLK_ENABLE();
                                          __HAL_AFIO_REMAP_TIM3_ENABLE();}   // CH2/C7
static void TIM3_AF_PartialRemap(void)  { __HAL_RCC_AFIO_CLK_ENABLE();
                                          __HAL_AFIO_REMAP_TIM3_PARTIAL();}  // CH1/B4
static void TIM4_AF_NoRemap(void)       { __HAL_RCC_AFIO_CLK_ENABLE();
                                          __HAL_AFIO_REMAP_TIM4_DISABLE();}  // CH1/B6

#define SAMPLINGTIME  ADC_SAMPLETIME_1CYCLE_5  /*!< ADC conversions sampling time. */

//Give details about the analog pins.
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
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_8, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME },
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_11, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME },
  },
};

#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
dac_config_str g_dac_config[] = {
    
};
#endif

pwm_config_str g_pwm_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .alFunction = TIM1_AF_PartialRemap,
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
    .port = GPIOB,
    .pin = GPIO_PIN_3,
    .alFunction = TIM2_AF_FullRemap,
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
    .port = GPIOB,
    .pin = GPIO_PIN_4,
    .alFunction = TIM3_AF_PartialRemap,
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
    .port = GPIOB,
    .pin = GPIO_PIN_6,
    .alFunction = TIM4_AF_NoRemap,
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
    .pin = GPIO_PIN_10,
    .alFunction = TIM2_AF_FullRemap,
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
     }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_7,
    .alFunction = TIM3_AF_FullRemap,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);
