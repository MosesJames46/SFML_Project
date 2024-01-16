#pragma once
#include <iostream>
#include "orthogonal.h"
#include "ZAxis.h"
#include "DrawPlane2D.h"
class DrawFOV {
public:
	DrawFOV(sf::RenderWindow& window) : window(window){}
	
	void drawFOV();
private:
	sf::RenderWindow& window;
};