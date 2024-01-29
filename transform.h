#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "VectorFunctions.h"
#include "line.h"

class Transform {
public:
	Transform(sf::RenderWindow& window) : window(window) {}
	void scaleLines(Lines& line, double scalingFactor);
	void rotateLines(Lines& line);

private:
	sf::RenderWindow& window;
};