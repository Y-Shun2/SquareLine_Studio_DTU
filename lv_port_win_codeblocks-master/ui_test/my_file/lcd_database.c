#include "lcd_database.h"

lcd_soe_t lcd_soe[6];
lcd_fault_t lcd_fault[6];
lcd_comrun_param_t lcd_comrun_param[4] = {{"LED_RETUREN_TT", 1}, {"LED_RETUREN_SX", 20.00}, {"FAULT_DI_RETURN_SX", 20.00}, {"DS_SWITCH_DELAY", 0.5}};
SYS_TIME64 current_time = {0};
char clock_data_time[14] = {0};

void data_time_init(void)
{
    current_time.year = 2000;
    current_time.mon = 1;
    current_time.day = 1;
    current_time.hour = 0;
    current_time.min = 0;
    current_time.sec = 0;
    current_time.msec = 0;
    set_data_time();
}

void upload_data_time(void)//上传时间
{
    current_time.year = (clock_data_time[0] - '0') * 1000 + (clock_data_time[1] - '0') * 100 + (clock_data_time[2] - '0') * 10 + (clock_data_time[3] - '0');
    current_time.mon = (clock_data_time[4] - '0') * 10 + (clock_data_time[5] - '0');
    current_time.day = (clock_data_time[6] - '0') * 10 + (clock_data_time[7] - '0');
    current_time.hour = (clock_data_time[8] - '0') * 10 + (clock_data_time[9] - '0');
    current_time.min = (clock_data_time[10] - '0') * 10 + (clock_data_time[11] - '0');
    current_time.sec = (clock_data_time[12] - '0') * 10 + (clock_data_time[13] - '0');
}

void set_data_time(void)//设置时间
{
    clock_data_time[0] = current_time.year / 1000 + '0';
    clock_data_time[1] = (current_time.year % 1000) / 100 + '0';
    clock_data_time[2] = (current_time.year % 100) / 10 + '0';
    clock_data_time[3] = current_time.year % 10 + '0';
    clock_data_time[4] = current_time.mon / 10 + '0';
    clock_data_time[5] = current_time.mon % 10 + '0';
    clock_data_time[6] = current_time.day / 10 + '0';
    clock_data_time[7] = current_time.day % 10 + '0';
    clock_data_time[8] = current_time.hour / 10 + '0';
    clock_data_time[9] = current_time.hour % 10 + '0';
    clock_data_time[10] = current_time.min / 10 + '0';
    clock_data_time[11] = current_time.min % 10 + '0';
    clock_data_time[12] = current_time.sec / 10 + '0';
    clock_data_time[13] = current_time.sec % 10 + '0';
}

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
