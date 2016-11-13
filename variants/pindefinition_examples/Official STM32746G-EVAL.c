
enum {
//*=default , +=alternate
//PIN    |BOARD LABEL                                |I2C1|I2C2|I2C3|I2C4|SPI1 |SPI2 |SPI3 |SPI4 |SPI5 |SPI6 |USART1|USART2|USART3|USART6|ADC1 |TIM (PWM)                                 |USB       |RCC       |SYS        
PA0 , // |SAI2_SDB [WM8994ECS/R_DACDATA1]            |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN0 |+TIM2_CH1 *TIM5_CH1                       |          |          |           
PA1 , // |MII_RX_CLK [DP83848CVV_RX_CLK]             |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN1 |+TIM2_CH2 *TIM5_CH2                       |          |          |           
PA2 , // |SAI2_SCKB [WM8994ECS/R_BCLK1]              |    |    |    |    |     |     |     |     |     |     |      |+TX   |      |      |*IN2 |+TIM9_CH1 *TIM2_CH3 +TIM5_CH3             |          |          |           
PA3 , // |ULPI_D0 [USB3300-EZK_D0]                   |    |    |    |    |     |     |     |     |     |     |      |+RX   |      |      |*IN3 |*TIM2_CH4 +TIM5_CH4 +TIM9_CH2             |          |          |           
PA4 , // |                                           |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN4 |                                          |          |          |           
PA5 , // |ULPI_CK [USB3300-EZK_CLKOUT]               |    |    |    |    |+SCK |     |     |     |     |     |      |      |      |      |*IN5 |+TIM8_CH1N +TIM2_CH1                      |          |          |           
PA6 , // |                                           |    |    |    |    |+MISO|     |     |     |     |     |      |      |      |      |*IN6 |+TIM3_CH1 +TIM13_CH1                      |          |          |           
PA7 , // |MII_RX_DV [DP83848CVV_RX_CLK]              |    |    |    |    |+MOSI|     |     |     |     |     |      |      |      |      |*IN7 |+TIM8_CH1N +TIM14_CH1 +TIM3_CH2 +TIM1_CH1N|          |          |           
PA8 , // |MII_MCO [DP83848CVV_X1]                    |    |    |*SCL|    |     |     |     |     |     |     |      |      |      |      |     |*TIM1_CH1                                 |          |          |           
PA9 , // |RS232/IrDA_TX [ST3241EBPR_T2IN]            |    |    |    |    |     |+SCK |     |     |     |     |+TX   |      |      |      |     |*TIM1_CH2                                 |          |          |           
PA10, // |RS232/IrDA_RX [ST3241EBPR_R3OUT]           |    |    |    |    |     |     |     |     |     |     |+RX   |      |      |      |     |*TIM1_CH3                                 |          |          |           
PA11, // |USB_FS1_DM                                 |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM1_CH4                                 |*OTG_FS_DM|          |           
PA12, // |USB_FS1_DP                                 |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |*OTG_FS_DP|          |           
PA13, // |TMS/SWDIO                                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |*JTMS-SWDIO
PA14, // |TCK/SWCLK                                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |*JTCK-SWCLK
PA15, // |TDI                                        |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM2_CH1                                 |          |          |*JTDI      
PB0 , // |ULPI_D1 [USB3300-EZK_D1]                   |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN8 |+TIM8_CH2N +TIM3_CH3 *TIM1_CH2N           |          |          |           
PB1 , // |ULPI_D2 [USB3300-EZK_D2]                   |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN9 |+TIM3_CH4 *TIM1_CH3N +TIM8_CH3N           |          |          |           
PB2 , // |QSPI_CLK [MT25QL512ABA8ESF_CLK]            |    |    |    |    |     |     |+MOSI|     |     |     |      |      |      |      |     |                                          |          |          |           
PB3 , // |TDO/SWO                                    |    |    |    |    |*SCK |     |*SCK |     |     |     |      |      |      |      |     |*TIM2_CH2                                 |          |          |*JTDO-SWO  
PB4 , // |TRST                                       |    |    |    |    |*MISO|     |*MISO|     |     |     |      |      |      |      |     |*TIM3_CH1                                 |          |          |*JTRST     
PB5 , // |ULPI_D7 [USB3300-EZK_D7]                   |    |    |    |    |*MOSI|     |*MOSI|     |     |     |      |      |      |      |     |*TIM3_CH2                                 |          |          |           
PB6 , // |QSPI_BK1_NCS [MT25QL512ABA8ESF-0SIT_CS]    |+SCL|    |    |    |     |     |     |     |     |     |*TX   |      |      |      |     |*TIM4_CH1                                 |          |          |           
PB7 , // |LED3 [Red]                                 |+SDA|    |    |    |     |     |     |     |     |     |*RX   |      |      |      |     |*TIM4_CH2                                 |          |          |           
PB8 , // |I2C1_SCL [WM8994ECS/R_SCLK]                |*SCL|    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM10_CH1 *TIM4_CH3                      |          |          |           
PB9 , // |I2C1_SDA [WM8994ECS/R_SDA]                 |*SDA|    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM11_CH1 *TIM4_CH4                      |          |          |           
PB10, // |ULPI_D3 [USB3300-EZK_D3]                   |    |+SCL|    |    |     |+SCK |     |     |     |     |      |      |+TX   |      |     |+TIM2_CH3                                 |          |          |           
PB11, // |ULPI_D4 [USB3300-EZK_D4]                   |    |+SDA|    |    |     |     |     |     |     |     |      |      |+RX   |      |     |+TIM2_CH4                                 |          |          |           
PB12, // |ULPI_D5 [USB3300-EZK_D5]                   |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PB13, // |ULPI_D6 [USB3300-EZK_D6]                   |    |    |    |    |     |+SCK |     |     |     |     |      |      |      |      |     |*TIM1_CH1N                                |          |          |           
PB14, // |USB_FS2_DM                                 |    |    |    |    |     |+MISO|     |     |     |     |      |      |      |      |     |+TIM12_CH1 +TIM8_CH2N +TIM1_CH2N          |*OTG_HS_DM|          |           
PB15, // |USB_FS2_DP                                 |    |    |    |    |     |+MOSI|     |     |     |     |      |      |      |      |     |+TIM12_CH2 +TIM1_CH3N +TIM8_CH3N          |*OTG_HS_DP|          |           
PC0 , // |ULPI_STP [USB3300-EZK_STP]                 |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN10|                                          |          |          |           
PC1 , // |SAI1_SDA [WM8994ECS/R_ADCDAT1]             |    |    |    |    |     |+MOSI|     |     |     |     |      |      |      |      |*IN11|                                          |          |          |+TRACED0   
PC2 , // |MII_TXD2 [DP83848CVV_TXD_2]                |    |    |    |    |     |+MISO|     |     |     |     |      |      |      |      |*IN12|                                          |          |          |           
PC3 , // |MII_TX_CLK [DP83848CVV_TX_CLK]             |    |    |    |    |     |+MOSI|     |     |     |     |      |      |      |      |*IN13|                                          |          |          |           
PC4 , // |MII_RXD0 [DP83848CVV_RXD_0/PHYAD1]         |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN14|                                          |          |          |           
PC5 , // |MII_RXD1 [DP83848CVV_RXD_1/PHYAD2]         |    |    |    |    |     |     |     |     |     |     |      |      |      |      |*IN15|                                          |          |          |           
PC6 , // |I2S3_CK                                    |    |    |    |    |     |     |     |     |     |     |      |      |      |+TX   |     |+TIM8_CH1 +TIM3_CH1                       |          |          |           
PC7 , // |MIC_CK [MP34DT01TR_CLK]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |+RX   |     |+TIM8_CH2 +TIM3_CH2                       |          |          |           
PC8 , // |uSD_D0 [SMS064FF_7]                        |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM3_CH3 +TIM8_CH3                       |          |          |+TRACED1   
PC9 , // |uSD_D1 [SMS064FF_8]                        |    |    |*SDA|    |     |     |     |     |     |     |      |      |      |      |     |+TIM8_CH4 *TIM3_CH4                       |          |          |           
PC10, // |uSD_D2 [SMS064FF_1]                        |    |    |    |    |     |     |+SCK |     |     |     |      |      |*TX   |      |     |                                          |          |          |           
PC11, // |uSD_D3 [SMS064FF_2]                        |    |    |    |    |     |     |+MISO|     |     |     |      |      |*RX   |      |     |                                          |          |          |           
PC12, // |uSD_CLK [SMS064FF_5]                       |    |    |    |    |     |     |+MOSI|     |     |     |      |      |      |      |     |                                          |          |          |*TRACED3   
PC13, // |TAMPER_WKUP_KEY [B2]                       |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PC14, // |OSC32_IN                                   |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |*OSC32_IN |           
PC15, // |OSC32_OUT                                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |*OSC32_OUT|           
PD0 , // |D2[IS61WV102416BLL_I/OD2]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD1 , // |D3 [IS61WV102416BLL_I/O3]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD2 , // |uSD_CMD [SMS064FF_3]                       |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |+TRACED2   
PD3 , // |                                           |    |    |    |    |     |*SCK |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD4 , // |FMC_NOE [IS61WV102416BLL_OE]               |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD5 , // |FMC_NWE [IS61WV102416BLL_WE]               |    |    |    |    |     |     |     |     |     |     |      |*TX   |      |      |     |                                          |          |          |           
PD6 , // |FMC_NWAIT [PC28F128M29EWLA_RB]             |    |    |    |    |     |     |+MOSI|     |     |     |      |*RX   |      |      |     |                                          |          |          |           
PD7 , // |FMC_NE1 [PC28F128M29EWLA_E]                |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD8 , // |D13 [IS61WV102416BLL_I/O13]                |    |    |    |    |     |     |     |     |     |     |      |      |+TX   |      |     |                                          |          |          |           
PD9 , // |D14 [IS61WV102416BLL_I/O14]                |    |    |    |    |     |     |     |     |     |     |      |      |+RX   |      |     |                                          |          |          |           
PD10, // |D15 [IS61WV102416BLL_I/O15]                |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD11, // |A16 [IS61WV102416BLL_A16]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PD12, // |A17 [IS61WV102416BLL_A17]                  |    |    |    |*SCL|     |     |     |     |     |     |      |      |      |      |     |+LPTIM1_IN1 +TIM4_CH1                     |          |          |           
PD13, // |A18 [IS61WV102416BLL_A18]                  |    |    |    |+SDA|     |     |     |     |     |     |      |      |      |      |     |+TIM4_CH2                                 |          |          |           
PD14, // |D0 [IS61WV102416BLL_I/O0]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM4_CH3                                 |          |          |           
PD15, // |D1 [IS61WV102416BLL_I/O1]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM4_CH4                                 |          |          |           
PE0 , // |FMC_NBL0 [IS61WV102416BLL_BLE]             |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PE1 , // |FMC_NBL1 [IS61WV102416BLL_BHE]             |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*LPTIM1_IN2                               |          |          |           
PE2 , // |A23 [PC28F128M29EWLA_A23]                  |    |    |    |    |     |     |     |*SCK |     |     |      |      |      |      |     |                                          |          |          |*TRACECLK  
PE3 , // |A19 [IS61WV102416BLL_A19]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |*TRACED0   
PE4 , // |A20 [IS61WV102416BLL_A20                   |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |*TRACED1   
PE5 , // |A21 [PC28F128M29EWLA_A21]                  |    |    |    |    |     |     |     |*MISO|     |     |      |      |      |      |     |*TIM9_CH1                                 |          |          |*TRACED2   
PE6 , // |A22 [PC28F128M29EWLA_A22]                  |    |    |    |    |     |     |     |*MOSI|     |     |      |      |      |      |     |*TIM9_CH2                                 |          |          |+TRACED3   
PE7 , // |D4 [IS61WV102416BLL_I/O4]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PE8 , // |D5 [IS61WV102416BLL_I/O5]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH1N                                |          |          |           
PE9 , // |D6 [IS61WV102416BLL_I/O6]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH1                                 |          |          |           
PE10, // |D7 [IS61WV102416BLL_I/O7]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH2N                                |          |          |           
PE11, // |D8 [IS61WV102416BLL_I/O8]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM1_CH2                                 |          |          |           
PE12, // |D9 [IS61WV102416BLL_I/O9]                  |    |    |    |    |     |     |     |+SCK |     |     |      |      |      |      |     |+TIM1_CH3N                                |          |          |           
PE13, // |D10 [IS61WV102416BLL_I/O10]                |    |    |    |    |     |     |     |+MISO|     |     |      |      |      |      |     |+TIM1_CH3                                 |          |          |           
PE14, // |D11 [IS61WV102416BLL_I/O11]                |    |    |    |    |     |     |     |+MOSI|     |     |      |      |      |      |     |+TIM1_CH4                                 |          |          |           
PE15, // |D12 [IS61WV102416BLL_I/O12]                |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF0 , // |A0 [IS61WV102416BLL_A0]                    |    |*SDA|    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF1 , // |A1 [IS61WV102416BLL_A1]                    |    |*SCL|    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF2 , // |A2 [IS61WV102416BLL_A2]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF3 , // |A3 [IS61WV102416BLL_A3]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF4 , // |A4 [IS61WV102416BLL_A4]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF5 , // |A5 [IS61WV102416BLL_A5]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF6 , // |QSPI_BK1_IO3 [MT25QL512ABA8ESF_HOLD\#/DQ3] |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM10_CH1                                |          |          |           
PF7 , // |QSPI_BK1_IO2 [MT25QL512ABA8ESF_W\#/Vpp/DQ2]|    |    |    |    |     |     |     |     |*SCK |     |      |      |      |      |     |+TIM11_CH1                                |          |          |           
PF8 , // |QSPI_BK1_IO0 [MT25QL512ABA8ESF_DQ0]        |    |    |    |    |     |     |     |     |*MISO|     |      |      |      |      |     |*TIM13_CH1                                |          |          |           
PF9 , // |QSPI_BK1_IO1 [MT25QL512ABA8ESF_DQ1]        |    |    |    |    |     |     |     |     |*MOSI|     |      |      |      |      |     |*TIM14_CH1                                |          |          |           
PF10, // |LED1 [Green]                               |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF11, // |SDNRAS [IS42S32800G_RAS]                   |    |    |    |    |     |     |     |     |+MOSI|     |      |      |      |      |     |                                          |          |          |           
PF12, // |A6 [IS61WV102416BLL_A6]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF13, // |A7 [IS61WV102416BLL_A7]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF14, // |A8 [IS61WV102416BLL_A8]                    |    |    |    |+SCL|     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PF15, // |A9 [IS61WV102416BLL_A9]                    |    |    |    |*SDA|     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG0 , // |A10 [IS61WV102416BLL_A10]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG1 , // |A11 [IS61WV102416BLL_A11]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG2 , // |A12 [IS61WV102416BLL_A12]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG3 , // |A13 [IS61WV102416BLL_A13]                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG4 , // |                                           |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG5 , // |                                           |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG6 , // |MII_MDIO_GPIO [DP83848CVV_MDIO]            |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG7 , // |MII_MDC_GPIO [DP83848CVV_MDC]              |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG8 , // |SDCLK [IS42S32800G_CLK]                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG9 , // |SAI2_FSB [WM8994ECS/R_LRCLK1]              |    |    |    |    |     |     |     |     |     |     |      |      |      |*RX   |     |                                          |          |          |           
PG10, // |FMC_NE3 [IS61WV102416BLL_CSE]              |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG11, // |MII_TX_EN [DP83848CVV_TX_EN]               |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PG12, // |SPDIF_RX1 [DLR11H0_1]                      |    |    |    |    |     |     |     |     |     |*MISO|      |      |      |      |     |*LPTIM1_IN1                               |          |          |           
PG13, // |MII_TXD0 [DP83848CVV_TXD0]                 |    |    |    |    |     |     |     |     |     |*SCK |      |      |      |      |     |                                          |          |          |+TRACED0   
PG14, // |MII_TXD1 [DP83848CVV_TXD1]                 |    |    |    |    |     |     |     |     |     |*MOSI|      |      |      |*TX   |     |                                          |          |          |+TRACED1   
PG15, // |SDNCAS [IS42S32800G-6BLI_CAS]              |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PH0 , // |OSC_IN                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |*OSC_IN   |           
PH1 , // |OSC_OUT                                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |*OSC_OUT  |           
PH2 , // |SDCKE0 [IS42S32800G_CKE]                   |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+LPTIM1_IN2                               |          |          |           
PH3 , // |SDNE0 [IS42S32800G_CS]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PH4 , // |ULPI_NXT [USB3300-EZK_NXT]                 |    |+SCL|    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PH5 , // |SDNWE [IS42S32800G_WE]                     |    |+SDA|    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PH6 , // |MII_RXD2 [DP83848CVV_RXD_2/PHYAD3]         |    |    |    |    |     |     |     |     |+SCK |     |      |      |      |      |     |*TIM12_CH1                                |          |          |           
PH7 , // |MII_RXD3 [DP83848CVV_RXD_3/PHYAD4]         |    |    |+SCL|    |     |     |     |     |+MISO|     |      |      |      |      |     |                                          |          |          |           
PH8 , // |D16 [IS42S32800G_DQ16]                     |    |    |+SDA|    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PH9 , // |D17 [IS42S32800G_DQ17]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM12_CH2                                |          |          |           
PH10, // |D18 [IS42S32800G_DQ18]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |+TIM5_CH1                                 |          |          |           
PH11, // |D19 [IS42S32800G_DQ19]                     |    |    |    |+SCL|     |     |     |     |     |     |      |      |      |      |     |+TIM5_CH2                                 |          |          |           
PH12, // |D20 [IS42S32800G_DQ20]                     |    |    |    |+SDA|     |     |     |     |     |     |      |      |      |      |     |*TIM5_CH3                                 |          |          |           
PH13, // |D21 [IS42S32800G_DQ21]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH1N                                |          |          |           
PH14, // |D22 [IS42S32800G_DQ22]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH2N                                |          |          |           
PH15, // |D23 [IS42S32800G_DQ23]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH3N                                |          |          |           
PI0 , // |D24 [IS42S32800G_DQ24]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM5_CH4                                 |          |          |           
PI1 , // |D25 [IS42S32800G_DQ25]                     |    |    |    |    |     |+SCK |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI2 , // |D26 [IS42S32800G_DQ26]                     |    |    |    |    |     |*MISO|     |     |     |     |      |      |      |      |     |*TIM8_CH4                                 |          |          |           
PI3 , // |D27 [IS42S32800G_DQ27]                     |    |    |    |    |     |*MOSI|     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI4 , // |FMC_NBL2 [IS42S32800G_DQM2]                |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI5 , // |FMC_NBL3 [IS42S32800G_DQM3]                |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH1                                 |          |          |           
PI6 , // |D28 [IS42S32800G_DQ28]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH2                                 |          |          |           
PI7 , // |D29 [IS42S32800G_DQ29]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |*TIM8_CH3                                 |          |          |           
PI8 , // |EXPANDER_INT                               |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI9 , // |D30 [IS42S32800G_DQ30]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI10, // |D31 [IS42S32800G_DQ31]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI11, // |ULPI_DIR [USB3300_DIR]                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI12, // |LCD_HSYNC                                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI13, // |LCD_VSYNC                                  |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI14, // |LCD_CLK                                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PI15, // |LCD_R0                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ0 , // |LCD_R1                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ1 , // |LCD_R2                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ2 , // |LCD_R3]                                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ3 , // |LCD_R4]                                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ4 , // |LCD_R5]                                    |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ5 , // |LCD_R6                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ6 , // |LCD_R7                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ7 , // |LCD_G0                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ8 , // |LCD_G1                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ9 , // |LCD_G2                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ10, // |LCD_G3                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ11, // |LCD_G4                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ12, // |LCD_B0                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ13, // |LCD_B1                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ14, // |LCD_B2                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PJ15, // |LCD_B3                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK0 , // |LCD_G5                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK1 , // |LCD_G6                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK2 , // |LCD_G7                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK3 , // |LCD_B4                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK4 , // |LCD_B5                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK5 , // |LCD_B6                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK6 , // |LCD_B7                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
PK7 , // |LCD_DE                                     |    |    |    |    |     |     |     |     |     |     |      |      |      |      |     |                                          |          |          |           
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
  { PB2 , GPIO_PIN_2 , GPIOB, GPIO_PIN_IO, false},
  { PB3 , GPIO_PIN_3 , GPIOB, GPIO_PIN_IO, false},
  { PB4 , GPIO_PIN_4 , GPIOB, GPIO_PIN_IO, false},
  { PB5 , GPIO_PIN_5 , GPIOB, GPIO_PIN_IO, false},
  { PB6 , GPIO_PIN_6 , GPIOB, GPIO_PIN_IO, false},
  { PB7 , GPIO_PIN_7 , GPIOB, GPIO_PIN_IO, false},
  { PB8 , GPIO_PIN_8 , GPIOB, GPIO_PIN_IO, false},
  { PB9 , GPIO_PIN_9 , GPIOB, GPIO_PIN_IO, false},
  { PB10, GPIO_PIN_10, GPIOB, GPIO_PIN_IO, false},
  { PB11, GPIO_PIN_11, GPIOB, GPIO_PIN_IO, false},
  { PB12, GPIO_PIN_12, GPIOB, GPIO_PIN_IO, false},
  { PB13, GPIO_PIN_13, GPIOB, GPIO_PIN_IO, false},
  { PB14, GPIO_PIN_14, GPIOB, GPIO_PIN_IO, false},
  { PB15, GPIO_PIN_15, GPIOB, GPIO_PIN_IO, false},
  { PC0 , GPIO_PIN_0 , GPIOC, GPIO_PIN_IO, false},
  { PC1 , GPIO_PIN_1 , GPIOC, GPIO_PIN_IO, false},
  { PC2 , GPIO_PIN_2 , GPIOC, GPIO_PIN_IO, false},
  { PC3 , GPIO_PIN_3 , GPIOC, GPIO_PIN_IO, false},
  { PC4 , GPIO_PIN_4 , GPIOC, GPIO_PIN_IO, false},
  { PC5 , GPIO_PIN_5 , GPIOC, GPIO_PIN_IO, false},
  { PC6 , GPIO_PIN_6 , GPIOC, GPIO_PIN_IO, false},
  { PC7 , GPIO_PIN_7 , GPIOC, GPIO_PIN_IO, false},
  { PC8 , GPIO_PIN_8 , GPIOC, GPIO_PIN_IO, false},
  { PC9 , GPIO_PIN_9 , GPIOC, GPIO_PIN_IO, false},
  { PC10, GPIO_PIN_10, GPIOC, GPIO_PIN_IO, false},
  { PC11, GPIO_PIN_11, GPIOC, GPIO_PIN_IO, false},
  { PC12, GPIO_PIN_12, GPIOC, GPIO_PIN_IO, false},
  { PC13, GPIO_PIN_13, GPIOC, GPIO_PIN_IO, false},
  { PC14, GPIO_PIN_14, GPIOC, GPIO_PIN_IO, false},
  { PC15, GPIO_PIN_15, GPIOC, GPIO_PIN_IO, false},
  { PD0 , GPIO_PIN_0 , GPIOD, GPIO_PIN_IO, false},
  { PD1 , GPIO_PIN_1 , GPIOD, GPIO_PIN_IO, false},
  { PD2 , GPIO_PIN_2 , GPIOD, GPIO_PIN_IO, false},
  { PD3 , GPIO_PIN_3 , GPIOD, GPIO_PIN_IO, false},
  { PD4 , GPIO_PIN_4 , GPIOD, GPIO_PIN_IO, false},
  { PD5 , GPIO_PIN_5 , GPIOD, GPIO_PIN_IO, false},
  { PD6 , GPIO_PIN_6 , GPIOD, GPIO_PIN_IO, false},
  { PD7 , GPIO_PIN_7 , GPIOD, GPIO_PIN_IO, false},
  { PD8 , GPIO_PIN_8 , GPIOD, GPIO_PIN_IO, false},
  { PD9 , GPIO_PIN_9 , GPIOD, GPIO_PIN_IO, false},
  { PD10, GPIO_PIN_10, GPIOD, GPIO_PIN_IO, false},
  { PD11, GPIO_PIN_11, GPIOD, GPIO_PIN_IO, false},
  { PD12, GPIO_PIN_12, GPIOD, GPIO_PIN_IO, false},
  { PD13, GPIO_PIN_13, GPIOD, GPIO_PIN_IO, false},
  { PD14, GPIO_PIN_14, GPIOD, GPIO_PIN_IO, false},
  { PD15, GPIO_PIN_15, GPIOD, GPIO_PIN_IO, false},
  { PE0 , GPIO_PIN_0 , GPIOE, GPIO_PIN_IO, false},
  { PE1 , GPIO_PIN_1 , GPIOE, GPIO_PIN_IO, false},
  { PE2 , GPIO_PIN_2 , GPIOE, GPIO_PIN_IO, false},
  { PE3 , GPIO_PIN_3 , GPIOE, GPIO_PIN_IO, false},
  { PE4 , GPIO_PIN_4 , GPIOE, GPIO_PIN_IO, false},
  { PE5 , GPIO_PIN_5 , GPIOE, GPIO_PIN_IO, false},
  { PE6 , GPIO_PIN_6 , GPIOE, GPIO_PIN_IO, false},
  { PE7 , GPIO_PIN_7 , GPIOE, GPIO_PIN_IO, false},
  { PE8 , GPIO_PIN_8 , GPIOE, GPIO_PIN_IO, false},
  { PE9 , GPIO_PIN_9 , GPIOE, GPIO_PIN_IO, false},
  { PE10, GPIO_PIN_10, GPIOE, GPIO_PIN_IO, false},
  { PE11, GPIO_PIN_11, GPIOE, GPIO_PIN_IO, false},
  { PE12, GPIO_PIN_12, GPIOE, GPIO_PIN_IO, false},
  { PE13, GPIO_PIN_13, GPIOE, GPIO_PIN_IO, false},
  { PE14, GPIO_PIN_14, GPIOE, GPIO_PIN_IO, false},
  { PE15, GPIO_PIN_15, GPIOE, GPIO_PIN_IO, false},
  { PF0 , GPIO_PIN_0 , GPIOF, GPIO_PIN_IO, false},
  { PF1 , GPIO_PIN_1 , GPIOF, GPIO_PIN_IO, false},
  { PF2 , GPIO_PIN_2 , GPIOF, GPIO_PIN_IO, false},
  { PF3 , GPIO_PIN_3 , GPIOF, GPIO_PIN_IO, false},
  { PF4 , GPIO_PIN_4 , GPIOF, GPIO_PIN_IO, false},
  { PF5 , GPIO_PIN_5 , GPIOF, GPIO_PIN_IO, false},
  { PF6 , GPIO_PIN_6 , GPIOF, GPIO_PIN_IO, false},
  { PF7 , GPIO_PIN_7 , GPIOF, GPIO_PIN_IO, false},
  { PF8 , GPIO_PIN_8 , GPIOF, GPIO_PIN_IO, false},
  { PF9 , GPIO_PIN_9 , GPIOF, GPIO_PIN_IO, false},
  { PF10, GPIO_PIN_10, GPIOF, GPIO_PIN_IO, false},
  { PF11, GPIO_PIN_11, GPIOF, GPIO_PIN_IO, false},
  { PF12, GPIO_PIN_12, GPIOF, GPIO_PIN_IO, false},
  { PF13, GPIO_PIN_13, GPIOF, GPIO_PIN_IO, false},
  { PF14, GPIO_PIN_14, GPIOF, GPIO_PIN_IO, false},
  { PF15, GPIO_PIN_15, GPIOF, GPIO_PIN_IO, false},
  { PG0 , GPIO_PIN_0 , GPIOG, GPIO_PIN_IO, false},
  { PG1 , GPIO_PIN_1 , GPIOG, GPIO_PIN_IO, false},
  { PG2 , GPIO_PIN_2 , GPIOG, GPIO_PIN_IO, false},
  { PG3 , GPIO_PIN_3 , GPIOG, GPIO_PIN_IO, false},
  { PG4 , GPIO_PIN_4 , GPIOG, GPIO_PIN_IO, false},
  { PG5 , GPIO_PIN_5 , GPIOG, GPIO_PIN_IO, false},
  { PG6 , GPIO_PIN_6 , GPIOG, GPIO_PIN_IO, false},
  { PG7 , GPIO_PIN_7 , GPIOG, GPIO_PIN_IO, false},
  { PG8 , GPIO_PIN_8 , GPIOG, GPIO_PIN_IO, false},
  { PG9 , GPIO_PIN_9 , GPIOG, GPIO_PIN_IO, false},
  { PG10, GPIO_PIN_10, GPIOG, GPIO_PIN_IO, false},
  { PG11, GPIO_PIN_11, GPIOG, GPIO_PIN_IO, false},
  { PG12, GPIO_PIN_12, GPIOG, GPIO_PIN_IO, false},
  { PG13, GPIO_PIN_13, GPIOG, GPIO_PIN_IO, false},
  { PG14, GPIO_PIN_14, GPIOG, GPIO_PIN_IO, false},
  { PG15, GPIO_PIN_15, GPIOG, GPIO_PIN_IO, false},
  { PH0 , GPIO_PIN_0 , GPIOH, GPIO_PIN_IO, false},
  { PH1 , GPIO_PIN_1 , GPIOH, GPIO_PIN_IO, false},
  { PH2 , GPIO_PIN_2 , GPIOH, GPIO_PIN_IO, false},
  { PH3 , GPIO_PIN_3 , GPIOH, GPIO_PIN_IO, false},
  { PH4 , GPIO_PIN_4 , GPIOH, GPIO_PIN_IO, false},
  { PH5 , GPIO_PIN_5 , GPIOH, GPIO_PIN_IO, false},
  { PH6 , GPIO_PIN_6 , GPIOH, GPIO_PIN_IO, false},
  { PH7 , GPIO_PIN_7 , GPIOH, GPIO_PIN_IO, false},
  { PH8 , GPIO_PIN_8 , GPIOH, GPIO_PIN_IO, false},
  { PH9 , GPIO_PIN_9 , GPIOH, GPIO_PIN_IO, false},
  { PH10, GPIO_PIN_10, GPIOH, GPIO_PIN_IO, false},
  { PH11, GPIO_PIN_11, GPIOH, GPIO_PIN_IO, false},
  { PH12, GPIO_PIN_12, GPIOH, GPIO_PIN_IO, false},
  { PH13, GPIO_PIN_13, GPIOH, GPIO_PIN_IO, false},
  { PH14, GPIO_PIN_14, GPIOH, GPIO_PIN_IO, false},
  { PH15, GPIO_PIN_15, GPIOH, GPIO_PIN_IO, false},
  { PI0 , GPIO_PIN_0 , GPIOI, GPIO_PIN_IO, false},
  { PI1 , GPIO_PIN_1 , GPIOI, GPIO_PIN_IO, false},
  { PI2 , GPIO_PIN_2 , GPIOI, GPIO_PIN_IO, false},
  { PI3 , GPIO_PIN_3 , GPIOI, GPIO_PIN_IO, false},
  { PI4 , GPIO_PIN_4 , GPIOI, GPIO_PIN_IO, false},
  { PI5 , GPIO_PIN_5 , GPIOI, GPIO_PIN_IO, false},
  { PI6 , GPIO_PIN_6 , GPIOI, GPIO_PIN_IO, false},
  { PI7 , GPIO_PIN_7 , GPIOI, GPIO_PIN_IO, false},
  { PI8 , GPIO_PIN_8 , GPIOI, GPIO_PIN_IO, false},
  { PI9 , GPIO_PIN_9 , GPIOI, GPIO_PIN_IO, false},
  { PI10, GPIO_PIN_10, GPIOI, GPIO_PIN_IO, false},
  { PI11, GPIO_PIN_11, GPIOI, GPIO_PIN_IO, false},
  { PI12, GPIO_PIN_12, GPIOI, GPIO_PIN_IO, false},
  { PI13, GPIO_PIN_13, GPIOI, GPIO_PIN_IO, false},
  { PI14, GPIO_PIN_14, GPIOI, GPIO_PIN_IO, false},
  { PI15, GPIO_PIN_15, GPIOI, GPIO_PIN_IO, false},
  { PJ0 , GPIO_PIN_0 , GPIOJ, GPIO_PIN_IO, false},
  { PJ1 , GPIO_PIN_1 , GPIOJ, GPIO_PIN_IO, false},
  { PJ2 , GPIO_PIN_2 , GPIOJ, GPIO_PIN_IO, false},
  { PJ3 , GPIO_PIN_3 , GPIOJ, GPIO_PIN_IO, false},
  { PJ4 , GPIO_PIN_4 , GPIOJ, GPIO_PIN_IO, false},
  { PJ5 , GPIO_PIN_5 , GPIOJ, GPIO_PIN_IO, false},
  { PJ6 , GPIO_PIN_6 , GPIOJ, GPIO_PIN_IO, false},
  { PJ7 , GPIO_PIN_7 , GPIOJ, GPIO_PIN_IO, false},
  { PJ8 , GPIO_PIN_8 , GPIOJ, GPIO_PIN_IO, false},
  { PJ9 , GPIO_PIN_9 , GPIOJ, GPIO_PIN_IO, false},
  { PJ10, GPIO_PIN_10, GPIOJ, GPIO_PIN_IO, false},
  { PJ11, GPIO_PIN_11, GPIOJ, GPIO_PIN_IO, false},
  { PJ12, GPIO_PIN_12, GPIOJ, GPIO_PIN_IO, false},
  { PJ13, GPIO_PIN_13, GPIOJ, GPIO_PIN_IO, false},
  { PJ14, GPIO_PIN_14, GPIOJ, GPIO_PIN_IO, false},
  { PJ15, GPIO_PIN_15, GPIOJ, GPIO_PIN_IO, false},
  { PK0 , GPIO_PIN_0 , GPIOK, GPIO_PIN_IO, false},
  { PK1 , GPIO_PIN_1 , GPIOK, GPIO_PIN_IO, false},
  { PK2 , GPIO_PIN_2 , GPIOK, GPIO_PIN_IO, false},
  { PK3 , GPIO_PIN_3 , GPIOK, GPIO_PIN_IO, false},
  { PK4 , GPIO_PIN_4 , GPIOK, GPIO_PIN_IO, false},
  { PK5 , GPIO_PIN_5 , GPIOK, GPIO_PIN_IO, false},
  { PK6 , GPIO_PIN_6 , GPIOK, GPIO_PIN_IO, false},
  { PK7 , GPIO_PIN_7 , GPIOK, GPIO_PIN_IO, false},
};



