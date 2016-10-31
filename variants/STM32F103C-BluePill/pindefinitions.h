#ifndef PINDEFINITIONS_H
#define PINDEFINITIONS_H

enum {
//*=default , +=alternate
//PIN    |I2C1|I2C2|SPI1 |SPI2 |USART1|USART2|USART3|ADC1|TIM (PWM)           |USB|RCC       |SYS           
PA0 , // |    |    |     |     |      |      |      |*IN0|*TIM2_CH1           |   |          |              
PA1 , // |    |    |     |     |      |      |      |*IN1|*TIM2_CH2           |   |          |              
PA2 , // |    |    |     |     |      |*TX   |      |*IN2|*TIM2_CH3           |   |          |              
PA3 , // |    |    |     |     |      |*RX   |      |*IN3|*TIM2_CH4           |   |          |              
PA4 , // |    |    |     |     |      |      |      |*IN4|                    |   |          |              
PA5 , // |    |    |*SCK |     |      |      |      |*IN5|                    |   |          |              
PA6 , // |    |    |*MISO|     |      |      |      |*IN6|*TIM3_CH1           |   |          |              
PA7 , // |    |    |*MOSI|     |      |      |      |*IN7|+TIM1_CH1N *TIM3_CH2|   |          |              
PA8 , // |    |    |     |     |      |      |      |    |*TIM1_CH1           |   |          |              
PA9 , // |    |    |     |     |*TX   |      |      |    |*TIM1_CH2           |   |          |              
PA10, // |    |    |     |     |*RX   |      |      |    |*TIM1_CH3           |   |          |              
PA11, // |    |    |     |     |      |      |      |    |*TIM1_CH4           |*DM|          |              
PA12, // |    |    |     |     |      |      |      |    |                    |*DP|          |              
PA13, // |    |    |     |     |      |      |      |    |                    |   |          |*JTMS-SWDIO   
PA14, // |    |    |     |     |      |      |      |    |                    |   |          |*JTCK-SWCLK   
PA15, // |    |    |     |     |      |      |      |    |+TIM2_CH1           |   |          |*JTDI         
PB0 , // |    |    |     |     |      |      |      |*IN8|*TIM3_CH3 +TIM1_CH2N|   |          |              
PB1 , // |    |    |     |     |      |      |      |*IN9|*TIM3_CH4 +TIM1_CH3N|   |          |              
PB2 , // |    |    |     |     |      |      |      |    |                    |   |          |              
PB3 , // |    |    |+SCK |     |      |      |      |    |+TIM2_CH2           |   |          |*JTDO-TRACESWO
PB4 , // |    |    |+MISO|     |      |      |      |    |+TIM3_CH1           |   |          |*NJTRST       
PB5 , // |    |    |+MOSI|     |      |      |      |    |+TIM3_CH2           |   |          |              
PB6 , // |*SCL|    |     |     |+TX   |      |      |    |*TIM4_CH1           |   |          |              
PB7 , // |*SDA|    |     |     |+RX   |      |      |    |*TIM4_CH2           |   |          |              
PB8 , // |+SCL|    |     |     |      |      |      |    |*TIM4_CH3           |   |          |              
PB9 , // |+SDA|    |     |     |      |      |      |    |*TIM4_CH4           |   |          |              
PB10, // |    |*SCL|     |     |      |      |*TX   |    |+TIM2_CH3           |   |          |              
PB11, // |    |*SDA|     |     |      |      |*RX   |    |+TIM2_CH4           |   |          |              
PB12, // |    |    |     |     |      |      |      |    |                    |   |          |              
PB13, // |    |    |     |*SCK |      |      |      |    |*TIM1_CH1N          |   |          |              
PB14, // |    |    |     |*MISO|      |      |      |    |*TIM1_CH2N          |   |          |              
PB15, // |    |    |     |*MOSI|      |      |      |    |*TIM1_CH3N          |   |          |              
PC13, // |    |    |     |     |      |      |      |    |                    |   |          |              
PC14, // |    |    |     |     |      |      |      |    |                    |   |*OSC32_IN |              
PC15, // |    |    |     |     |      |      |      |    |                    |   |*OSC32_OUT|              
PD0 , // |    |    |     |     |      |      |      |    |                    |   |*OSC_IN   |              
PD1 , // |    |    |     |     |      |      |      |    |                    |   |*OSC_OUT  |              
NB_DIGITAL_PINS,
};

#endif
