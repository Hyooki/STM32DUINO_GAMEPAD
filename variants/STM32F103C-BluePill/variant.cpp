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
