#ifndef __DISPLAY_INIT_H__
#define __DISPLAY_INIT_H__

#include "lvgl.h"
#include <stdio.h>
#include "../../lv_drivers/win32drv/win32drv.h"

#include "../screens/main_menu/ui_menu_main.h"
#include "../screens/main_menu/ui_password_check.h"
#include "../screens/main_menu/ui_popup_window.h"

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

typedef enum {
    UNEDIT_STATE = 0,   // 未编辑状态,返回键有效
    EDIT_STATE = 1,     // 编辑状态,返回键无效
} ui_edit_state_t;

typedef enum {
    LOGIN_UNSET = 0,    // 未登录状态,需要密码检查
    LOGIN_SUCCESS = 1,  // 登录成功状态,不需要密码检查
} login_status_t;

typedef enum {
    UI_NONE = 0,
    UI_CLOCK_SET,
    UI_PASSWORD_CHECK,
    UI_PASSWORD,
} ui_menu_t;// 用于关闭弹窗后跳转回原菜单

typedef enum{
    SET = 0,            // 已设置状态
    NO_SET,             // 未设置状态
    EMPTY               // 空状态
}set_status_t;

typedef enum {
    DZ_VIEW_MODE = 0,   // 定值查看模式
    DZ_SET_MODE = 1,    // 定值设置模式
}dz_mode_t;

typedef struct {
    int edit_idx;
} ui_data_t;

typedef struct {
    ui_edit_state_t edit_state;
    login_status_t login_status;
    ui_menu_t password_check_menu;
    ui_menu_t popup_window_menu;
    set_status_t set_status;
    dz_mode_t dz_mode;
    ui_data_t data;
} ui_display_t;

extern ui_display_t ui_display;
void ui_display_init(void);
void menu_style_init(void);
void lv_obj_set_button_init(lv_obj_t * obj, lv_coord_t width, lv_coord_t height);
void lv_obj_set_label_init(lv_obj_t * obj, const char * text, lv_align_t align);
void data_display_init(void);
void menu_display_init(void);
void menu_display_destroy(void);
#endif
