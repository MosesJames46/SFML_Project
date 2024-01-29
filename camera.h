#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>

class Camera {
public:
	Camera(sf::RenderWindow& window) : window(window){}
	
private:
	std::vector<double> cameraMatrix = { 0,0,1,1 };
	sf::RenderWindow& window;
	double theta = 0;
	double q = std::cos(theta/2) + std::sin(theta/2) * 
};