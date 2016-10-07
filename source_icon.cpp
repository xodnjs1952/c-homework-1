#include <GLFW/glfw3.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include "changed_circle.h"
#include "blue_box.h"
#include "icon_a.h"
#include "icon_l.h"
#include "icon_slash.h"
#include "icon_circle.h"
#include "icon_square.h"
#include "icon_x.h"
#include "icon_down_arrow.h"
#include "icon_right_arrow.h"
#include "icon_left_arrow.h"
#include "icon_up_arrow.h"
#include "icon_a.h"

int main(void)
{
	GLFWwindow* window;



	/* Initialize the library */
	if (!glfwInit())
		return -1;

	/* Create a windowed mode window and its OpenGL context */
	window = glfwCreateWindow(840, 840, "Hello World", NULL, NULL);
	if (!window)
	{
		glfwTerminate();
		return -1;
	}

	
	/* Make the window's context current */
	glfwMakeContextCurrent(window);

	/* Loop until the user closes the window */
	while (!glfwWindowShouldClose(window))
	{
		
		/* Render here */
		glClear(GL_COLOR_BUFFER_BIT);
		
		double xpos, ypos;
		glfwGetCursorPos(window, &xpos, &ypos);
		
		std::fill_n(pixels, width*height * 3, 1.0f);	// background 
															

		std::vector<object*>object_list;
		
		//변화하는 원을 그려주는 부분
		//for(int i = 1 ; i<6;i++){
		//	for(int j = 1 ; j<5;j++){
		//		object_list.push_back(new changed_circle(i*100,j*100,xpos,ypos)); }}
		
		//blue_box가 변하는 부분 
		for(int i = 1 ; i<6;i++){
			for(int j = 1 ; j<5;j++){
				object_list.push_back(new blue_box(i*100,j*100,xpos,ypos)); }}


		//초기화
		object_list.push_back(new icon_l(100,100));
		object_list.push_back(new icon_slash(200,100));
		object_list.push_back(new icon_circle(300,100));
		object_list.push_back(new icon_square(400,100));
		object_list.push_back(new icon_x(500,100));
		object_list.push_back(new icon_down_arrow(200,100));
		object_list.push_back(new icon_right_arrow(200,200));
		object_list.push_back(new icon_left_arrow(200,300));
		object_list.push_back(new icon_up_arrow(200,400));
		object_list.push_back(new icon_a(200,500));
		object_list.push_back(new icon_l(100,300));
		object_list.push_back(new icon_slash(200,300));
		object_list.push_back(new icon_circle(300,300));
		object_list.push_back(new icon_square(400,300));
		object_list.push_back(new icon_x(500,300));
		object_list.push_back(new icon_down_arrow(400,100));
		object_list.push_back(new icon_right_arrow(400,200));
		object_list.push_back(new icon_left_arrow(400,300));
		object_list.push_back(new icon_up_arrow(400,400));
		object_list.push_back(new icon_a(400,500));












		for(auto itr : object_list){
			itr->draw();
		}
		
		
		
		glDrawPixels(width, height, GL_RGB, GL_FLOAT, pixels);
		/* Swap front and back buffers */
		glfwSwapBuffers(window);

		/* Poll for and process events */
		glfwPollEvents();
	}

	glfwTerminate();
	return 0;
}