#include <iostream>
#include <SFML/Graphics.hpp>
#include "WindowProperties.h"
#include <cmath>
/// <summary>
/// Obtains the tangent of the x and y axis 
/// </summary>
class ZAxis {
public:
	//Our formula for the similar triangles: Yp/n = Y/z 
	//Yp: the screen height
	//n the screen depth
	
	//Y: the objects height relative to our screen
	// the z depth relative to our screen

	//takes the radian  
	float calculateRadians(float theta);
	
	float calculateN(float theta);

	float calculateY(sf::RenderWindow& window);

	float calculateZ(float yvalue, float theta, sf::RenderWindow& Window);
};