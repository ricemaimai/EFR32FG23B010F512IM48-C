#ifndef SL_EMLIB_GPIO_INIT_PA09_CONFIG_H
#define SL_EMLIB_GPIO_INIT_PA09_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>

// <h>Pin settings

// <o SL_EMLIB_GPIO_INIT_PA09_MODE> Pin mode
// <gpioModeDisabled=> Disabled
// <gpioModeInput=> Input
// <gpioModeInputPull=> Input with pull-up/down
// <gpioModeInputPullFilter=> Input with pull-up/down and filter
// <gpioModePushPull=> Push-pull output
// <gpioModePushPullAlternate=> Push-pull output (alternate)
// <gpioModeWiredOr=> Open-source output
// <gpioModeWiredOrPullDown=> Open-source output with pull-down
// <gpioModeWiredAnd=> Open-drain output
// <gpioModeWiredAndFilter=> Open-drain output with filter
// <gpioModeWiredAndPullUp=> Open-drain output with pull-up
// <gpioModeWiredAndPullUpFilter=> Open-drain output with pull-up and filter
// <gpioModeWiredAndAlternate=> Open-drain output (alternate)
// <gpioModeWiredAndAlternateFilter=> Open-drain output with filter (alternate)
// <gpioModeWiredAndAlternatePullUp=> Open-drain output with pull-up (alternate)
// <gpioModeWiredAndAlternatePullUpFilter=> Open-drain output with pull-up and filter (alternate)
// <i> Default: gpioModePushPull
#define SL_EMLIB_GPIO_INIT_PA09_MODE        gpioModePushPull

// <o SL_EMLIB_GPIO_INIT_PA09_DOUT> DOUT <0-1>
// <i> In push-pull mode: The drive direction for the pin
// <i> In input mode: Pull-up (1) or pull-down (0)
// <i> In open-source mode: Set to 0 for the idle state
// <i> In open-drain mode: Set to 1 for the idle state
// <i> Default: 0
#define SL_EMLIB_GPIO_INIT_PA09_DOUT        0

// </h> end pin settings

// <<< end of configuration section >>>

// <<< sl:start pin_tool >>>

// <gpio> SL_EMLIB_GPIO_INIT_PA09
// $[GPIO_SL_EMLIB_GPIO_INIT_PA09]
#ifndef SL_EMLIB_GPIO_INIT_PA09_PORT            
#define SL_EMLIB_GPIO_INIT_PA09_PORT             gpioPortA
#endif
#ifndef SL_EMLIB_GPIO_INIT_PA09_PIN             
#define SL_EMLIB_GPIO_INIT_PA09_PIN              9
#endif
// [GPIO_SL_EMLIB_GPIO_INIT_PA09]$

// <<< sl:end pin_tool >>>

#endif // SL_EMLIB_GPIO_INIT_PA09_CONFIG_H
