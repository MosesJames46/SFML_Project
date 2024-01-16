#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Draw2DPlane {
public:
	Draw2DPlane(sf::RenderWindow& window) : window(window) {}
	
	//Set the center on every call
	void setCenterX();
	void setCenterY();

	//get the cetner
	unsigned int getCenterX();
	unsigned int getCenterY();

	void drawPlane();
	void drawLine(float x, float y, float point2x, float point2y);
	void drawFromCenter(float point2x, float point2y);
	

private:
	//Draw a red dot in the center of the window and adjust this dot based on the size.

	sf::RenderWindow& window;
	sf::Vector2f windowCoords = window.mapPixelToCoords(sf::Vector2i(window.getSize().x, window.getSize().y));
	float x = static_cast<float>(windowCoords.x);
	float y = static_cast<float>(windowCoords.y);
	unsigned int centerX = static_cast<unsigned int>(x / 2);
	unsigned int centerY = static_cast<unsigned int>(y / 2);
	
	sf::Vector2u windowSize = window.getSize();
	
};