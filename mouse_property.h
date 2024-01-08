#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <iostream>


class MouseProperty {
public:
	MouseProperty(sf::RenderWindow& window) : window(window), is_hovering(false) {}

	//Target what the mouse is hovering
	//Done with getting the position of the entity in question and determining if the mouse is within its paramters.
	void is_hover();

	double get_mouse_position_x();

	double get_mouse_position_y();

	void set_mouse_position_x( double x_value);

	void set_mouse_position_y(double y_value);

	double get_mouse_position_ytan(double offset);

	void set_mouse_position_ytan(double xy_value);

	double get_mouse_position_xtan(double offset);

	void set_mouse_position_xtan(double xy_value);
	
	void get_mouse_position();

	void draw_mouse_position();

	void loop_tan(float count);
	
private:
	float a = 180;
	float z;
	sf::RenderWindow& window;
	double mouse_position_xtan = 0;
	double mouse_position_ytan = 0;
	double mouse_position_x = 0;
	double mouse_position_y = 0;
	bool is_hovering;

};