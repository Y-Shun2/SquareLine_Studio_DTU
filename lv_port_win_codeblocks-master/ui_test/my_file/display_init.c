#include "display_init.h"
#include "../ui.h"
lv_style_t style_option_unselected; // 菜单选项"未选中"状态的样式
lv_style_t style_option_selected;   // 菜单选项"选中"状态的样式，底黑字
lv_style_t style_title;             // 标题样式

void menu_style_init(void)
{
    // --------------------- 初始化标题样式 ---------------------
    lv_style_init(&style_title);                                       // 初始化样式对象
    lv_style_set_bg_color(&style_title, lv_color_white());             // 设置背景颜色为白色
    lv_style_set_bg_opa(&style_title, LV_OPA_TRANSP);                   //设置背景不透明度为完全透明,LV_OPA_COVER完全不透明
    lv_style_set_text_color(&style_title, lv_color_black());           // 设置文字颜色为黑色
    lv_style_set_text_align(&style_title, LV_TEXT_ALIGN_CENTER);       // 设置文字对齐方式为居中
    lv_style_set_border_width(&style_title, 2);                        // 设置边框宽度为2像素
    lv_style_set_border_side(&style_title, LV_BORDER_SIDE_BOTTOM);     // 设置边框显示位置为底部
    lv_style_set_border_color(&style_title, lv_color_black());         // 设置边框颜色为黑色
    lv_style_set_pad_ver(&style_title, 5);                             // 设置垂直内边距为5像素
    lv_style_set_text_font(&style_title, &ui_font_Deng16);

    // --------------------- 初始化未选中选项样式 ---------------------
    lv_style_init(&style_option_unselected);
    lv_style_set_bg_color(&style_option_unselected, lv_color_white());
    lv_style_set_bg_opa(&style_option_unselected, LV_OPA_TRANSP);
    lv_style_set_text_color(&style_option_unselected, lv_color_black());
    lv_style_set_text_align(&style_option_unselected, LV_TEXT_ALIGN_CENTER);
    lv_style_set_pad_all(&style_option_unselected, 2);                  // 设置所有内边距为2像素
    lv_style_set_outline_width(&style_option_unselected, 0);            // 无轮廓
    lv_style_set_border_width(&style_option_unselected, 0);             // 无边框
    lv_style_set_shadow_width(&style_option_unselected, 0);             // 无阴影
    lv_style_set_radius(&style_option_unselected, 0);                   // 无圆角
    lv_style_set_text_font(&style_option_unselected, &ui_font_Deng16);
    // 让label尺寸自适应文字（不拉伸）
    lv_style_set_width(&style_option_unselected, LV_SIZE_CONTENT);
    lv_style_set_height(&style_option_unselected, LV_SIZE_CONTENT);

    lv_style_init(&style_option_selected);
    lv_style_set_bg_color(&style_option_selected, lv_color_black());
    lv_style_set_bg_opa(&style_option_selected, LV_OPA_COVER);
    lv_style_set_text_color(&style_option_selected, lv_color_white());
    lv_style_set_text_align(&style_option_selected, LV_TEXT_ALIGN_CENTER);
    lv_style_set_pad_all(&style_option_selected, 2);
    lv_style_set_outline_width(&style_option_selected, 0);
    lv_style_set_border_width(&style_option_selected, 0);
    lv_style_set_shadow_width(&style_option_selected, 0);
    lv_style_set_radius(&style_option_selected, 0);
    lv_style_set_text_font(&style_option_selected, &ui_font_Deng16);

    lv_style_set_width(&style_option_selected, LV_SIZE_CONTENT);
    lv_style_set_height(&style_option_selected, LV_SIZE_CONTENT);
}

