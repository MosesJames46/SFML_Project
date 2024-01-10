#include  "ZAxis.h"



float ZAxis::calculateRadians(float theta) {
	return theta * 3.14159265359f / 180;
}

//Calculate the value of z where the computer sccreen would be.
//Something to note, the theta must be converted to radians befor being used.
float ZAxis::calculateN(float theta) {
	return (1 / std::tan(theta)) / 2.0f;
}

//Returns the y value of the window screen or height
float ZAxis::calculateY( sf::RenderWindow& window) {
	unsigned int windowY = window.getSize().y;
	return static_cast<float>(windowY);
}

//Use the formula Yp/n=y/z and solves for z, so z = y*n/Yp
// 1-9-24 version works 
float ZAxis::calculateZ(float yvalue, float theta, sf::RenderWindow& window) {
	return yvalue * calculateN(theta) / calculateY(window);
}

