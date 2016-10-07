#pragma once
#include "object.h"


//paren class
class changed_circle : public  object
{
public:
	
	int r;
	int x_mouse,y_mouse;
	//»ý¼ºÀÚ
	changed_circle(int  _x_center,int  _y_center,int  _x_mouse,int  _y_mouse){
		x_center=_x_center;
		y_center=_y_center;
		x_mouse=_x_mouse;
		y_mouse=_y_mouse;
		r=50;
	}

	void draw(){
		for(int i =x_center-r;i<x_center+r;i++ ){
			for (int j = y_center-r; j < y_center+r; j++){
				double empty_circle,mouse_circle;
				empty_circle=((double)i -x_center)*((double)i - x_center) + ((double)j - y_center)*((double)j -  y_center) - (r-1) * (r-1);
				mouse_circle=((double)i -x_center)*((double)i - x_center) + ((double)j - y_center)*((double)j -  y_center) - (r) * (r);
				
				if((x_center-10<x_mouse) && (x_mouse<x_center+10)&&(y_center-10<(height-y_mouse))&&((height-y_mouse)<y_center+10)){
					if ((mouse_circle < 0.0) && (empty_circle>0.0)) { drawPixel(i, j, 1.0f, 0.0f, 0.0f); }
				}
				else{
					if ((mouse_circle < 0.0) && (empty_circle>0.0)) {drawPixel(i, j, 0.0f, 1.0f, 0.0f);}
				}
			}
		}

	}
	

};
