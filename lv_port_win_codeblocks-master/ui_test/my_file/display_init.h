#ifndef __DISPLAY_INIT_H__
#define __DISPLAY_INIT_H__

#include "lvgl.h"
#include <stdio.h>

void menu_style_init(void);
void lv_obj_set_button_init(lv_obj_t * obj, lv_coord_t width, lv_coord_t height);
void lv_obj_set_label_init(lv_obj_t * obj, const char * text, lv_align_t align);
#endif
