#pragma once
#include "object.h"

//paren class
class icon_l : public  object
{
public:


	//»ý¼ºÀÚ
	icon_l(int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
		for (int i=y_center-20;i<y_center+20;i++){
			drawPixel(x_center, i , 1.0f, 0.0f, 0.0f);}
	}
	

};