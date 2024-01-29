#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "VectorFunctions.h"
#include "projectionMat.h"
#include "point.h"

class Lines : public Point {
public:
	Lines(sf::RenderWindow& window, std::vector<double> initialPoint, std::vector<double> terminalPoint) : 
		initialPoint(initialPoint), terminalPoint(terminalPoint),
		window(window), Point( 0, 0, 0, 1, window){}



	std::vector<std::vector<double>> getPositionVector();
	void setPositionVector(std::vector<std::vector<double>> newPosition);


	void drawShow(bool value);
	void setPerspective();
	void drawLines3D();
	
	double returnFPOV();
	void setFPOVScale(double scale);

	bool clipping();
private:
	sf::RenderWindow& window;
	std::vector<double> initialPoint = { -.5, .5, 0, 1 };
	std::vector<double> terminalPoint = { .5, .5,0 , 1 };
	bool draw = false;
	bool clipped = false;
};