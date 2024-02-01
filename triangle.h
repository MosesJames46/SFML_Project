#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "line.h"
#include "text.h"
#include "projectionMat.h"

class Triangle : public Lines{
private:
	sf::RenderWindow& window;
	glm::vec4 initial{ 0,0,0,1 };
	glm::vec4 terminal{ 0,0,0,1 };

	 

public:
	Triangle(sf::RenderWindow& window)
		: window(window),
		Lines(initial, terminal, window) {}


	void drawTriangle();

};