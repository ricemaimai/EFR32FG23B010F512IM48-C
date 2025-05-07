#ifndef PIN_CONFIG_H
#define PIN_CONFIG_H

// $[CMU]
// [CMU]$

// $[LFXO]
// [LFXO]$

// $[PRS.ASYNCH0]
// [PRS.ASYNCH0]$

// $[PRS.ASYNCH1]
// [PRS.ASYNCH1]$

// $[PRS.ASYNCH2]
// [PRS.ASYNCH2]$

// $[PRS.ASYNCH3]
// [PRS.ASYNCH3]$

// $[PRS.ASYNCH4]
// [PRS.ASYNCH4]$

// $[PRS.ASYNCH5]
// [PRS.ASYNCH5]$

// $[PRS.ASYNCH6]
// [PRS.ASYNCH6]$

// $[PRS.ASYNCH7]
// [PRS.ASYNCH7]$

// $[PRS.ASYNCH8]
// [PRS.ASYNCH8]$

// $[PRS.ASYNCH9]
// [PRS.ASYNCH9]$

// $[PRS.ASYNCH10]
// [PRS.ASYNCH10]$

// $[PRS.ASYNCH11]
// [PRS.ASYNCH11]$

// $[PRS.SYNCH0]
// [PRS.SYNCH0]$

// $[PRS.SYNCH1]
// [PRS.SYNCH1]$

// $[PRS.SYNCH2]
// [PRS.SYNCH2]$

// $[PRS.SYNCH3]
// [PRS.SYNCH3]$

// $[GPIO]
// [GPIO]$

// $[TIMER0]
// [TIMER0]$

// $[TIMER1]
// [TIMER1]$

// $[TIMER2]
// [TIMER2]$

// $[TIMER3]
// [TIMER3]$

// $[TIMER4]
// [TIMER4]$

// $[USART0]
// [USART0]$

// $[I2C1]
// [I2C1]$

// $[EUSART1]
// EUSART1 RX on PC03
#ifndef EUSART1_RX_PORT                         
#define EUSART1_RX_PORT                          gpioPortC
#endif
#ifndef EUSART1_RX_PIN                          
#define EUSART1_RX_PIN                           3
#endif

// EUSART1 TX on PC02
#ifndef EUSART1_TX_PORT                         
#define EUSART1_TX_PORT                          gpioPortC
#endif
#ifndef EUSART1_TX_PIN                          
#define EUSART1_TX_PIN                           2
#endif

// [EUSART1]$

// $[EUSART2]
// [EUSART2]$

// $[LCD]
// [LCD]$

// $[KEYSCAN]
// [KEYSCAN]$

// $[LETIMER0]
// [LETIMER0]$

// $[IADC0]
// [IADC0]$

// $[ACMP0]
// [ACMP0]$

// $[ACMP1]
// [ACMP1]$

// $[VDAC0]
// [VDAC0]$

// $[PCNT0]
// [PCNT0]$

// $[LESENSE]
// [LESENSE]$

// $[HFXO0]
// [HFXO0]$

// $[I2C0]
// [I2C0]$

// $[EUSART0]
// [EUSART0]$

// $[PTI]
// [PTI]$

// $[MODEM]
// [MODEM]$

// $[CUSTOM_PIN_NAME]
#ifndef PA00_Push-pull_PORT                     
#define PA00_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA00_Push-pull_PIN                      
#define PA00_Push-pull_PIN                       0
#endif

#ifndef _PORT                                   
#define _PORT                                    gpioPortA
#endif
#ifndef _PIN                                    
#define _PIN                                     1
#endif

#ifndef PA04_Push-pull_PORT                     
#define PA04_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA04_Push-pull_PIN                      
#define PA04_Push-pull_PIN                       4
#endif

#ifndef PA05_Push-pull_PORT                     
#define PA05_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA05_Push-pull_PIN                      
#define PA05_Push-pull_PIN                       5
#endif

#ifndef PA06_Push-pull_PORT                     
#define PA06_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA06_Push-pull_PIN                      
#define PA06_Push-pull_PIN                       6
#endif

#ifndef PA07_Push-pull_PORT                     
#define PA07_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA07_Push-pull_PIN                      
#define PA07_Push-pull_PIN                       7
#endif

#ifndef PA08_Push-pull_PORT                     
#define PA08_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA08_Push-pull_PIN                      
#define PA08_Push-pull_PIN                       8
#endif

#ifndef PA09_Push-pull_PORT                     
#define PA09_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA09_Push-pull_PIN                      
#define PA09_Push-pull_PIN                       9
#endif

