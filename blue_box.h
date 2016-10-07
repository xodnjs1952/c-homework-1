#pragma once
#include "object.h"

//paren class
class blue_box : public  object
{
public:
	
	int r;
	int x_mouse,y_mouse;
	//»ı¼ºÀÚ
	blue_box(int  _x_center,int  _y_center,int  _x_mouse,int  _y_mouse){
		x_center=_x_center;
		y_center=_y_center;
		x_mouse=_x_mouse;
		y_mouse=_y_mouse;
		r=50;
	}

	void draw(){
		for(int i =x_center-r;i<x_center+r;i++ ){
			for (int j = y_center-r; j < y_center+r; j++){
	
				if((x_center-10<x_mouse) && (x_mouse<x_center+10)&&(y_center-10<(height-y_mouse))&&((height-y_mouse)<y_center+10)){
					 drawPixel(i, j, 0.0f, 1.0f, 1.0f); 
				}
				else{
					drawPixel(i, j, 0.0f, 0.0f, 1.0f);
				}
			}
		}

	}
	

};
