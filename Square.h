#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include "VectorFunctions.h"
#include "triangle.h"

class Square : public Triangle {
public:
	Square( sf::RenderWindow& window) 
		:window(window), Triangle(window) {}


private:
	sf::RenderWindow& window;
	float x;
	float y;
	float aspectRatio = static_cast<float>(window.getSize().x / window.getSize().y) / (16/9);
	std::vector<float> point1{ 100,100 }, point2{ 100,-100 }, point3{ -100,-100 }, point4{ -100,100 };
};