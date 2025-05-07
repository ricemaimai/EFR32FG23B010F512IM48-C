#include "sl_emlib_gpio_simple_init.h"
#include "sl_emlib_gpio_init_LED1_config.h"
#include "sl_emlib_gpio_init_LED2_config.h"
#include "sl_emlib_gpio_init_PA00_config.h"
#include "sl_emlib_gpio_init_PA04_config.h"
#include "sl_emlib_gpio_init_PA05_config.h"
#include "sl_emlib_gpio_init_PA06_config.h"
#include "sl_emlib_gpio_init_PA07_config.h"
#include "sl_emlib_gpio_init_PA08_config.h"
#include "sl_emlib_gpio_init_PA09_config.h"
#include "sl_emlib_gpio_init_PA10_config.h"
#include "sl_emlib_gpio_init_PB00_config.h"
#include "sl_emlib_gpio_init_PB01_config.h"
#include "sl_emlib_gpio_init_PB02_config.h"
#include "sl_emlib_gpio_init_PB03_config.h"
#include "sl_emlib_gpio_init_PC00_config.h"
#include "sl_emlib_gpio_init_PC01_config.h"
#include "sl_emlib_gpio_init_PC04_config.h"
#include "sl_emlib_gpio_init_PC05_config.h"
#include "sl_emlib_gpio_init_PC06_config.h"
#include "sl_emlib_gpio_init_PC07_config.h"
#include "sl_emlib_gpio_init_PC08_config.h"
#include "sl_emlib_gpio_init_PC09_config.h"
#include "sl_emlib_gpio_init_PD02_config.h"
#include "sl_emlib_gpio_init_PD03_config.h"
#include "sl_emlib_gpio_init_PD04_config.h"
#include "sl_emlib_gpio_init_PD05_config.h"
#include "em_gpio.h"
#include "em_cmu.h"

