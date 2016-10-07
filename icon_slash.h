#pragma once
#include "object.h"

//paren class
class icon_slash : public  object
{
public:
	int x_center,y_center;

	//»ý¼ºÀÚ
	icon_slash (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
		drawLine(x_center-20,y_center-20 ,x_center+20 ,y_center+20 , 1.0f, 0.0f, 0.0f);
	}
	

};