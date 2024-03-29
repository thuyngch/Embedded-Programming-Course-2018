/*
 * task.c
 *
 *  Created on: Mar 17, 2018
 *      Author: Quoc Bao
 */
#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_types.h"
#include "inc/hw_ints.h"
#include "driverlib/systick.h"
#include "driverlib/sysctl.h"
#include "driverlib/interrupt.h"
#include "driverlib/debug.h"
#include "task.h"

tSchedulerTask g_psSchedulerTable[2] = {
    {ledRedTask, 0, 50, 0, 1},  // Call every 50ms
    {ledGreenTask, 0, 0, 1, 1}  // Call immediately
};

 uint32_t g_ui32SchedulerNumTasks = 2;
