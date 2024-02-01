#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "VectorFunctions.h"
#include "projectionMat.h"
#include "point.h"

class Lines : public Point {
public:
	Lines(glm::vec4 initialPosition, glm::vec4 terminalPosition,  sf::RenderWindow& window) :
		initialPosition(initialPosition), terminalPosition(terminalPosition),
		window(window), Point(0, 0, 0, 1, window), 
		initialPoint(initialPosition.x, initialPosition.y, initialPosition.z, initialPosition.w, window),
		terminalPoint(terminalPosition.x, terminalPosition.y, terminalPosition.z, terminalPosition.w, window){}



	
	void drawLines();
	


private:
	sf::RenderWindow& window;
	std::vector<Point> pointVector{};
	Point initialPoint;
	Point terminalPoint;
	glm::vec4 initialPosition;
	glm::vec4 terminalPosition;
	
};