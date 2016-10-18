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
  PA0         | A0
  PA1         | A1
  PA2         | D1/TX
  PA3         | D0/RX
  PA4         | A2
  PA5         | D13/SCK
  PA6         | D12/MISO
  PA7         | D11/PWM/MOSI
  PA8         | D7
  PA9         | D8
  PA10        | D2
  PA11        |
  PA12        |
  PA13        |
  PA14        |
  PA15        |
  PB0         | A3
  PB1         |
  PB2         |
  PB3         | D3/PWM
  PB4         | D5/PWM
  PB5         | D4
  PB6         | D10/PWM/CS
  PB7         |
  PB8         | D15/SCL
  PB9         | D14/SDA
  PB10        | D6/PWM
  PB11        |
  PB12        |
  PB13        |
  PB14        |
  PB15        |
  PC13        |
  PC14        |
  PC15        |

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
