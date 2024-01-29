#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "VectorFunctions.h"
#include "projectionMat.h"

class Lines {
public:
	Lines(sf::RenderWindow& window, std::vector<double> initialPoint, std::vector<double> terminalPoint) : 
		window(window), fpov(window), initialPoint(initialPoint), terminalPoint(terminalPoint) {}



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
	std::vector<double> initialPoint = { -1, -1, 1, 1 };
	std::vector<double> terminalPoint = { 1, 1, 1, 1 };
	bool draw = false;
	projMat fpov;
	bool clipped = false;
};