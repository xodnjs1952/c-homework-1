#pragma once
#include "object.h"

//paren class
class icon_x : public  object
{
public:

	//»ı¼ºÀÚ
	icon_x (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
		drawLine(x_center-20, y_center+20, x_center+20, y_center-20, 1.0f, 0.0f, 0.0f);
		drawLine(x_center-20, y_center-20, x_center+20,y_center+20, 1.0f, 0.0f, 0.0f);
	}
	

};