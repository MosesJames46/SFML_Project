#include "mouse_property.h"
#include <chrono>
#include <thread>

void MouseProperty::is_hover() {

}

double MouseProperty::get_mouse_position_x() {
	
	return (sf::Mouse::getPosition(window).x);

	
}

double MouseProperty::get_mouse_position_y() {
	return (sf::Mouse::getPosition(window).y);
}


void MouseProperty::set_mouse_position_x(double x_value) {
	mouse_position_x = x_value;
	std::cout << get_mouse_position_x();
}

void MouseProperty::set_mouse_position_y(double y_value) {
	mouse_position_y = y_value;
	std::cout << get_mouse_position_y();
}

void MouseProperty::draw_mouse_position() {
	sf::CircleShape circle(3);
	sf::CircleShape circle_tan(3);
	circle.setFillColor(sf::Color::Red);
	circle.setPosition(static_cast<float>(mouse_position_x), static_cast<float>(mouse_position_y));
	circle_tan.setFillColor(sf::Color::Cyan);
	circle_tan.setPosition(static_cast<float>(mouse_position_xtan), static_cast<float>(mouse_position_ytan));
	window.draw(circle);
	window.draw(circle_tan);
}

void MouseProperty::get_mouse_position() {
	
	mouse_position_x = get_mouse_position_x();
	mouse_position_y = get_mouse_position_y();
	mouse_position_xtan = get_mouse_position_xtan(.1f);
	mouse_position_ytan = get_mouse_position_ytan(.1f);
	
	
	/*std::cout << mouse_position_x << " " << mouse_position_y << " " << " xtan : " << mouse_position_xtan << " ytan: "<< mouse_position_ytan << "\n";
	std::cout << "z itself: " << z << "\n";
	std::this_thread::sleep_for(std::chrono::milliseconds(100));*/

}

void MouseProperty::loop_tan(float count) {
	for (float i = 0; i < count; i++) {
		z = 1 / (std::tan(i));
		get_mouse_position();
		draw_mouse_position();
	}
}

double MouseProperty::get_mouse_position_xtan(double offset) {
	return ((sf::Mouse::getPosition(window).x) * z) * offset;
}

void MouseProperty::set_mouse_position_xtan(double x_value) {
	mouse_position_xtan = x_value;
}

double MouseProperty::get_mouse_position_ytan(double offset) {
	return ((sf::Mouse::getPosition(window).y) * z) * offset;
}

void MouseProperty::set_mouse_position_ytan(double y_value) {
	mouse_position_ytan = y_value;
}