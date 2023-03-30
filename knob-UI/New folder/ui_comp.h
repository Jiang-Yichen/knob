// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.3.4
// PROJECT: Smartwatch

#ifndef _SMARTWATCH_UI_COMP_H
#define _SMARTWATCH_UI_COMP_H

#include "ui.h"

lv_obj_t * ui_comp_get_child(lv_obj_t * comp, uint32_t child_idx);
extern uint32_t LV_EVENT_GET_COMP_CHILD;

// COMPONENT batterygroup
#define UI_COMP_BATTERYGROUP_BATTERYGROUP 0
#define UI_COMP_BATTERYGROUP_FLASH 1
#define UI_COMP_BATTERYGROUP_BATTERY_PERCENT 2
#define _UI_COMP_BATTERYGROUP_NUM 3
lv_obj_t * ui_batterygroup_create(lv_obj_t * comp_parent);

// COMPONENT buttondown
#define UI_COMP_BUTTONDOWN_BUTTONDOWN 0
#define UI_COMP_BUTTONDOWN_BUTTON_DOWN_ICON 1
#define UI_COMP_BUTTONDOWN_LINE 2
#define _UI_COMP_BUTTONDOWN_NUM 3
lv_obj_t * ui_buttondown_create(lv_obj_t * comp_parent);

// COMPONENT buttonround
#define UI_COMP_BUTTONROUND_BUTTONROUND 0
#define _UI_COMP_BUTTONROUND_NUM 1
lv_obj_t * ui_buttonround_create(lv_obj_t * comp_parent);

// COMPONENT buttontop
#define UI_COMP_BUTTONTOP_BUTTONTOP 0
#define UI_COMP_BUTTONTOP_BUTTON_TOP_ICON 1
#define UI_COMP_BUTTONTOP_LINE 2
#define _UI_COMP_BUTTONTOP_NUM 3
lv_obj_t * ui_buttontop_create(lv_obj_t * comp_parent);

// COMPONENT dailymissiongroup
#define UI_COMP_DAILYMISSIONGROUP_DAILYMISSIONGROUP 0
#define UI_COMP_DAILYMISSIONGROUP_MISSION_PERCENT 1
#define UI_COMP_DAILYMISSIONGROUP_DAILY_MISSION_IMAGE 2
#define UI_COMP_DAILYMISSIONGROUP_DAILY_MISSION_ARC 3
#define _UI_COMP_DAILYMISSIONGROUP_NUM 4
lv_obj_t * ui_dailymissiongroup_create(lv_obj_t * comp_parent);
void ui_event_comp_dailymissiongroup_daily_mission_arc(lv_event_t * e);

// COMPONENT dategroup
#define UI_COMP_DATEGROUP_DATEGROUP 0
#define UI_COMP_DATEGROUP_DAY 1
#define UI_COMP_DATEGROUP_MONTH 2
#define UI_COMP_DATEGROUP_YEAR 3
#define _UI_COMP_DATEGROUP_NUM 4
lv_obj_t * ui_dategroup_create(lv_obj_t * comp_parent);

// COMPONENT forecastgroup
#define UI_COMP_FORECASTGROUP_FORECASTGROUP 0
#define UI_COMP_FORECASTGROUP_DAY1 1
#define UI_COMP_FORECASTGROUP_DEGREE_GROUP 2
#define UI_COMP_FORECASTGROUP_DEGREE_GROUP_DAYTIME 3
#define UI_COMP_FORECASTGROUP_DEGREE_GROUP_NIGHTTIME 4
#define UI_COMP_FORECASTGROUP_CLOUD_SUN 5
#define _UI_COMP_FORECASTGROUP_NUM 6
lv_obj_t * ui_forecastgroup_create(lv_obj_t * comp_parent);

// COMPONENT pulsegroup
#define UI_COMP_PULSEGROUP_PULSEGROUP 0
#define UI_COMP_PULSEGROUP_HEART 1
#define UI_COMP_PULSEGROUP_PULSE_NUMBER 2
#define UI_COMP_PULSEGROUP_BPM 3
#define _UI_COMP_PULSEGROUP_NUM 4
lv_obj_t * ui_pulsegroup_create(lv_obj_t * comp_parent);

// COMPONENT stepgroup
#define UI_COMP_STEPGROUP_STEPGROUP 0
#define UI_COMP_STEPGROUP_STEP 1
#define UI_COMP_STEPGROUP_STEP_LABEL 2
#define _UI_COMP_STEPGROUP_NUM 3
lv_obj_t * ui_stepgroup_create(lv_obj_t * comp_parent);

// COMPONENT titlegroup
#define UI_COMP_TITLEGROUP_TITLEGROUP 0
#define UI_COMP_TITLEGROUP_TITLE 1
#define UI_COMP_TITLEGROUP_SUBTITLE 2
#define _UI_COMP_TITLEGROUP_NUM 3
lv_obj_t * ui_titlegroup_create(lv_obj_t * comp_parent);

// COMPONENT todayweathergroup
#define UI_COMP_TODAYWEATHERGROUP_TODAYWEATHERGROUP 0
#define UI_COMP_TODAYWEATHERGROUP_DEGREE_6 1
#define UI_COMP_TODAYWEATHERGROUP_CLOUD_SUN 2
#define UI_COMP_TODAYWEATHERGROUP_DEGREE_8 3
#define _UI_COMP_TODAYWEATHERGROUP_NUM 4
lv_obj_t * ui_todayweathergroup_create(lv_obj_t * comp_parent);

// COMPONENT weathergroup1
#define UI_COMP_WEATHERGROUP1_WEATHERGROUP1 0
#define UI_COMP_WEATHERGROUP1_DEGREE_1 1
#define UI_COMP_WEATHERGROUP1_CLOUD_FOG_1 2
#define _UI_COMP_WEATHERGROUP1_NUM 3
lv_obj_t * ui_weathergroup1_create(lv_obj_t * comp_parent);

#endif
