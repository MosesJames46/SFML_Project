#pragma once
#include <SFML/Graphics.hpp>	
#include <iostream>
#include <glm.hpp>
#include "projectionMat.h"
class Point {
public:
	Point(double pointPositionX, double pointPositionY, double pointPositionZ, double pointPositionW, sf::RenderWindow& window) :
		pointPositionX(pointPositionX), pointPositionY(pointPositionY), 
		pointPositionZ(pointPositionZ), pointPositionW(pointPositionW),
		window(window) { createPoint3D(); }

	sf::VertexArray createPoint2D();
	sf::VertexArray createPoint3D();
	glm::vec4 pointFromFov();

	void showPoint2D();
	void showPoint3D();
	void printPointLocation();
	void printPointLocation3D();
	void setPoint3D();

	glm::vec4 returnPointVector();

private:
	double pointPositionX = 0;
	double pointPositionY = 0;
	double pointPositionZ = 0;
	double pointPositionW = 1;
	sf::RenderWindow& window;
};