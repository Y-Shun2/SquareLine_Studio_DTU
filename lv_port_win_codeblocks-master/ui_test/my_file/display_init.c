#include "display_init.h"

lv_style_t style_option_unselected; // 菜单选项"未选中"状态的样式
lv_style_t style_option_selected;   // 菜单选项"选中"状态的样式，底黑字
lv_style_t style_title;             // 标题样式
void menu_style_init(void)
{
    // --------------------- 初始化未选中选项样式 ---------------------
    lv_style_init(&style_option_unselected);
    lv_style_set_bg_color(&style_option_unselected, lv_color_white());      // 背景白色
    lv_style_set_bg_opa(&style_option_unselected, LV_OPA_COVER);            // 背景透明度100%
    lv_style_set_text_color(&style_option_unselected, lv_color_black());    // 字体黑色
    lv_style_set_text_align(&style_option_unselected, LV_TEXT_ALIGN_CENTER);// 字体居中
    lv_style_set_pad_all(&style_option_unselected, 2);                      // 内边距2px
    lv_style_set_outline_width(&style_option_unselected, 0);                // 外边距0px
    lv_style_set_border_width(&style_option_unselected, 0);                 // 边框宽度0px
    lv_style_set_shadow_width(&style_option_unselected, 0);                 // 阴影宽度0px
    lv_style_set_radius(&style_option_unselected, 0);                       // 圆角0px（方形）
    lv_style_set_text_font(&style_option_unselected, &lv_font_montserrat_14);// 字体使用LVGL内置的蒙特塞拉特14号字体
    // 关键：让label尺寸自适应文字（不拉伸）
    lv_style_set_width(&style_option_unselected, LV_SIZE_CONTENT);          // 宽度跟随内容
    lv_style_set_height(&style_option_unselected, LV_SIZE_CONTENT);         // 高度跟随内容

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
    lv_style_set_text_font(&style_option_selected, &lv_font_montserrat_14);

    lv_style_set_width(&style_option_selected, LV_SIZE_CONTENT);
    lv_style_set_height(&style_option_selected, LV_SIZE_CONTENT);

    // --------------------- 初始化标题样式 ---------------------
    lv_style_init(&style_title);                                       // 初始化标题样式结构体
    lv_style_set_bg_color(&style_title, lv_color_white());             // 标题背景色：白色
    lv_style_set_bg_opa(&style_title, LV_OPA_COVER);                   // 背景不透明度：完全不透明
    lv_style_set_text_color(&style_title, lv_color_black());           // 标题文字颜色：黑色
    lv_style_set_text_align(&style_title, LV_TEXT_ALIGN_CENTER);       // 标题文字居中对齐
    lv_style_set_border_width(&style_title, 2);                        // 边框宽度：2像素
    lv_style_set_border_side(&style_title, LV_BORDER_SIDE_BOTTOM);     // 仅显示底部边框，分隔标题和选项
    lv_style_set_border_color(&style_title, lv_color_black());         // 边框颜色：黑色
    lv_style_set_pad_ver(&style_title, 5);                             // 上下内边距：5像素
    lv_style_set_text_font(&style_title, &lv_font_montserrat_14);      // 标题字体
}

void lv_obj_set_button_init(lv_obj_t * obj, lv_coord_t width, lv_coord_t height)
{
    lv_obj_set_width(obj, width);
    lv_obj_set_height(obj, height);
    lv_obj_set_style_bg_opa(obj, LV_OPA_TRANSP, 0); // 透明背景
    lv_obj_set_style_border_width(obj, 0, 0);       // 无边框
    lv_obj_set_style_outline_width(obj, 0, 0);      // 无轮廓
    lv_obj_set_style_radius(obj, 0, 0);             // 方形
    lv_obj_set_style_shadow_width(obj, 0, 0);       // 无阴影
}

void lv_obj_set_label_init(lv_obj_t * obj, const char * text, lv_align_t align)
{
    lv_label_set_text(obj, text);
    lv_obj_set_align(obj, align);
}

void menu_display_init(void)
{
    ui_menu_main_screen_init();
    ui_real_data_screen_init();
    ui_dev_manage_screen_init();
    ui_event_record_screen_init();
    ui_com_param_screen_init();
    ui_dz_param_screen_init();
    ui_AI_screen_init();
    ui_com_param2_screen_init();
    ui_dz_set_screen_init();
    ui_DO_screen_init();
}

void menu_display_destroy(void)
{
    ui_menu_main_screen_destroy();
    ui_real_data_screen_destroy();
    ui_dev_manage_screen_destroy();
    ui_event_record_screen_destroy();
    ui_com_param_screen_destroy();
    ui_dz_param_screen_destroy();
    ui_AI_screen_destroy();
    ui_com_param2_screen_destroy();
    ui_dz_set_screen_destroy();
    ui_DO_screen_destroy();
}
