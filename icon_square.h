#pragma once
#include "object.h"

//paren class
class icon_square : public  object
{
public:
	int x_center,y_center;

	//������
	icon_square (int  _x_center,int  _y_center){
		x_center=_x_center;
		y_center=_y_center;

	}

	void draw(){
			for (int i = x_center-30; i<x_center+30; i++) {//ä���� �׸�
					for (int j = y_center-30; j<y_center+30; j++) {
						drawPixel(i, j, 1.0f, 0.0f, 0.0f);
							}
						}
			for (int i = x_center-20; i<x_center+20; i++) {//�����
					for (int j = y_center-20; j<y_center+20; j++) {
						drawPixel(i, j, 1.0f, 1.0f, 1.0f);
						     }
						}
		
	}
	

};