void lv_obj_set_button_init(lv_obj_t * obj, lv_coord_t width, lv_coord_t height)
{

    lv_obj_remove_style_all(obj);   // 先清除对象的所有样式
    lv_obj_set_width(obj, width);
    lv_obj_set_height(obj, height);

    lv_obj_set_style_bg_opa(obj, LV_OPA_TRANSP, LV_PART_MAIN | BTN_ALL_STATES); // 背景透明
    lv_obj_set_style_border_width(obj, 0, LV_PART_MAIN | BTN_ALL_STATES);       // 无边框
    lv_obj_set_style_outline_width(obj, 0, LV_PART_MAIN | BTN_ALL_STATES);      // 无外边框
    lv_obj_set_style_shadow_width(obj, 0, LV_PART_MAIN | BTN_ALL_STATES);       // 无阴影
    lv_obj_set_style_translate_x(obj, 0, LV_PART_MAIN | BTN_ALL_STATES);        // 无平移
    lv_obj_set_style_translate_y(obj, 0, LV_PART_MAIN | BTN_ALL_STATES);        // 无平移
}

void lv_obj_set_label_init(lv_obj_t * obj, const char * text, lv_align_t align)
{
    lv_label_set_text(obj, text);
    lv_obj_set_align(obj, align);
}

void menu_display_init(void)
{
    data_time_init();

    ui_menu_main_screen_init();
    ui_real_data_screen_init();
    ui_AI_screen_init();
    ui_DI_screen_init();
    ui_point_ai_screen_init();
    ui_all_ai_screen_init();
    ui_point_di_screen_init();
    ui_all_di_screen_init();
    ui_event_record_screen_init();
    ui_SOE_screen_init();
    ui_fault_record_screen_init();
    ui_dz_param_screen_init();
    ui_dz_set_screen_init();
    ui_gy3_param_screen_init();
    ui_run_param_screen_init();
    ui_act_param_screen_init();
    ui_gy4_param_screen_init();
    ui_comrun_param_screen_init();
    ui_comact_param_screen_init();
    ui_jgrun_param_screen_init();
    ui_jgact_param_screen_init();
    ui_com_param_screen_init();
    ui_com_param2_screen_init();
    ui_serial_param_screen_init();
    ui_com_param3_screen_init();
    ui_101_param_screen_init();
    ui_104_param_screen_init();
    ui_sys_maint_screen_init();
    ui_clock_set_screen_init();
    ui_dev_manage_screen_init();
    ui_dev_version_screen_init();
    ui_lcd_version_screen_init();
    ui_password_screen_init();
    ui_ai_switch_screen_init();
    ui_FA_state_screen_init();
}

void menu_display_destroy(void)
{
    ui_menu_main_screen_destroy();
    ui_real_data_screen_destroy();
    ui_AI_screen_destroy();
    ui_DI_screen_destroy();
    ui_point_ai_screen_destroy();
    ui_all_ai_screen_destroy();
    ui_point_di_screen_destroy();
    ui_all_di_screen_destroy();
    ui_event_record_screen_destroy();
    ui_SOE_screen_destroy();
    ui_fault_record_screen_destroy();
    ui_dz_param_screen_destroy();
    ui_dz_set_screen_destroy();
    ui_gy3_param_screen_destroy();
    ui_run_param_screen_destroy();
    ui_act_param_screen_destroy();
    ui_gy4_param_screen_destroy();
    ui_comrun_param_screen_destroy();
    ui_comact_param_screen_destroy();
    ui_jgrun_param_screen_destroy();
    ui_jgact_param_screen_destroy();
    ui_com_param_screen_destroy();
    ui_com_param2_screen_destroy();
    ui_serial_param_screen_destroy();
    ui_com_param3_screen_destroy();
    ui_101_param_screen_destroy();
    ui_104_param_screen_destroy();
    ui_sys_maint_screen_destroy();
    ui_clock_set_screen_destroy();
    ui_dev_manage_screen_destroy();
    ui_dev_version_screen_destroy();
    ui_lcd_version_screen_destroy();
    ui_password_screen_destroy();
    ui_ai_switch_screen_destroy();
    ui_FA_state_screen_destroy();
}
