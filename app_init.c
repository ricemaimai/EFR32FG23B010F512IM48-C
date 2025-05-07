/***************************************************************************//**
 * @file
 * @brief app_init.c
 *******************************************************************************
 * # License
 * <b>Copyright 2018 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

// -----------------------------------------------------------------------------
//                                   Includes
// -----------------------------------------------------------------------------
#include "sl_rail_util_init.h"

#include "em_gpio.h"
#include "sl_udelay.h"
#include "stdio.h"
#include <stdio.h>

// -----------------------------------------------------------------------------
//                                Defines
// -----------------------------------------------------------------------------
//LED 用の GPIO　設定
#define LED1_PORT gpioPortD
#define LED1_PIN  0
#define LED2_PORT gpioPortD
#define LED2_PIN  1

// -----------------------------------------------------------------------------
//                              Macros and Typedefs
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Static Function Declarations
// -----------------------------------------------------------------------------
//10回点滅
void LED_blinking_10times(){
  // LED 点滅
  for(int i =0; i<10; i++){
      GPIO_PinOutClear(LED1_PORT, LED1_PIN);
      GPIO_PinOutClear(LED2_PORT, LED2_PIN);
      sl_udelay_wait(100000);
      GPIO_PinOutSet(LED1_PORT, LED1_PIN);
      GPIO_PinOutSet(LED2_PORT, LED2_PIN);
      sl_udelay_wait(100000);
  }
}

// -----------------------------------------------------------------------------
//                                Global Variables
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                                Static Variables
// -----------------------------------------------------------------------------

// -----------------------------------------------------------------------------
//                          Public Function Definitions
// -----------------------------------------------------------------------------
/******************************************************************************
 * The function is used for some basic initialization related to the app.
 *****************************************************************************/
RAIL_Handle_t app_init(void)
{
  // Get RAIL handle, used later by the application
  RAIL_Handle_t rail_handle = sl_rail_util_get_handle(SL_RAIL_UTIL_HANDLE_INST0);


   LED_blinking_10times();


  /////////////////////////////////////////////////////////////////////////////
  // Put your application init code here!                                    //
  // This is called once during start-up.                                    //
  /////////////////////////////////////////////////////////////////////////////

  return rail_handle;
}

// -----------------------------------------------------------------------------
//                          Static Function Definitions
// -----------------------------------------------------------------------------
