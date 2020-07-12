#include "lv_gui_main.h"

static lv_obj_t * label;

static void slider_event_cb(lv_obj_t * slider, lv_event_t event)
{
    if(event == LV_EVENT_VALUE_CHANGED) {
        /*Refresh the text*/
        lv_label_set_text_fmt(label, "%d", lv_slider_get_value(slider));
    }
}

/*
	  name : lv_ex_get_started_3
	 param : none
	author : wangls
  describe : 设置滑竿
	  date : 2020-07-12
*/
void lv_ex_get_started_3(void)
{
    /* Create a slider in the center of the display */
    lv_obj_t * slider = lv_slider_create(lv_scr_act(), NULL);
    lv_obj_set_width(slider, 200);                        /*Set the width*/
    lv_obj_align(slider, NULL, LV_ALIGN_CENTER, 0, 0);    /*Align to the center of the parent (screen)*/
    lv_obj_set_event_cb(slider, slider_event_cb);         /*Assign an event function*/

    /* Create a label below the slider */
    label = lv_label_create(lv_scr_act(), NULL);
    lv_label_set_text(label, "0");
    lv_obj_set_auto_realign(slider, true);                          /*To keep center alignment when the width of the text changes*/
    lv_obj_align(label, slider, LV_ALIGN_OUT_BOTTOM_MID, 0, 20);    /*Align below the slider*/
}

/*
	  name : lv_st_theme_Init
	 param : none
	author : wangls
  describe : 设置主题
	  date : 2020-07-12
*/
void lv_st_theme_Init(void)
{
		lv_theme_t * th;
	
		lv_color_t color_primary_t = {0};
		lv_color_t color_secondary_t = {0};
	
		color_primary_t = LV_COLOR_BLACK;
		color_secondary_t = LV_COLOR_BLACK;
		
		
		th = lv_theme_mono_init(color_primary_t, color_secondary_t, true, NULL, NULL, NULL, NULL);
	
    lv_theme_set_act(th);
    th = lv_theme_get_act();    /*If `LV_THEME_LIVE_UPDATE  1` `th` is not used directly so get the real theme after set*/
    lv_obj_t * scr = lv_cont_create(NULL, NULL);
    lv_disp_load_scr(scr);	
}