#ifndef PA10_Push-pull_PORT                     
#define PA10_Push-pull_PORT                      gpioPortA
#endif
#ifndef PA10_Push-pull_PIN                      
#define PA10_Push-pull_PIN                       10
#endif

#ifndef PB00_Push-pull_PORT                     
#define PB00_Push-pull_PORT                      gpioPortB
#endif
#ifndef PB00_Push-pull_PIN                      
#define PB00_Push-pull_PIN                       0
#endif

#ifndef PB01_Push-pull_PORT                     
#define PB01_Push-pull_PORT                      gpioPortB
#endif
#ifndef PB01_Push-pull_PIN                      
#define PB01_Push-pull_PIN                       1
#endif

#ifndef PB02_Push-pull_PORT                     
#define PB02_Push-pull_PORT                      gpioPortB
#endif
#ifndef PB02_Push-pull_PIN                      
#define PB02_Push-pull_PIN                       2
#endif

#ifndef PB03_Push-pull_PORT                     
#define PB03_Push-pull_PORT                      gpioPortB
#endif
#ifndef PB03_Push-pull_PIN                      
#define PB03_Push-pull_PIN                       3
#endif

#ifndef PC00_Push-pull_PORT                     
#define PC00_Push-pull_PORT                      gpioPortC
#endif
#ifndef PC00_Push-pull_PIN                      
#define PC00_Push-pull_PIN                       0
#endif

#ifndef PC01_Input_PORT                         
#define PC01_Input_PORT                          gpioPortC
#endif
#ifndef PC01_Input_PIN                          
#define PC01_Input_PIN                           1
#endif

#ifndef TX_PORT                                 
#define TX_PORT                                  gpioPortC
#endif
#ifndef TX_PIN                                  
#define TX_PIN                                   2
#endif

#ifndef RX_PORT                                 
#define RX_PORT                                  gpioPortC
#endif
#ifndef RX_PIN                                  
#define RX_PIN                                   3
#endif

#ifndef PC04_Input_PORT                         
#define PC04_Input_PORT                          gpioPortC
#endif
#ifndef PC04_Input_PIN                          
#define PC04_Input_PIN                           4
#endif

#ifndef PC05_Input_PORT                         
#define PC05_Input_PORT                          gpioPortC
#endif
#ifndef PC05_Input_PIN                          
#define PC05_Input_PIN                           5
#endif

#ifndef PC06_Push-pull_PORT                     
#define PC06_Push-pull_PORT                      gpioPortC
#endif
#ifndef PC06_Push-pull_PIN                      
#define PC06_Push-pull_PIN                       6
#endif

#ifndef PC07_Input_PORT                         
#define PC07_Input_PORT                          gpioPortC
#endif
#ifndef PC07_Input_PIN                          
#define PC07_Input_PIN                           7
#endif

#ifndef PC08_Input_PORT                         
#define PC08_Input_PORT                          gpioPortC
#endif
#ifndef PC08_Input_PIN                          
#define PC08_Input_PIN                           8
#endif

#ifndef PC09_Input_PORT                         
#define PC09_Input_PORT                          gpioPortC
#endif
#ifndef PC09_Input_PIN                          
#define PC09_Input_PIN                           9
#endif

#ifndef LED1_PORT                               
#define LED1_PORT                                gpioPortD
#endif
#ifndef LED1_PIN                                
#define LED1_PIN                                 0
#endif

#ifndef LED2_PORT                               
#define LED2_PORT                                gpioPortD
#endif
#ifndef LED2_PIN                                
#define LED2_PIN                                 1
#endif

#ifndef PD02_Input_PORT                         
#define PD02_Input_PORT                          gpioPortD
#endif
#ifndef PD02_Input_PIN                          
#define PD02_Input_PIN                           2
#endif

#ifndef PD03_Push-pull_PORT                     
#define PD03_Push-pull_PORT                      gpioPortD
#endif
#ifndef PD03_Push-pull_PIN                      
#define PD03_Push-pull_PIN                       3
#endif

#ifndef PD04_Push-pull_PORT                     
#define PD04_Push-pull_PORT                      gpioPortD
#endif
#ifndef PD04_Push-pull_PIN                      
#define PD04_Push-pull_PIN                       4
#endif

#ifndef PD05_Push-pull_PORT                     
#define PD05_Push-pull_PORT                      gpioPortD
#endif
#ifndef PD05_Push-pull_PIN                      
#define PD05_Push-pull_PIN                       5
#endif

// [CUSTOM_PIN_NAME]$

#endif // PIN_CONFIG_H

