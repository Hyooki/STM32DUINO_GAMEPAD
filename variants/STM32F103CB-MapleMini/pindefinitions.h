#ifndef PINDEFINITIONS_H
#define PINDEFINITIONS_H

enum {
//*=default , +=alternate
//PIN    |I2C1|I2C2|SPI1 |SPI2 |USART1|USART2|USART3|ADC1|TIM (PWM)           |USB|RCC       |SYS           
PB11, // |    |*SDA|     |     |      |      |*RX   |    |+TIM2_CH4           |   |          |              
PB10, // |    |*SCL|     |     |      |      |*TX   |    |+TIM2_CH3           |   |          |              
PB2 , // |    |    |     |     |      |      |      |    |                    |   |          |              
PB0 , // |    |    |     |     |      |      |      |*IN8|*TIM3_CH3 +TIM1_CH2N|   |          |              
PA7 , // |    |    |*MOSI|     |      |      |      |*IN7|+TIM1_CH1N *TIM3_CH2|   |          |              
PA6 , // |    |    |*MISO|     |      |      |      |*IN6|*TIM3_CH1           |   |          |              
PA5 , // |    |    |*SCK |     |      |      |      |*IN5|                    |   |          |              
PA4 , // |    |    |     |     |      |      |      |*IN4|                    |   |          |              
PA3 , // |    |    |     |     |      |*RX   |      |*IN3|*TIM2_CH4           |   |          |              
PA2 , // |    |    |     |     |      |*TX   |      |*IN2|*TIM2_CH3           |   |          |              
PA1 , // |    |    |     |     |      |      |      |*IN1|*TIM2_CH2           |   |          |              
PA0 , // |    |    |     |     |      |      |      |*IN0|*TIM2_CH1           |   |          |              
PC15, // |    |    |     |     |      |      |      |    |                    |   |*OSC32_OUT|              
PC14, // |    |    |     |     |      |      |      |    |                    |   |*OSC32_IN |              
PC13, // |    |    |     |     |      |      |      |    |                    |   |          |              
PB7 , // |*SDA|    |     |     |+RX   |      |      |    |*TIM4_CH2           |   |          |              
PB6 , // |*SCL|    |     |     |+TX   |      |      |    |*TIM4_CH1           |   |          |              
PB5 , // |    |    |+MOSI|     |      |      |      |    |+TIM3_CH2           |   |          |              
PB4 , // |    |    |+MISO|     |      |      |      |    |+TIM3_CH1           |   |          |*NJTRST       
PB3 , // |    |    |+SCK |     |      |      |      |    |+TIM2_CH2           |   |          |*JTDO-TRACESWO
PA15, // |    |    |     |     |      |      |      |    |+TIM2_CH1           |   |          |*JTDI         
PA14, // |    |    |     |     |      |      |      |    |                    |   |          |*JTCK-SWCLK   
PA13, // |    |    |     |     |      |      |      |    |                    |   |          |*JTMS-SWDIO   
PA12, // |    |    |     |     |      |      |      |    |                    |*DP|          |              
PA11, // |    |    |     |     |      |      |      |    |*TIM1_CH4           |*DM|          |              
PA10, // |    |    |     |     |*RX   |      |      |    |*TIM1_CH3           |   |          |              
PA9 , // |    |    |     |     |*TX   |      |      |    |*TIM1_CH2           |   |          |              
PA8 , // |    |    |     |     |      |      |      |    |*TIM1_CH1           |   |          |              
PB15, // |    |    |     |*MOSI|      |      |      |    |*TIM1_CH3N          |   |          |              
PB14, // |    |    |     |*MISO|      |      |      |    |*TIM1_CH2N          |   |          |              
PB13, // |    |    |     |*SCK |      |      |      |    |*TIM1_CH1N          |   |          |              
PB12, // |    |    |     |     |      |      |      |    |                    |   |          |              
PB8 , // |+SCL|    |     |     |      |      |      |    |*TIM4_CH3           |   |          |              
PB1 , // |    |    |     |     |      |      |      |*IN9|*TIM3_CH4 +TIM1_CH3N|   |          |              
PB9 , // |+SDA|    |     |     |      |      |      |    |*TIM4_CH4           |   |          |              
PD0 , // |    |    |     |     |      |      |      |    |                    |   |*OSC_IN   |              
PD1 , // |    |    |     |     |      |      |      |    |                    |   |*OSC_OUT  |              
NB_DIGITAL_PINS,
};

#endif
