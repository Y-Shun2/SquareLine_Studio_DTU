#ifndef __LCD_DATABASE_H__
#define __LCD_DATABASE_H__

#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint16_t year;
    uint8_t mon;
    uint8_t day;
    uint8_t hour;
    uint8_t min;
    uint8_t sec;
    uint16_t msec;
} SYS_TIME64;

typedef struct
{
    int di_point_num;
    char soe_name[10];
    int soe_status;
    SYS_TIME64 time;
}lcd_soe_t;

typedef struct
{
    int fault_num;
    char fault_name[10];
    char fault_Phase[10];
    char *fault_text;
    SYS_TIME64 time;
}lcd_fault_t;

typedef struct
{
    char name[20];
    float value;
}lcd_comrun_param_t;


void lcd_database_init(void);
void lcd_soe_init(void);
void lcd_fault_init(void);

#endif
