#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "VectorFunctions.h"

class Square {
public:
	Square( float x, float y, sf::RenderWindow& window) 
		: x(x),y(y),window(window) {}

	std::vector<std::vector<float>> drawSquare();
	
	

	//return each point
	std::vector<std::vector<float>> getPoints();

	void printPoints();
private:
	sf::RenderWindow& window;
	float x;
	float y;
	float aspectRatio = static_cast<float>(window.getSize().x / window.getSize().y) / (16/9);
	std::vector<float> point1{ 100,100 }, point2{ 100,-100 }, point3{ -100,-100 }, point4{ -100,100 };
};