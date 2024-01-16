#pragma once
#include "orthogonal.h"
#include "WindowProperties.h"
#include "mouse_property.h"




void Orthogonal::draw_points(double xvalue, double yvalue, double xtan, double ytan) {
	drawCircleXY(xvalue, yvalue);
	drawCircleXY(xtan, ytan);
	
	
	
}

	

void Orthogonal::drawCircleXY(double xvalue, double yvalue) {
	sf::CircleShape circle(3);
	circle.setPosition(static_cast<float>(xvalue), static_cast<float>(yvalue));
	circle.setFillColor(this->color);
	window.draw(circle);
}

void Orthogonal::drawCircleOwn() {
	sf::Vector2f viewCoords = window.mapPixelToCoords(sf::Vector2i(static_cast<int>(this->xvalue), static_cast<int>(this->yvalue)));

	sf::CircleShape circle(3);
	circle.setPosition(viewCoords);
	circle.setFillColor(this->color);
	window.draw(circle);
}