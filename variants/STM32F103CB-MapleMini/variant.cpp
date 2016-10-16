/*
  Copyright (c) 2011 Arduino.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include "variant.h"

extern const uint32_t VECT_TAB_OFFSET = VECT_TAB_OFFSET_VARIANT;

/* GPIO ID    | label
  PA0         | 11
  PA1         | 10
  PA2         |  9/USART2_TX
  PA3         |  8/USART2_RX
  PA4         |  7/SPI1_NSS
  PA5         |  6/SPI1_SCK
  PA6         |  5/SPI1_MISO
  PA7         |  4/SPI1_MOSI
  PA8         | 27
  PA9         | 26/USART1_TX
  PA10        | 25/USART1_RX
  PA11        | 24/USB_DM
  PA12        | 23/USB_DP
  PA13        | 22/SWDIO
  PA14        | 21/SWCLK
  PA15        | 20
  PB0         |  3
  PB1         | 33/LED
  PB2         |  2/BOOT1
  PB3         | 19
  PB4         | 18
  PB5         | 17
  PB6         | 16/I2C1_SCL
  PB7         | 15/I2C1_SDA
  PB8         | 32/BUTTON
  PB9         | 
  PB10        |  1/I2C2_SCL
  PB11        |  0/I2C2_SDA
  PB12        | 31/SPI2_NSS
  PB13        | 30/SPI2_SCK
  PB14        | 29/SPI2_MISO
  PB15        | 28/SPI2_MOSI
  PC13        | 14
  PC14        | 13
  PC15        | 12

*/

#ifdef __cplusplus
extern "C" {
#endif

/*
 * Pins descriptions
 */
extern const PinDescription g_APinDescription[]=

//  arduino_id  |     ulPin    |   ulPort | mode               |          configured
{
  { PA0,  GPIO_PIN_0,  GPIOA, GPIO_PIN_IO|GPIO_PIN_ADC,                     false },
  { PA1,  GPIO_PIN_1,  GPIOA, GPIO_PIN_IO|GPIO_PIN_ADC,                     false },
  { PA2,  GPIO_PIN_2,  GPIOA, GPIO_PIN_IO|GPIO_PIN_UART_TX,                 false },
  { PA3,  GPIO_PIN_3,  GPIOA, GPIO_PIN_IO|GPIO_PIN_UART_RX,                 false },
  { PA4,  GPIO_PIN_4,  GPIOA, GPIO_PIN_IO|GPIO_PIN_ADC,                     false },
  { PA5,  GPIO_PIN_5,  GPIOA, GPIO_PIN_IO|GPIO_PIN_SPI_SCK,                 false },
  { PA6,  GPIO_PIN_6,  GPIOA, GPIO_PIN_IO|GPIO_PIN_SPI_MISO,                false },
  { PA7,  GPIO_PIN_7,  GPIOA, GPIO_PIN_IO|GPIO_PIN_SPI_MOSI|GPIO_PIN_PWM,   false },
  { PA8,  GPIO_PIN_8,  GPIOA, GPIO_PIN_IO,                                  false },
  { PA9,  GPIO_PIN_9,  GPIOA, GPIO_PIN_IO,                                  false },
  { PA10, GPIO_PIN_10, GPIOA, GPIO_PIN_IO,                                  false },
  { PA11, GPIO_PIN_11, GPIOA, GPIO_PIN_IO,                                  false },
  { PA12, GPIO_PIN_12, GPIOA, GPIO_PIN_IO,                                  false },
  { PA13, GPIO_PIN_13, GPIOA, GPIO_PIN_IO,                                  false },
  { PA14, GPIO_PIN_14, GPIOA, GPIO_PIN_IO,                                  false },
  { PA15, GPIO_PIN_15, GPIOA, GPIO_PIN_IO,                                  false },
  { PB0,  GPIO_PIN_0,  GPIOB, GPIO_PIN_ADC,                                 false },
  { PB1,  GPIO_PIN_1,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { PB2,  GPIO_PIN_2,  GPIOB, GPIO_PIN_IO,                                  false },
  { PB3,  GPIO_PIN_3,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { PB4,  GPIO_PIN_4,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { PB5,  GPIO_PIN_5,  GPIOB, GPIO_PIN_IO,                                  false },
  { PB6,  GPIO_PIN_6,  GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM|GPIO_PIN_SPI_CS,     false },
  { PB7,  GPIO_PIN_7,  GPIOB, GPIO_PIN_IO,                                  false },
  { PB8,  GPIO_PIN_8,  GPIOB, GPIO_PIN_IO|GPIO_PIN_I2C_SCL,                 false },
  { PB9,  GPIO_PIN_9,  GPIOB, GPIO_PIN_IO|GPIO_PIN_I2C_SDA,                 false },
  { PB10, GPIO_PIN_10, GPIOB, GPIO_PIN_IO|GPIO_PIN_PWM,                     false },
  { PB11, GPIO_PIN_11, GPIOB, GPIO_PIN_IO,                                  false },
  { PB12, GPIO_PIN_12, GPIOB, GPIO_PIN_IO,                                  false },
  { PB13, GPIO_PIN_13, GPIOB, GPIO_PIN_IO,                                  false },
  { PB14, GPIO_PIN_14, GPIOB, GPIO_PIN_IO,                                  false },
  { PB15, GPIO_PIN_15, GPIOB, GPIO_PIN_IO,                                  false },
  { PC13, GPIO_PIN_13, GPIOC, GPIO_PIN_IO,                                  false },
  { PC14, GPIO_PIN_14, GPIOC, GPIO_PIN_IO,                                  false },
  { PC15, GPIO_PIN_15, GPIOC, GPIO_PIN_IO,                                  false }
};



#ifdef __cplusplus
}
#endif

/*
 * UART objects
 */

UARTClass Serial(USART2_E);    //available on PA2/PA3
UARTClass Serial1(USART1_E);   //available on PA9/PA10
USARTClass Serial2(USART2_E);  //available on PA2/PA3

void serialEvent() __attribute__((weak));
void serialEvent() { }

void serialEventRun(void)
{
  if (Serial.available()) serialEvent();
}

// ----------------------------------------------------------------------------

#ifdef __cplusplus
extern "C" {
#endif

void __libc_init_array(void);


void init( void )
{
  hw_config_init();
}

#ifdef __cplusplus
}
#endif
