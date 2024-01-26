#include "triangle.h"


//Functions to change the radius otherwise the radius is 1
void Triangle::setRadiusPoint1(float value){
	this->point1.setRadius(value);
}

void Triangle::setRadiusPoint2(float value) {
	this->point2.setRadius(value);
}
void Triangle::setRadiusPoint3(float value) {
	this->point3.setRadius(value);
}

void Triangle::setAllRadii(float value) {
	Triangle::setRadiusPoint1(value);
	Triangle::setRadiusPoint2(value);
	Triangle::setRadiusPoint3(value);
}


//Functoins to return the radius value
float Triangle::getRadiusPoint1() { return this->point1.getRadius(); }
float Triangle::getRadiusPoint2() { return this->point1.getRadius(); }
float Triangle::getRadiusPoint3() { return this->point1.getRadius(); }

std::vector<float> Triangle::getAllRadii() {
	return { Triangle::getRadiusPoint1(), Triangle::getRadiusPoint2() , Triangle::getRadiusPoint3() };
}

void Triangle::readAllRadii() {
	for (const auto& items : Triangle::getAllRadii()) {
		std::cout << items << "\n";
	}
}


//sets position of triangle relative to the origin
void Triangle::initPoint1Position() { 
	this->point1.setPosition(sf::Vector2f(this->originPosition[0][0], this->originPosition[0][1]));
}
void Triangle::initPoint2Position() {
	this->point2.setPosition(sf::Vector2f(this->originPosition[1][0], this->originPosition[1][1]));
}
void Triangle::initPoint3Position() {
	this->point3.setPosition(sf::Vector2f(this->originPosition[2][0], this->originPosition[2][1]));
}

bool Triangle::initAllPositions() {
	initPoint1Position();
	initPoint2Position();
	initPoint3Position();
	this->positionInit = true;
	return true;
}

//returns the values of the position
sf::Vector2f Triangle::returnPosition1() { return this->point1.getPosition(); }

sf::Vector2f Triangle::returnPosition2() { return this->point2.getPosition(); }

sf::Vector2f Triangle::returnPosition3() { return this->point3.getPosition(); }

void Triangle::readPositions() {
	std::cout << "The x position of point1: " << returnPosition1().x << " The y position of point1 " << returnPosition1().y << "\n";
	std::cout << "The x position of point2: " << returnPosition2().x << " The y position of point2 " << returnPosition2().y << "\n";
	std::cout << "The x position of point3: " << returnPosition3().x << " The y position of point3 " << returnPosition3().y << "\n";
}


//Initializes positions then draws them
void Triangle::displayPoitions() {
	window.draw(this->point1);
	window.draw(this->point2);
	window.draw(this->point3);

}

void Triangle::drawLines() {

	//Initialize the number of values in the array
	sf::Vertex vertex[2];

	//set the positions of the points to draw lines between them
	vertex[0].position = returnPosition1() + sf::Vector2f(getRadiusPoint1(), getRadiusPoint1());
	vertex[1].position = returnPosition2() + sf::Vector2f(getRadiusPoint2(), getRadiusPoint2());
	

	sf::VertexBuffer vertextBuffer1(sf::Lines);
	vertextBuffer1.create(2);
	vertextBuffer1.update(vertex);
	window.draw(vertextBuffer1);

	sf::Vertex vertex2[2];

	//set the positions of the points to draw lines between them
	vertex2[0].position = returnPosition2() + sf::Vector2f(getRadiusPoint2(), getRadiusPoint2());
	vertex2[1].position = returnPosition3() + sf::Vector2f(getRadiusPoint3(), getRadiusPoint3());


	sf::VertexBuffer vertextBuffer2(sf::Lines);
	vertextBuffer2.create(2);
	vertextBuffer2.update(vertex2);
	window.draw(vertextBuffer2);

	sf::Vertex vertex3[2];

	//set the positions of the points to draw lines between them
	vertex3[0].position = returnPosition3() + sf::Vector2f(getRadiusPoint3(), getRadiusPoint3());
	vertex3[1].position = returnPosition1() + sf::Vector2f(getRadiusPoint1(), getRadiusPoint1());


	sf::VertexBuffer vertextBuffer3(sf::Lines);
	vertextBuffer3.create(2);
	vertextBuffer3.update(vertex3);
	window.draw(vertextBuffer3);

}

void Triangle::scalePoint1(float x, float y) {

	if (this->positionInit) {
		float xPos = returnPosition1().x;
		float yPos = returnPosition1().y;
		this->point1.setPosition(sf::Vector2f(xPos + x, yPos + y));
	}

	
}

void Triangle::scalePoint2(float x, float y) {

	if (this->positionInit) {
		float xPos = returnPosition2().x;
		float yPos = returnPosition2().y;
		this->point2.setPosition(sf::Vector2f(xPos + x, yPos + y));
	}

}

void Triangle::scalePoint3(float x, float y) {

	if (this->positionInit) {
		float xPos = returnPosition3().x;
		float yPos = returnPosition3().y;
		this->point3.setPosition(sf::Vector2f(xPos + x, yPos + y));
	}

}