spi_init_info_t spi_init_info[] = { 
  { 
    .init_done = 0, 
    .spi_instance = SPI1, 
    .mosi_alternate = GPIO_AF5_SPI1,
    .mosi_port = GPIOB, 
    .mosi_pin =  GPIO_PIN_5, 
    .miso_alternate = GPIO_AF5_SPI1,
    .miso_port = GPIOB, 
    .miso_pin = GPIO_PIN_4, 
    .sck_alternate = GPIO_AF5_SPI1,
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_3, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI2, 
    .mosi_alternate = GPIO_AF5_SPI2,
    .mosi_port = GPIOI, 
    .mosi_pin =  GPIO_PIN_3, 
    .miso_alternate = GPIO_AF5_SPI2,
    .miso_port = GPIOI, 
    .miso_pin = GPIO_PIN_2, 
    .sck_alternate = GPIO_AF5_SPI2,
    .sck_port = GPIOD, 
    .sck_pin = GPIO_PIN_3, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI3, 
    .mosi_alternate = GPIO_AF6_SPI3,
    .mosi_port = GPIOB, 
    .mosi_pin =  GPIO_PIN_5, 
    .miso_alternate = GPIO_AF6_SPI3,
    .miso_port = GPIOB, 
    .miso_pin = GPIO_PIN_4, 
    .sck_alternate = GPIO_AF6_SPI3,
    .sck_port = GPIOB, 
    .sck_pin = GPIO_PIN_3, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI4, 
    .mosi_alternate = GPIO_AF5_SPI4,
    .mosi_port = GPIOE, 
    .mosi_pin =  GPIO_PIN_6, 
    .miso_alternate = GPIO_AF5_SPI4,
    .miso_port = GPIOE, 
    .miso_pin = GPIO_PIN_5, 
    .sck_alternate = GPIO_AF5_SPI4,
    .sck_port = GPIOE, 
    .sck_pin = GPIO_PIN_2, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI5, 
    .mosi_alternate = GPIO_AF5_SPI5,
    .mosi_port = GPIOF, 
    .mosi_pin =  GPIO_PIN_9, 
    .miso_alternate = GPIO_AF5_SPI5,
    .miso_port = GPIOF, 
    .miso_pin = GPIO_PIN_8, 
    .sck_alternate = GPIO_AF5_SPI5,
    .sck_port = GPIOF, 
    .sck_pin = GPIO_PIN_7, 
  },
  { 
    .init_done = 0, 
    .spi_instance = SPI6, 
    .mosi_alternate = GPIO_AF5_SPI6,
    .mosi_port = GPIOG, 
    .mosi_pin =  GPIO_PIN_14, 
    .miso_alternate = GPIO_AF5_SPI6,
    .miso_port = GPIOG, 
    .miso_pin = GPIO_PIN_12, 
    .sck_alternate = GPIO_AF5_SPI6,
    .sck_port = GPIOG, 
    .sck_pin = GPIO_PIN_13, 
  },
}; 

