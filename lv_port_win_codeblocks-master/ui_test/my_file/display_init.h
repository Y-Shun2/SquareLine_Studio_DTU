#ifndef __DISPLAY_INIT_H__
#define __DISPLAY_INIT_H__

#include "lvgl.h"
#include <stdio.h>
#include "../../lv_drivers/win32drv/win32drv.h"

#include "../screens/first_level_menu/ui_menu_main.h"
#include "../screens/first_level_menu/ui_menu_main.h"
#include "../screens/first_level_menu/ui_real_data.h"
#include "../screens/first_level_menu/ui_dev_manage.h"
#include "../screens/first_level_menu/ui_event_record.h"
#include "../screens/first_level_menu/ui_com_param.h"
#include "../screens/first_level_menu/ui_dz_param.h"
#include "../screens/second_level_menu/ui_AI.h"
#include "../screens/second_level_menu/ui_com_param2.h"
#include "../screens/second_level_menu/ui_dz_set.h"
#include "../screens/second_level_menu/ui_DO.h"

void menu_style_init(void);
void lv_obj_set_button_init(lv_obj_t * obj, lv_coord_t width, lv_coord_t height);
void lv_obj_set_label_init(lv_obj_t * obj, const char * text, lv_align_t align);
void menu_display_init(void);
void menu_display_destroy(void);
#endif
