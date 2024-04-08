
#include <stdio.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_system.h"
#include "nvs_flash.h"

#include "lvgl.h"
#include "lv_port_disp.h"
#include "lv_port_indev.h"
#include "lv_port_fs.h"
#include "lv_demos.h"
#include "bsp_board.h" //1.������������ó�ʼ�����������ͷ�ļ�
#include "lvgl_init.h" //2.������LVGL�ӿڳ�ʼ�����������ͷ�ļ�
static const char *TAG = "main";


void app_main(void)
{
    // 1.������������ó�ʼ��
    sys_int();
    // 2.������LVGL�ӿڳ�ʼ��
    lvgl_init();

    lv_port_sem_take();
    // 3.LVGLӦ�ò�,�û�����
    //  lv_demo_widgets();
    // lv_demo_benchmark();
    lv_demo_music();
    // lv_demo_stress(); //LVGLӦ�ò�,�û�����
    lv_port_sem_give();

}
