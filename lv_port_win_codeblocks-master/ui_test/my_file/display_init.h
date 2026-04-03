#ifndef __DISPLAY_INIT_H__
#define __DISPLAY_INIT_H__

#include "lvgl.h"
#include <stdio.h>
#include "../../lv_drivers/win32drv/win32drv.h"

#include "../screens/main_menu/ui_menu_main.h"

#include "../screens/real_data_menu/ui_real_data.h"
#include "../screens/real_data_menu/ui_AI.h"
#include "../screens/real_data_menu/ui_DI.h"
#include "../screens/real_data_menu/ui_point_ai.h"
#include "../screens/real_data_menu/ui_all_ai.h"
#include "../screens/real_data_menu/ui_point_di.h"
#include "../screens/real_data_menu/ui_all_di.h"

#include "../screens/event_record_menu/ui_event_record.h"
#include "../screens/event_record_menu/ui_SOE.h"
#include "../screens/event_record_menu/ui_fault_record.h"

#include "../screens/dz_param_menu/ui_dz_param.h"
#include "../screens/dz_param_menu/ui_dz_set.h"
#include "../screens/dz_param_menu/ui_gy3_param.h"
#include "../screens/dz_param_menu/ui_run_param.h"
#include "../screens/dz_param_menu/ui_act_param.h"
#include "../screens/dz_param_menu/ui_gy4_param.h"
#include "../screens/dz_param_menu/ui_comrun_param.h"
#include "../screens/dz_param_menu/ui_comact_param.h"
#include "../screens/dz_param_menu/ui_jgrun_param.h"
#include "../screens/dz_param_menu/ui_jgact_param.h"

#include "../screens/com_param_menu/ui_com_param.h"
#include "../screens/com_param_menu/ui_com_param2.h"
#include "../screens/com_param_menu/ui_serial_param.h"
#include "../screens/com_param_menu/ui_com_param3.h"
#include "../screens/com_param_menu/ui_101_param.h"
#include "../screens/com_param_menu/ui_104_param.h"

#include "../screens/sys_maint_menu/ui_sys_maint.h"

#include "../screens/clock_set_menu/ui_clock_set.h"

#include "../screens/dev_manage_menu/ui_dev_manage.h"
#include "../screens/dev_manage_menu/ui_dev_version.h"
#include "../screens/dev_manage_menu/ui_lcd_version.h"
#include "../screens/dev_manage_menu/ui_password.h"
#include "../screens/dev_manage_menu/ui_ai_switch.h"

#include "../screens/fa_state_menu/ui_fa_state.h"

// 按钮的所有状态（默认/聚焦/按键聚焦/按下/勾选/禁用）
#define BTN_ALL_STATES (LV_STATE_DEFAULT | LV_STATE_FOCUSED | LV_STATE_FOCUS_KEY | \
                            LV_STATE_PRESSED | LV_STATE_CHECKED | LV_STATE_DISABLED)

void menu_style_init(void);
void lv_obj_set_button_init(lv_obj_t * obj, lv_coord_t width, lv_coord_t height);
void lv_obj_set_label_init(lv_obj_t * obj, const char * text, lv_align_t align);
void menu_display_init(void);
void menu_display_destroy(void);
#endif
