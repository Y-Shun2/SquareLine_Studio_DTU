#include "lcd_database.h"

lcd_soe_t lcd_soe[6];
lcd_fault_t lcd_fault[6];
lcd_comrun_param_t lcd_comrun_param[4] = {{"LED_RETUREN_TT", 1}, {"LED_RETUREN_SX", 20.00}, {"FAULT_DI_RETURN_SX", 20.00}, {"DS_SWITCH_DELAY", 0.5}};

void lcd_database_init(void)
{
    lcd_soe_init();
    lcd_fault_init();
}

void lcd_soe_init(void)
{
    for(int i = 0; i < 6; i++)
    {
        lcd_soe[i].di_point_num = i + 1;
        sprintf(lcd_soe[i].soe_name, "SOE%d", i + 1);
        lcd_soe[i].soe_status = i%2;
        lcd_soe[i].time.year = 2026;
        lcd_soe[i].time.mon = 03;
        lcd_soe[i].time.day = 16;
        lcd_soe[i].time.hour = 12;
        lcd_soe[i].time.min = 12;
        lcd_soe[i].time.sec = 12 + i;
        lcd_soe[i].time.msec = i*100;
    }
}

void lcd_fault_init(void)
{
    for(int i = 0; i < 6; i++)
    {
        lcd_fault[i].fault_num = i + 1;
        sprintf(lcd_fault[i].fault_name, "FAULT%d", i + 1);
        sprintf(lcd_fault[i].fault_Phase, "PHASE %s", i%3 == 0 ? "A" : i%3 == 1 ? "B" : "C");
        lcd_fault[i].fault_text = NULL;
        lcd_fault[i].time.year = 2026;
        lcd_fault[i].time.mon = 03;
        lcd_fault[i].time.day = 16;
        lcd_fault[i].time.hour = 12;
        lcd_fault[i].time.min = 12;
        lcd_fault[i].time.sec = 12 + i;
        lcd_fault[i].time.msec = i*100;
    }
    lcd_fault[0].fault_text = "PHASE A FAULT";
    lcd_fault[5].fault_text = "PHASE B FAULT";
}
