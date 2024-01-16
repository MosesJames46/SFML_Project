#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include "ZAxis.h"
#include <SFML/Graphics.hpp>
class VectorFunctions {

public:
	VectorFunctions(sf::RenderWindow& window) : window(window) {}
	
	//find the magnitude of vectors
	double magnitude(std::vector<double> vector);
	double vectorValue2d(std::vector<double> vector);

	std::vector<float> frustum(double xvalue, double yvalue, int theta, double percentagex, double percentagey, sf::RenderWindow& window);

private:
	sf::RenderWindow& window;
};