#include <iostream>
#include <SFML/Graphics.hpp>
#include "WindowProperties.h"
#include <cmath>
/// <summary>
/// Obtains the tangent of the x and y axis 
/// </summary>
class ZAxis {
public:

	ZAxis(double xvalue, double yvalue, int theta, double percentagex, double percentagey, sf::RenderWindow& window) : xvalue(xvalue), yvalue(yvalue), theta(theta), percentagex(percentagex), percentagey(percentagey), window(window) {}

	//Our formula for the similar triangles: Yp/n = Y/z 
	//Yp: the screen height
	//n the screen depth
	
	//Y: the objects height relative to our screen
	// the z depth relative to our screen

	//takes the radian  
	float calculateRadians();
	
	//The N value represents the "z" axis the user holds
	float calculateFOV();

	//The Y axis should calculate any y variable on the screen
	//The X axis should calculate any x variable on the screen 
	float calculateY();
	float calculateX ();
	//Get the window Y and imitates the infinity view for the user
	float calculateWindowY();
	float calculateWindowX();


	//gains depth of x and y respectively
	float calculateZY();
	float calculateZX();

	//getters for x y and theta
	double getXValue() const;
	double getYValue() const;
	int getTheta() const;
private:
	sf::RenderWindow& window;
	sf::Vector2f windowSize = window.mapPixelToCoords(sf::Vector2i(static_cast<int>(window.getSize().x), static_cast<int>(window.getSize().y)));
	double xvalue;
	double yvalue;
	int theta;
	double percentagex;
	double percentagey;
	float aspectRatio = windowSize.x / windowSize.y;
};