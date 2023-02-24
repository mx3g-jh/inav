/*
 * This file is part of Cleanflight and Betaflight.
 *
 * Cleanflight and Betaflight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include <stdint.h>

#include <platform.h>
#include "drivers/io.h"
#include "drivers/pwm_mapping.h"
#include "drivers/timer.h"
#include "drivers/bus.h"
#include "drivers/dma.h"
#include "drivers/timer_def.h"

timerHardware_t timerHardware[] = {
    DEF_TIM(TIM9, CH2, PA3, TIM_USE_PPM,                                               0, 0), // PPM, DMA2_ST6

    DEF_TIM(TIM3, CH3, PB0,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,                       0, 0), // M1 , DMA1_ST7
    DEF_TIM(TIM3, CH4, PB1,  TIM_USE_MC_MOTOR | TIM_USE_FW_MOTOR,                       0, 0), // M2 , DMA1_ST2
    DEF_TIM(TIM3, CH1, PB4,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,                       0, 0), // M3 , DMA2_ST2
    DEF_TIM(TIM2, CH2, PB3,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO,                       0, 0), // M4 , DMA2_ST4
    DEF_TIM(TIM8, CH4, PC9,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_MC_SERVO,    0, 0), // M5 , DMA2_ST7
    DEF_TIM(TIM8, CH3, PC8,  TIM_USE_MC_MOTOR | TIM_USE_FW_SERVO | TIM_USE_MC_SERVO,    0, 0), // M6 , DMA1_ST1

    DEF_TIM(TIM1, CH1, PA8, TIM_USE_LED,                                               0, 0),     // LED STRIP
    // DEF_TIM(TIM4, CH3, PB8,  TIM_USE_CAMERA_CONTROL,                                    0, 0), // FC CAM
};

const int timerHardwareCount = sizeof(timerHardware) / sizeof(timerHardware[0]);