#include "stm32f1xx_hal.h"
#include "spi_com.h"

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
