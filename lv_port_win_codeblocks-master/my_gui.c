#include "my_gui.h"
#include "lvgl.h"

void my_gui(void)
{
    lv_obj_t *obj_1 = lv_obj_create(lv_scr_act());
    lv_obj_set_size(obj_1,250,250);
    lv_obj_set_x(obj_1,10);
    lv_obj_set_y(obj_1,10);

    lv_obj_t *obj_2 = lv_obj_create(obj_1);
    lv_obj_set_pos(obj_2,10,10);

}
