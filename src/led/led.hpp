/**
 * 
 * @file led.hpp
 * 
 * @brief led management class
 * 
 * @author fede (rouxfederico@gmail.com)
 * 
 */

// extern TaskHandle_t  toggle_task_handle;   /**< Reference to LED0 toggling FreeRTOS task. */
// extern TimerHandle_t toggle_timer_handle;  /**< Reference to LED1 toggling FreeRTOS timer. */

// extern void toggle_timer_callback (void * pvParameter);
// extern void toggle_task_function (void * pvParameter);

#ifndef __LED_HPP

#define __LED_HPP


namespace led {
extern TaskHandle_t  toggle_task_handle ;   /**< Reference to LED0 toggling FreeRTOS task. */
extern TimerHandle_t toggle_timer_handle;  /**< Reference to LED1 toggling FreeRTOS timer. */


extern  int32_t task_delay;           /**< Task delay. Delays a LED0 task for 200 ms */
extern  int32_t timer_period;          /**< Timer period. LED1 timer will expire after 1000 ms */

extern void toggle_timer_callback (void * pvParameter);
extern void toggle_task_function (void * pvParameter);

};

#endif