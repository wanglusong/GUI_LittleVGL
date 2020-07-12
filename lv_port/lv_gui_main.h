#ifndef _LV_GUI_MAIN_H
#define _LV_GUI_MAIN_H

#include "sys.h"
#include "lvgl.h"

typedef void (*flush_cb)(struct _disp_drv_t * disp_drv, const lv_area_t * area, lv_color_t * color_p);
typedef bool (*read_cb)(struct _lv_indev_drv_t * indev_drv, lv_indev_data_t * data);

/*
	  name : lv_ex_get_started_3
	 param : none
	author : wangls
  describe : 设置滑竿
	  date : 2020-07-12
*/
void lv_ex_get_started_3(void);
/*
	  name : lv_st_theme_Init
	 param : none
	author : wangls
  describe : 设置主题
	  date : 2020-07-12
*/
void lv_st_theme_Init(void);

#endif

