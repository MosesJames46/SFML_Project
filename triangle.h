#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "line.h"
#include "text.h"
#include "projectionMat.h"

class Triangle : public Lines{
private:
	sf::RenderWindow& window;
	Lines line1;
	Lines line2;
	Lines line3;

	 

public:
	Triangle(sf::RenderWindow& window)
		: window(window), 
		Lines(window, { 1.0, 1.0, 1.0, 1.0 }, { 1.0, -1.0, 1.0, 1.0 }),
		line1(window, { -1.0 , -1.0 , 1.0 , 1.0 }, { 1.0 , 1.0, 1.0, 1.0 }),
		line2(window, { 1.0, 1.0, 1.0, 1.0 }, { 1.0, -1.0, 1.0, 1.0 }), 
		line3(window, { 1.0, -1.0, 1.0, 1.0 }, { -1.0, -1.0, 1.0, 1.0 }) {}

	void drawTriangle();

};