void sl_emlib_gpio_simple_init(void)
{
  CMU_ClockEnable(cmuClock_GPIO, true);
  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_LED1_PORT,
                  SL_EMLIB_GPIO_INIT_LED1_PIN,
                  SL_EMLIB_GPIO_INIT_LED1_MODE,
                  SL_EMLIB_GPIO_INIT_LED1_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_LED2_PORT,
                  SL_EMLIB_GPIO_INIT_LED2_PIN,
                  SL_EMLIB_GPIO_INIT_LED2_MODE,
                  SL_EMLIB_GPIO_INIT_LED2_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA00_PORT,
                  SL_EMLIB_GPIO_INIT_PA00_PIN,
                  SL_EMLIB_GPIO_INIT_PA00_MODE,
                  SL_EMLIB_GPIO_INIT_PA00_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA04_PORT,
                  SL_EMLIB_GPIO_INIT_PA04_PIN,
                  SL_EMLIB_GPIO_INIT_PA04_MODE,
                  SL_EMLIB_GPIO_INIT_PA04_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA05_PORT,
                  SL_EMLIB_GPIO_INIT_PA05_PIN,
                  SL_EMLIB_GPIO_INIT_PA05_MODE,
                  SL_EMLIB_GPIO_INIT_PA05_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA06_PORT,
                  SL_EMLIB_GPIO_INIT_PA06_PIN,
                  SL_EMLIB_GPIO_INIT_PA06_MODE,
                  SL_EMLIB_GPIO_INIT_PA06_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA07_PORT,
                  SL_EMLIB_GPIO_INIT_PA07_PIN,
                  SL_EMLIB_GPIO_INIT_PA07_MODE,
                  SL_EMLIB_GPIO_INIT_PA07_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA08_PORT,
                  SL_EMLIB_GPIO_INIT_PA08_PIN,
                  SL_EMLIB_GPIO_INIT_PA08_MODE,
                  SL_EMLIB_GPIO_INIT_PA08_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA09_PORT,
                  SL_EMLIB_GPIO_INIT_PA09_PIN,
                  SL_EMLIB_GPIO_INIT_PA09_MODE,
                  SL_EMLIB_GPIO_INIT_PA09_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PA10_PORT,
                  SL_EMLIB_GPIO_INIT_PA10_PIN,
                  SL_EMLIB_GPIO_INIT_PA10_MODE,
                  SL_EMLIB_GPIO_INIT_PA10_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PB00_PORT,
                  SL_EMLIB_GPIO_INIT_PB00_PIN,
                  SL_EMLIB_GPIO_INIT_PB00_MODE,
                  SL_EMLIB_GPIO_INIT_PB00_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PB01_PORT,
                  SL_EMLIB_GPIO_INIT_PB01_PIN,
                  SL_EMLIB_GPIO_INIT_PB01_MODE,
                  SL_EMLIB_GPIO_INIT_PB01_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PB02_PORT,
                  SL_EMLIB_GPIO_INIT_PB02_PIN,
                  SL_EMLIB_GPIO_INIT_PB02_MODE,
                  SL_EMLIB_GPIO_INIT_PB02_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PB03_PORT,
                  SL_EMLIB_GPIO_INIT_PB03_PIN,
                  SL_EMLIB_GPIO_INIT_PB03_MODE,
                  SL_EMLIB_GPIO_INIT_PB03_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC00_PORT,
                  SL_EMLIB_GPIO_INIT_PC00_PIN,
                  SL_EMLIB_GPIO_INIT_PC00_MODE,
                  SL_EMLIB_GPIO_INIT_PC00_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC01_PORT,
                  SL_EMLIB_GPIO_INIT_PC01_PIN,
                  SL_EMLIB_GPIO_INIT_PC01_MODE,
                  SL_EMLIB_GPIO_INIT_PC01_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC04_PORT,
                  SL_EMLIB_GPIO_INIT_PC04_PIN,
                  SL_EMLIB_GPIO_INIT_PC04_MODE,
                  SL_EMLIB_GPIO_INIT_PC04_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC05_PORT,
                  SL_EMLIB_GPIO_INIT_PC05_PIN,
                  SL_EMLIB_GPIO_INIT_PC05_MODE,
                  SL_EMLIB_GPIO_INIT_PC05_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC06_PORT,
                  SL_EMLIB_GPIO_INIT_PC06_PIN,
                  SL_EMLIB_GPIO_INIT_PC06_MODE,
                  SL_EMLIB_GPIO_INIT_PC06_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC07_PORT,
                  SL_EMLIB_GPIO_INIT_PC07_PIN,
                  SL_EMLIB_GPIO_INIT_PC07_MODE,
                  SL_EMLIB_GPIO_INIT_PC07_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC08_PORT,
                  SL_EMLIB_GPIO_INIT_PC08_PIN,
                  SL_EMLIB_GPIO_INIT_PC08_MODE,
                  SL_EMLIB_GPIO_INIT_PC08_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PC09_PORT,
                  SL_EMLIB_GPIO_INIT_PC09_PIN,
                  SL_EMLIB_GPIO_INIT_PC09_MODE,
                  SL_EMLIB_GPIO_INIT_PC09_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PD02_PORT,
                  SL_EMLIB_GPIO_INIT_PD02_PIN,
                  SL_EMLIB_GPIO_INIT_PD02_MODE,
                  SL_EMLIB_GPIO_INIT_PD02_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PD03_PORT,
                  SL_EMLIB_GPIO_INIT_PD03_PIN,
                  SL_EMLIB_GPIO_INIT_PD03_MODE,
                  SL_EMLIB_GPIO_INIT_PD03_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PD04_PORT,
                  SL_EMLIB_GPIO_INIT_PD04_PIN,
                  SL_EMLIB_GPIO_INIT_PD04_MODE,
                  SL_EMLIB_GPIO_INIT_PD04_DOUT);

  GPIO_PinModeSet(SL_EMLIB_GPIO_INIT_PD05_PORT,
                  SL_EMLIB_GPIO_INIT_PD05_PIN,
                  SL_EMLIB_GPIO_INIT_PD05_MODE,
                  SL_EMLIB_GPIO_INIT_PD05_DOUT);
}
