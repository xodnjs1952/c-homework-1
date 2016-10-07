#pragma once
#include "object.h"

//paren class
class icon_left_arrow : public  object
{
public:
	icon_left_arrow (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
			for (int i = y_center-30; i<y_center+30; i++)
					drawPixel(i, x_center, 1.0f, 0.0f, 0.0f);
			drawLine(y_center-30, x_center, y_center, x_center-20, 1.0f, 0.0f, 0.0f);
			drawLine(y_center-30, x_center, y_center, x_center+20, 1.0f, 0.0f, 0.0f);
	
	}
};