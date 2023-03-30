// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: Smartwatch

#ifndef _SMARTWATCH_UI_H
#define _SMARTWATCH_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

void sec_Animation(lv_obj_t * TargetObject, int delay);
void min_Animation(lv_obj_t * TargetObject, int delay);
void hour_Animation(lv_obj_t * TargetObject, int delay);
void left_Animation(lv_obj_t * TargetObject, int delay);
void right_Animation(lv_obj_t * TargetObject, int delay);
void opa_on_Animation(lv_obj_t * TargetObject, int delay);
void dots_Animation(lv_obj_t * TargetObject, int delay);
void top_Animation(lv_obj_t * TargetObject, int delay);
void cloud_Animation(lv_obj_t * TargetObject, int delay);
void blood2_Animation(lv_obj_t * TargetObject, int delay);
void blood1_Animation(lv_obj_t * TargetObject, int delay);
void heart_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_start(lv_event_t * e);
extern lv_obj_t * ui_start;
extern lv_obj_t * ui_Roller1;
void ui_event_watch_digital(lv_event_t * e);
extern lv_obj_t * ui_watch_digital;
extern lv_obj_t * ui_sec_dot;
extern lv_obj_t * ui_Image3;
extern lv_obj_t * ui_call;
extern lv_obj_t * ui_Image4;
extern lv_obj_t * ui_weather_2;
extern lv_obj_t * ui_Image2;
void ui_event_blood_oxy(lv_event_t * e);
extern lv_obj_t * ui_blood_oxy;
extern lv_obj_t * ui_Image6;
extern lv_obj_t * ui_blood_presure_group;
extern lv_obj_t * ui_blood_oxygen;
extern lv_obj_t * ui_arc_spo2;
extern lv_obj_t * ui_precent_70;
extern lv_obj_t * ui_precent_100;
extern lv_obj_t * ui_Screen1;
extern lv_obj_t * ui_Image1;
extern lv_obj_t * ui_arc_spo1;


LV_IMG_DECLARE(ui_img_sec_dot_png);    // assets\sec_dot.png
LV_IMG_DECLARE(ui_img_picture5_png);    // assets\Picture5.png
LV_IMG_DECLARE(ui_img_picture4_png);    // assets\Picture4.png
LV_IMG_DECLARE(ui_img_picture3_png);    // assets\Picture3.png
LV_IMG_DECLARE(ui_img_picture6_png);    // assets\Picture6.png
LV_IMG_DECLARE(ui_img_picture1_png);    // assets\Picture1.png


LV_FONT_DECLARE(ui_font_H1);
LV_FONT_DECLARE(ui_font_Number_big);
LV_FONT_DECLARE(ui_font_Number_extra);
LV_FONT_DECLARE(ui_font_Subtitle);
LV_FONT_DECLARE(ui_font_Title);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
