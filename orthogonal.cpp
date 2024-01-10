#pragma once
#include "orthogonal.h"
#include "WindowProperties.h"
#include "mouse_property.h"


void Orthogonal::draw_points(sf::RenderWindow& window) {

	
	
	
}

	

void Orthogonal::drawCircleXY(float xvalue, float yvalue, sf::RenderWindow& window) {
	sf::CircleShape circle(3);
	circle.setPosition(xvalue, yvalue);
	circle.setFillColor(sf::Color::Red);
	window.clear();
	window.draw(circle);
}
