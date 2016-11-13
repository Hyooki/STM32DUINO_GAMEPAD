
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL|I2C1|SPI1 |USART2|TIM (PWM)             |RCC       |SYS    
PA0 , // |           |    |     |*RX   |*TIM2_CH1 *LPTIM1_IN1 |*CK_IN    |       
PA1 , // |           |    |     |      |*TIM2_CH2 *LPTIM1_IN2 |          |       
PA2 , // |VCP_TX     |    |     |*TX   |*TIM2_CH3 *TIM21_CH1  |          |       
PA3 , // |           |    |     |+RX   |*TIM21_CH2 *TIM2_CH4  |          |       
PA4 , // |           |*SCL|     |      |+LPTIM1_IN1           |          |       
PA5 , // |           |    |*SCK |      |+TIM2_CH1 +LPTIM1_IN2 |          |       
PA6 , // |           |    |*MISO|      |                      |          |       
PA7 , // |           |    |*MOSI|      |                      |          |       
PA8 , // |           |    |     |      |+TIM2_CH1 +LPTIM1_IN1 |          |       
PA9 , // |           |+SCL|     |+TX   |+TIM21_CH2            |          |       
PA10, // |           |*SDA|     |+RX   |+TIM2_CH3 +TIM21_CH1  |          |       
PA11, // |           |    |+MISO|      |+TIM21_CH2            |          |       
PA12, // |           |    |+MOSI|      |                      |          |       
PA13, // |TMS        |+SDA|+SCK |      |                      |          |*SWDIO 
PA14, // |TCK        |    |+MISO|+TX   |                      |          |*SWCLK 
PA15, // |VCP_RX     |    |     |+RX   |+TIM2_CH1             |          |       
PB0 , // |           |    |+MISO|      |+TIM2_CH2 +TIM2_CH3   |          |       
PB1 , // |           |    |+MOSI|      |+TIM2_CH4 +LPTIM1_IN1 |          |       
PB3 , // |LD3 [Green]|    |+SCK |      |+TIM2_CH2             |          |       
PB4 , // |           |    |+MISO|      |                      |          |       
PB5 , // |           |    |+MOSI|      |+TIM21_CH1 +LPTIM1_IN1|          |       
PB6 , // |           |+SCL|     |+TX   |+TIM2_CH3             |          |       
PB7 , // |           |+SDA|     |+RX   |+TIM2_CH4 +LPTIM1_IN2 |          |*PVD_IN
PB9 , // |           |    |     |      |                      |          |       
PC14, // |           |    |     |      |                      |*OSC32_IN |       
PC15, // |           |    |     |      |                      |*OSC32_OUT|       
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
  { PB3 , GPIO_PIN_3 , GPIOB, GPIO_PIN_IO, false},
  { PB4 , GPIO_PIN_4 , GPIOB, GPIO_PIN_IO, false},
  { PB5 , GPIO_PIN_5 , GPIOB, GPIO_PIN_IO, false},
  { PB6 , GPIO_PIN_6 , GPIOB, GPIO_PIN_IO, false},
  { PB7 , GPIO_PIN_7 , GPIOB, GPIO_PIN_IO, false},
  { PB9 , GPIO_PIN_9 , GPIOB, GPIO_PIN_IO, false},
  { PC14, GPIO_PIN_14, GPIOC, GPIO_PIN_IO, false},
  { PC15, GPIO_PIN_15, GPIOC, GPIO_PIN_IO, false},
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
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF1_I2C1,
    .sda_port = GPIOA,
    .sda_pin = GPIO_PIN_10,
    .scl_alternate = GPIO_AF3_I2C1,
    .scl_port = GPIOA,
    .scl_pin = GPIO_PIN_4,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
};

uint8_t NB_I2C_INSTANCES = sizeof(g_i2c_init_info) / sizeof(g_i2c_init_info[0]);


uart_conf_t g_uart_config[] = {
  {
    //UART ID and IRQ
    .usart_typedef = USART2, .irqtype = USART2_IRQn,
    .tx_port = GPIOA, .tx_pin = GPIO_PIN_2,
    .rx_port = GPIOA, .rx_pin = GPIO_PIN_0,
    .uart_af_remap = GPIO_AF4_USART2,
    .tx_alternate  = GPIO_AF4_USART2,
    .rx_alternate  = GPIO_AF0_USART2,
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
    .port = GPIOA,
    .pin = GPIO_PIN_2,
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
    .port = GPIOA,
    .pin = GPIO_PIN_3,
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
};

uint8_t NB_ADC_INSTANCES = sizeof(g_adc_config) / sizeof(g_adc_config[0]);
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
uint8_t NB_DAC_INSTANCES = sizeof(g_dac_config) / sizeof(g_dac_config[0]);
#endif
uint8_t NB_PWM_INSTANCES = sizeof(g_pwm_config) / sizeof(g_pwm_config[0]);

remaps_t remaps {
    { I2C1  , SCL  , GPIOA, GPIO_PIN_9  , GPIO_AF1_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF1_I2C1                      },
    { I2C1  , SCL  , GPIOA, GPIO_PIN_4  , GPIO_AF3_I2C1                      },
    { I2C1  , SDA  , GPIOA, GPIO_PIN_13 , GPIO_AF3_I2C1                      },
    { I2C1  , SDA  , GPIOA, GPIO_PIN_10 , GPIO_AF1_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF1_I2C1                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_11 , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF0_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_14 , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_0  , GPIO_AF1_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_12 , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_1  , GPIO_AF1_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_13 , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF0_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF0_SPI1                      },
    { TIM21 , CH1  , GPIOB, GPIO_PIN_5  , GPIO_AF5_TIM21                     },
    { TIM21 , CH1  , GPIOA, GPIO_PIN_10 , GPIO_AF0_TIM21                     },
    { TIM21 , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF0_TIM21                     },
    { TIM21 , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF0_TIM21                     },
    { TIM21 , CH2  , GPIOA, GPIO_PIN_11 , GPIO_AF5_TIM21                     },
    { TIM21 , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF5_TIM21                     },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF5_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF5_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF5_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF5_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_6  , GPIO_AF5_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF5_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_7  , GPIO_AF5_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF5_TIM2                      },
    { USART2, RX   , GPIOA, GPIO_PIN_0  , GPIO_AF0_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF4_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF4_USART2                    },
    { USART2, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF0_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_15 , GPIO_AF4_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF4_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF4_USART2                    },
    { USART2, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF0_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_14 , GPIO_AF4_USART2                    },
};
