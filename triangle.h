#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "fonts.h"

class Triangle {
private:
	sf::CircleShape point1;
	sf::CircleShape point2;
	sf::CircleShape point3;
	std::vector<std::vector<float>> originPosition = {
		{-1, 1},
		{1, 1},
		{-1, -1}
	};
	sf::RenderWindow& window;
	bool positionInit = false;

public:
	Triangle(sf::RenderWindow& window) : window(window) {}

	//prints out triangles
	std::vector<float> getTrianglePoints();

	void setRadiusPoint1(float value);
	void setRadiusPoint2(float value);
	void setRadiusPoint3(float value);

	void setAllRadii(float value);


	//Functions to get the radius 
	float getRadiusPoint1();
	float getRadiusPoint2();
	float getRadiusPoint3();
	//Returns all radii
	std::vector<float> getAllRadii();
	//Read all radii
	void readAllRadii();

	//initialize the position of each point
	void initPoint1Position();
	void initPoint2Position();
	void initPoint3Position();

	bool initAllPositions();

	//Return the position of the triangle
	sf::Vector2f returnPosition1();
	sf::Vector2f returnPosition2();
	sf::Vector2f returnPosition3();



	void readPositions();

	void displayPoitions();

	void drawLines();

	void scalePoint1(float x, float y);
	void scalePoint2(float x, float y);
	void scalePoint3(float x, float y);

};