#include "stm32f1xx_hal.h"
#include "spi_com.h"
#include "twi.h"
#include "uart.h"

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
