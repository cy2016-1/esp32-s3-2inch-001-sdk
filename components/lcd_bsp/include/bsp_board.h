
#ifndef _BSP_BOARD_H_
#define _BSP_BOARD_H_

#include "driver/gpio.h"

#define GPIO_LCD_CS     (GPIO_NUM_39)
#define GPIO_LCD_SDA    (GPIO_NUM_47)
#define GPIO_LCD_SCK    (GPIO_NUM_48)
#define GPIO_LCD_BL     (GPIO_NUM_1)
#define LCD_WIDTH       (480)
#define LCD_HEIGHT      (480)
void sys_int(void);

#endif 

