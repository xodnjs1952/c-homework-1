#pragma once
#include "object.h"

//paren class
class icon_a : public  object
{
public:
	icon_a (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
		for (int i = y_center-11; i<y_center+11; i++)
					drawPixel(i, x_center, 1.0f, 0.0f, 0.0f);
		drawLine(y_center-20, x_center-30, y_center, x_center+30, 1.0f, 0.0f, 0.0f);
		drawLine(y_center, x_center+30, y_center+20, x_center-30, 1.0f, 0.0f, 0.0f);
	
	}
};