uint8_t NB_SPI_INSTANCES = sizeof(spi_init_info) / sizeof(spi_init_info[0]);

i2c_init_info_t g_i2c_init_info[] = {
  {
    .init_done = 0,
    .i2c_instance = I2C1,
    .irq = I2C1_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C1,
    .sda_port = GPIOB,
    .sda_pin = GPIO_PIN_9,
    .scl_alternate = GPIO_AF4_I2C1,
    .scl_port = GPIOB,
    .scl_pin = GPIO_PIN_8,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C2,
    .irq = I2C2_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C2,
    .sda_port = GPIOF,
    .sda_pin = GPIO_PIN_0,
    .scl_alternate = GPIO_AF4_I2C2,
    .scl_port = GPIOF,
    .scl_pin = GPIO_PIN_1,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C3,
    .irq = I2C3_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C3,
    .sda_port = GPIOC,
    .sda_pin = GPIO_PIN_9,
    .scl_alternate = GPIO_AF4_I2C3,
    .scl_port = GPIOA,
    .scl_pin = GPIO_PIN_8,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
  {
    .init_done = 0,
    .i2c_instance = I2C4,
    .irq = I2C4_EV_IRQn,
    .sda_alternate = GPIO_AF4_I2C4,
    .sda_port = GPIOF,
    .sda_pin = GPIO_PIN_15,
    .scl_alternate = GPIO_AF4_I2C4,
    .scl_port = GPIOD,
    .scl_pin = GPIO_PIN_12,
    .i2c_onSlaveReceive = NULL,
    .i2c_onSlaveTransmit = NULL,
    .i2cTxRxBufferSize = 0
  },
};

uint8_t NB_I2C_INSTANCES = sizeof(g_i2c_init_info) / sizeof(g_i2c_init_info[0]);


uart_conf_t g_uart_config[] = {
  {
    //UART ID and IRQ
    .usart_typedef = USART1, .irqtype = USART1_IRQn,
    .tx_port = GPIOB, .tx_pin = GPIO_PIN_6,
    .rx_port = GPIOB, .rx_pin = GPIO_PIN_7,
    .uart_af_remap = GPIO_AF7_USART1,
    .tx_alternate  = GPIO_AF7_USART1,
    .rx_alternate  = GPIO_AF7_USART1,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART2, .irqtype = USART2_IRQn,
    .tx_port = GPIOD, .tx_pin = GPIO_PIN_5,
    .rx_port = GPIOD, .rx_pin = GPIO_PIN_6,
    .uart_af_remap = GPIO_AF7_USART2,
    .tx_alternate  = GPIO_AF7_USART2,
    .rx_alternate  = GPIO_AF7_USART2,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART3, .irqtype = USART3_IRQn,
    .tx_port = GPIOC, .tx_pin = GPIO_PIN_10,
    .rx_port = GPIOC, .rx_pin = GPIO_PIN_11,
    .uart_af_remap = GPIO_AF7_USART3,
    .tx_alternate  = GPIO_AF7_USART3,
    .rx_alternate  = GPIO_AF7_USART3,
    .data_available = 0,
    .begin = 0,
    .end = 0,
    .uart_option = NATIVE_UART_E
  },
  {
    //UART ID and IRQ
    .usart_typedef = USART6, .irqtype = USART6_IRQn,
    .tx_port = GPIOG, .tx_pin = GPIO_PIN_14,
    .rx_port = GPIOG, .rx_pin = GPIO_PIN_9,
    .uart_af_remap = GPIO_AF8_USART6,
    .tx_alternate  = GPIO_AF8_USART6,
    .rx_alternate  = GPIO_AF8_USART6,
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
    .port = GPIOC,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_10, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_11, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_12, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_13, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_4,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_14, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOC,
    .pin = GPIO_PIN_5,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_15, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_2,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_2, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_3,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_3, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
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
    .port = GPIOA,
    .pin = GPIO_PIN_6,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_6, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOA,
    .pin = GPIO_PIN_7,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_7, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_0,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_8, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
  {
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .adcInstance = ADC1,
    .adcChannelConf = { .Channel = ADC_CHANNEL_9, .Rank = ADC_REGULAR_RANK_1, .SamplingTime = SAMPLINGTIME }
  },
};
#if defined (STM32F100xB) || defined (STM32F100xE) || defined (STM32F101xE) || defined (STM32F101xG) || defined (STM32F103xE) || defined (STM32F103xG) || defined (STM32F105xC) || defined (STM32F107xC)
dac_config_str g_dac_config[] = {
    
};
#endif

pwm_config_str g_pwm_config[] = {
  {
    .port = GPIOA,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
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
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF1_TIM1,
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
    .port = GPIOA,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
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
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_2,
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
    .port = GPIOA,
    .pin = GPIO_PIN_10,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
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
    .port = GPIOB,
    .pin = GPIO_PIN_1,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
    .timChannel = TIM_CHANNEL_3,
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
    .port = GPIOA,
    .pin = GPIO_PIN_11,
    .alFunction = GPIO_AF1_TIM1,
    .timInstance = TIM1,
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
    .port = GPIOB,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF3_TIM10,
    .timInstance = TIM10,
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
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF3_TIM11,
    .timInstance = TIM11,
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
    .port = GPIOH,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF9_TIM12,
    .timInstance = TIM12,
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
    .port = GPIOH,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF9_TIM12,
    .timInstance = TIM12,
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
    .port = GPIOF,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF9_TIM13,
    .timInstance = TIM13,
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
    .port = GPIOF,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF9_TIM14,
    .timInstance = TIM14,
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
    .pin = GPIO_PIN_15,
    .alFunction = GPIO_AF1_TIM2,
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
    .port = GPIOB,
    .pin = GPIO_PIN_3,
    .alFunction = GPIO_AF1_TIM2,
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
    .alFunction = GPIO_AF1_TIM2,
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
    .alFunction = GPIO_AF1_TIM2,
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
    .port = GPIOB,
    .pin = GPIO_PIN_4,
    .alFunction = GPIO_AF2_TIM3,
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
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF2_TIM3,
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
  {
    .port = GPIOC,
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF2_TIM3,
    .timInstance = TIM3,
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
    .port = GPIOC,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF2_TIM3,
    .timInstance = TIM3,
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
    .port = GPIOB,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF2_TIM4,
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
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
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
    .pin = GPIO_PIN_8,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
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
    .port = GPIOB,
    .pin = GPIO_PIN_9,
    .alFunction = GPIO_AF2_TIM4,
    .timInstance = TIM4,
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
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
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
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
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
    .port = GPIOH,
    .pin = GPIO_PIN_12,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
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
    .port = GPIOI,
    .pin = GPIO_PIN_0,
    .alFunction = GPIO_AF2_TIM5,
    .timInstance = TIM5,
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
    .port = GPIOI,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
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
    .port = GPIOH,
    .pin = GPIO_PIN_13,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
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
    .port = GPIOI,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
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
    .port = GPIOH,
    .pin = GPIO_PIN_14,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_2,
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
    .port = GPIOI,
    .pin = GPIO_PIN_7,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
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
    .port = GPIOH,
    .pin = GPIO_PIN_15,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
    .timChannel = TIM_CHANNEL_3,
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
    .port = GPIOI,
    .pin = GPIO_PIN_2,
    .alFunction = GPIO_AF3_TIM8,
    .timInstance = TIM8,
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
    .port = GPIOE,
    .pin = GPIO_PIN_5,
    .alFunction = GPIO_AF3_TIM9,
    .timInstance = TIM9,
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
    .port = GPIOE,
    .pin = GPIO_PIN_6,
    .alFunction = GPIO_AF3_TIM9,
    .timInstance = TIM9,
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
    { I2C1  , SCL  , GPIOB, GPIO_PIN_6  , GPIO_AF4_I2C1                      },
    { I2C1  , SCL  , GPIOB, GPIO_PIN_8  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_7  , GPIO_AF4_I2C1                      },
    { I2C1  , SDA  , GPIOB, GPIO_PIN_9  , GPIO_AF4_I2C1                      },
    { I2C2  , SCL  , GPIOF, GPIO_PIN_1  , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOB, GPIO_PIN_10 , GPIO_AF4_I2C2                      },
    { I2C2  , SCL  , GPIOH, GPIO_PIN_4  , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOB, GPIO_PIN_11 , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOF, GPIO_PIN_0  , GPIO_AF4_I2C2                      },
    { I2C2  , SDA  , GPIOH, GPIO_PIN_5  , GPIO_AF4_I2C2                      },
    { I2C3  , SCL  , GPIOA, GPIO_PIN_8  , GPIO_AF4_I2C3                      },
    { I2C3  , SCL  , GPIOH, GPIO_PIN_7  , GPIO_AF4_I2C3                      },
    { I2C3  , SDA  , GPIOH, GPIO_PIN_8  , GPIO_AF4_I2C3                      },
    { I2C3  , SDA  , GPIOC, GPIO_PIN_9  , GPIO_AF4_I2C3                      },
    { I2C4  , SCL  , GPIOD, GPIO_PIN_12 , GPIO_AF4_I2C4                      },
    { I2C4  , SCL  , GPIOH, GPIO_PIN_11 , GPIO_AF4_I2C4                      },
    { I2C4  , SCL  , GPIOF, GPIO_PIN_14 , GPIO_AF4_I2C4                      },
    { I2C4  , SDA  , GPIOD, GPIO_PIN_13 , GPIO_AF4_I2C4                      },
    { I2C4  , SDA  , GPIOF, GPIO_PIN_15 , GPIO_AF4_I2C4                      },
    { I2C4  , SDA  , GPIOH, GPIO_PIN_12 , GPIO_AF4_I2C4                      },
    { SPI1  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF5_SPI1                      },
    { SPI1  , MISO , GPIOA, GPIO_PIN_6  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , MOSI , GPIOA, GPIO_PIN_7  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOA, GPIO_PIN_5  , GPIO_AF5_SPI1                      },
    { SPI1  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF5_SPI1                      },
    { SPI2  , MISO , GPIOC, GPIO_PIN_2  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOI, GPIO_PIN_2  , GPIO_AF5_SPI2                      },
    { SPI2  , MISO , GPIOB, GPIO_PIN_14 , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOI, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOC, GPIO_PIN_1  , GPIO_AF5_SPI2                      },
    { SPI2  , MOSI , GPIOB, GPIO_PIN_15 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOA, GPIO_PIN_9  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_13 , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOD, GPIO_PIN_3  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOI, GPIO_PIN_1  , GPIO_AF5_SPI2                      },
    { SPI2  , SCK  , GPIOB, GPIO_PIN_10 , GPIO_AF5_SPI2                      },
    { SPI3  , MISO , GPIOB, GPIO_PIN_4  , GPIO_AF6_SPI3                      },
    { SPI3  , MISO , GPIOC, GPIO_PIN_11 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_5  , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOD, GPIO_PIN_6  , GPIO_AF5_SPI3                      },
    { SPI3  , MOSI , GPIOC, GPIO_PIN_12 , GPIO_AF6_SPI3                      },
    { SPI3  , MOSI , GPIOB, GPIO_PIN_2  , GPIO_AF7_SPI3                      },
    { SPI3  , SCK  , GPIOC, GPIO_PIN_10 , GPIO_AF6_SPI3                      },
    { SPI3  , SCK  , GPIOB, GPIO_PIN_3  , GPIO_AF6_SPI3                      },
    { SPI4  , MISO , GPIOE, GPIO_PIN_5  , GPIO_AF5_SPI4                      },
    { SPI4  , MISO , GPIOE, GPIO_PIN_13 , GPIO_AF5_SPI4                      },
    { SPI4  , MOSI , GPIOE, GPIO_PIN_14 , GPIO_AF5_SPI4                      },
    { SPI4  , MOSI , GPIOE, GPIO_PIN_6  , GPIO_AF5_SPI4                      },
    { SPI4  , SCK  , GPIOE, GPIO_PIN_12 , GPIO_AF5_SPI4                      },
    { SPI4  , SCK  , GPIOE, GPIO_PIN_2  , GPIO_AF5_SPI4                      },
    { SPI5  , MISO , GPIOF, GPIO_PIN_8  , GPIO_AF5_SPI5                      },
    { SPI5  , MISO , GPIOH, GPIO_PIN_7  , GPIO_AF5_SPI5                      },
    { SPI5  , MOSI , GPIOF, GPIO_PIN_9  , GPIO_AF5_SPI5                      },
    { SPI5  , MOSI , GPIOF, GPIO_PIN_11 , GPIO_AF5_SPI5                      },
    { SPI5  , SCK  , GPIOH, GPIO_PIN_6  , GPIO_AF5_SPI5                      },
    { SPI5  , SCK  , GPIOF, GPIO_PIN_7  , GPIO_AF5_SPI5                      },
    { SPI6  , MISO , GPIOG, GPIO_PIN_12 , GPIO_AF5_SPI6                      },
    { SPI6  , MOSI , GPIOG, GPIO_PIN_14 , GPIO_AF5_SPI6                      },
    { SPI6  , SCK  , GPIOG, GPIO_PIN_13 , GPIO_AF5_SPI6                      },
    { TIM10 , CH1  , GPIOB, GPIO_PIN_8  , GPIO_AF3_TIM10                     },
    { TIM10 , CH1  , GPIOF, GPIO_PIN_6  , GPIO_AF3_TIM10                     },
    { TIM11 , CH1  , GPIOB, GPIO_PIN_9  , GPIO_AF3_TIM11                     },
    { TIM11 , CH1  , GPIOF, GPIO_PIN_7  , GPIO_AF3_TIM11                     },
    { TIM12 , CH1  , GPIOB, GPIO_PIN_14 , GPIO_AF9_TIM12                     },
    { TIM12 , CH1  , GPIOH, GPIO_PIN_6  , GPIO_AF9_TIM12                     },
    { TIM12 , CH2  , GPIOH, GPIO_PIN_9  , GPIO_AF9_TIM12                     },
    { TIM12 , CH2  , GPIOB, GPIO_PIN_15 , GPIO_AF9_TIM12                     },
    { TIM13 , CH1  , GPIOF, GPIO_PIN_8  , GPIO_AF9_TIM13                     },
    { TIM13 , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF9_TIM13                     },
    { TIM14 , CH1  , GPIOF, GPIO_PIN_9  , GPIO_AF9_TIM14                     },
    { TIM14 , CH1  , GPIOA, GPIO_PIN_7  , GPIO_AF9_TIM14                     },
    { TIM1  , CH1  , GPIOA, GPIO_PIN_8  , GPIO_AF1_TIM1                      },
    { TIM1  , CH1  , GPIOE, GPIO_PIN_9  , GPIO_AF1_TIM1                      },
    { TIM1  , CH1N , GPIOB, GPIO_PIN_13 , GPIO_AF1_TIM1                      },
    { TIM1  , CH1N , GPIOE, GPIO_PIN_8  , GPIO_AF1_TIM1                      },
    { TIM1  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF1_TIM1                      },
    { TIM1  , CH2  , GPIOA, GPIO_PIN_9  , GPIO_AF1_TIM1                      },
    { TIM1  , CH2  , GPIOE, GPIO_PIN_11 , GPIO_AF1_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF1_TIM1                      },
    { TIM1  , CH2N , GPIOE, GPIO_PIN_10 , GPIO_AF1_TIM1                      },
    { TIM1  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3  , GPIOA, GPIO_PIN_10 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3  , GPIOE, GPIO_PIN_13 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF1_TIM1                      },
    { TIM1  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF1_TIM1                      },
    { TIM1  , CH3N , GPIOE, GPIO_PIN_12 , GPIO_AF1_TIM1                      },
    { TIM1  , CH4  , GPIOE, GPIO_PIN_14 , GPIO_AF1_TIM1                      },
    { TIM1  , CH4  , GPIOA, GPIO_PIN_11 , GPIO_AF1_TIM1                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_5  , GPIO_AF1_TIM2                      },
    { TIM2  , CH1  , GPIOA, GPIO_PIN_15 , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF1_TIM2                      },
    { TIM2  , CH2  , GPIOB, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOB, GPIO_PIN_10 , GPIO_AF1_TIM2                      },
    { TIM2  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOB, GPIO_PIN_11 , GPIO_AF1_TIM2                      },
    { TIM2  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF1_TIM2                      },
    { TIM3  , CH1  , GPIOB, GPIO_PIN_4  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH1  , GPIOA, GPIO_PIN_6  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOB, GPIO_PIN_5  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH2  , GPIOA, GPIO_PIN_7  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF2_TIM3                      },
    { TIM3  , CH3  , GPIOB, GPIO_PIN_0  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF2_TIM3                      },
    { TIM3  , CH4  , GPIOB, GPIO_PIN_1  , GPIO_AF2_TIM3                      },
    { TIM4  , CH1  , GPIOD, GPIO_PIN_12 , GPIO_AF2_TIM4                      },
    { TIM4  , CH1  , GPIOB, GPIO_PIN_6  , GPIO_AF2_TIM4                      },
    { TIM4  , CH2  , GPIOD, GPIO_PIN_13 , GPIO_AF2_TIM4                      },
    { TIM4  , CH2  , GPIOB, GPIO_PIN_7  , GPIO_AF2_TIM4                      },
    { TIM4  , CH3  , GPIOB, GPIO_PIN_8  , GPIO_AF2_TIM4                      },
    { TIM4  , CH3  , GPIOD, GPIO_PIN_14 , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOB, GPIO_PIN_9  , GPIO_AF2_TIM4                      },
    { TIM4  , CH4  , GPIOD, GPIO_PIN_15 , GPIO_AF2_TIM4                      },
    { TIM5  , CH1  , GPIOA, GPIO_PIN_0  , GPIO_AF2_TIM5                      },
    { TIM5  , CH1  , GPIOH, GPIO_PIN_10 , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOA, GPIO_PIN_1  , GPIO_AF2_TIM5                      },
    { TIM5  , CH2  , GPIOH, GPIO_PIN_11 , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOA, GPIO_PIN_2  , GPIO_AF2_TIM5                      },
    { TIM5  , CH3  , GPIOH, GPIO_PIN_12 , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOI, GPIO_PIN_0  , GPIO_AF2_TIM5                      },
    { TIM5  , CH4  , GPIOA, GPIO_PIN_3  , GPIO_AF2_TIM5                      },
    { TIM8  , CH1  , GPIOC, GPIO_PIN_6  , GPIO_AF3_TIM8                      },
    { TIM8  , CH1  , GPIOI, GPIO_PIN_5  , GPIO_AF3_TIM8                      },
    { TIM8  , CH1N , GPIOH, GPIO_PIN_13 , GPIO_AF3_TIM8                      },
    { TIM8  , CH1N , GPIOA, GPIO_PIN_5  , GPIO_AF3_TIM8                      },
    { TIM8  , CH1N , GPIOA, GPIO_PIN_7  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2  , GPIOC, GPIO_PIN_7  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2  , GPIOI, GPIO_PIN_6  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2N , GPIOH, GPIO_PIN_14 , GPIO_AF3_TIM8                      },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_0  , GPIO_AF3_TIM8                      },
    { TIM8  , CH2N , GPIOB, GPIO_PIN_14 , GPIO_AF3_TIM8                      },
    { TIM8  , CH3  , GPIOC, GPIO_PIN_8  , GPIO_AF3_TIM8                      },
    { TIM8  , CH3  , GPIOI, GPIO_PIN_7  , GPIO_AF3_TIM8                      },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_15 , GPIO_AF3_TIM8                      },
    { TIM8  , CH3N , GPIOH, GPIO_PIN_15 , GPIO_AF3_TIM8                      },
    { TIM8  , CH3N , GPIOB, GPIO_PIN_1  , GPIO_AF3_TIM8                      },
    { TIM8  , CH4  , GPIOI, GPIO_PIN_2  , GPIO_AF3_TIM8                      },
    { TIM8  , CH4  , GPIOC, GPIO_PIN_9  , GPIO_AF3_TIM8                      },
    { TIM9  , CH1  , GPIOE, GPIO_PIN_5  , GPIO_AF3_TIM9                      },
    { TIM9  , CH1  , GPIOA, GPIO_PIN_2  , GPIO_AF3_TIM9                      },
    { TIM9  , CH2  , GPIOE, GPIO_PIN_6  , GPIO_AF3_TIM9                      },
    { TIM9  , CH2  , GPIOA, GPIO_PIN_3  , GPIO_AF3_TIM9                      },
    { USART1, RX   , GPIOA, GPIO_PIN_10 , GPIO_AF7_USART1                    },
    { USART1, RX   , GPIOB, GPIO_PIN_7  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOA, GPIO_PIN_9  , GPIO_AF7_USART1                    },
    { USART1, TX   , GPIOB, GPIO_PIN_6  , GPIO_AF7_USART1                    },
    { USART2, RX   , GPIOD, GPIO_PIN_6  , GPIO_AF7_USART2                    },
    { USART2, RX   , GPIOA, GPIO_PIN_3  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOA, GPIO_PIN_2  , GPIO_AF7_USART2                    },
    { USART2, TX   , GPIOD, GPIO_PIN_5  , GPIO_AF7_USART2                    },
    { USART3, RX   , GPIOB, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOC, GPIO_PIN_11 , GPIO_AF7_USART3                    },
    { USART3, RX   , GPIOD, GPIO_PIN_9  , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOB, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOC, GPIO_PIN_10 , GPIO_AF7_USART3                    },
    { USART3, TX   , GPIOD, GPIO_PIN_8  , GPIO_AF7_USART3                    },
    { USART6, RX   , GPIOC, GPIO_PIN_7  , GPIO_AF8_USART6                    },
    { USART6, RX   , GPIOG, GPIO_PIN_9  , GPIO_AF8_USART6                    },
    { USART6, TX   , GPIOG, GPIO_PIN_14 , GPIO_AF8_USART6                    },
    { USART6, TX   , GPIOC, GPIO_PIN_6  , GPIO_AF8_USART6                    },
};
