#pragma once
#include "object.h"

//paren class
class icon_up_arrow : public  object
{
public:
	icon_up_arrow (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
			for (int i = x_center-20; i<x_center+20; i++)
				drawPixel(y_center, i, 1.0f, 0.0f, 0.0f);
			drawLine(y_center-20, x_center, y_center, x_center+20, 1.0f, 0.0f, 0.0f);
			drawLine(y_center, x_center+20, y_center+20, x_center, 1.0f, 0.0f, 0.0f);
					
	
	}
};