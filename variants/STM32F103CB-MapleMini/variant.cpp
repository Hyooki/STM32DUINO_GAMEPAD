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
