#pragma once
#include "object.h"

//paren class
class icon_circle : public  object
{
public:
	int x_center,y_center;
	int r;
	//»ý¼ºÀÚ
	icon_circle (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;
		r=30;
	}

	void draw(){
		for (int i = x_center-r; i < x_center+r; i++) {
			for (int j = y_center-r; j < y_center+r; j++) {
					double empty_circle;
					double mouse_circle;
					empty_circle = ((double)i - x_center)*((double)i - x_center) + ((double)j - y_center)*((double)j - y_center) - (r-5)*(r-5);
					mouse_circle = ((double)i - x_center)*((double)i - x_center) + ((double)j - y_center)*((double)j - y_center) - r * r;
								if ((mouse_circle < 0.0) && (empty_circle>0.0)) {
									drawPixel(i, j, 1.0f, 0.0f, 0.0f);
								}
							}
						}
		
	}
	

};