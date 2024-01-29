#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <glm.hpp>
struct projMat {

public:
	projMat(sf::RenderWindow& window) : window(window) {}
	sf::RenderWindow& window;
	double windowX = static_cast<double>(window.getSize().x);
	double windowY = static_cast<double>(window.getSize().y);
	double aspectRatio = windowY / windowX;
	double fov = 1.0f / aspectRatio;
	double x =  aspectRatio * fov;
	double y = 1.0f /fov;
	double q = 200 / (200 - 1.0f);
	double z =  - (200 * 1.0f) / 200 - 1.0f;
	double w = 1;

	glm::mat4 returnProjMat();
	double returnScaling();
	void setScaling(double value);
};