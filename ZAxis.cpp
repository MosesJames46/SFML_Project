#include  "ZAxis.h"



float ZAxis::calculateRadians() {
	return this->theta * 3.14159265359f / 180;
}

//Calculate the value of z where the computer sccreen would be.
//Something to note, the theta must be converted to radians befor being used.
float ZAxis::calculateFOV() {
	return ((1 / std::tan(static_cast<float>(this->theta))) / (2.0f * aspectRatio));
}

//Returns the y value of the window screen or height depth same for width
//Update functions to now adjust based on a 
float ZAxis::calculateY() {
	unsigned int windowY = window.getSize().y;
	return static_cast<float>(windowY * this->percentagey);
}

float ZAxis::calculateX() {
	unsigned int windowX = window.getSize().x;
	return static_cast<float>(windowX * this->percentagex);
}

//Returns the window perspective of x and y respectively
float ZAxis::calculateWindowY() {
	unsigned int windowY = window.getSize().y;
	return static_cast<float>(windowY);
}
float ZAxis::calculateWindowX() {
	unsigned int windowX = window.getSize().x;
	return static_cast<float>(windowX);
}




//Use the formula Yp/n=y/z and solves for z, so z = y*n/Yp
// 1-9-24 version works 

//Calculates the zaxis in y
float ZAxis::calculateZY() {
	float value  = static_cast<float>(this->yvalue) * calculateFOV() / calculateY();
	/*std::cout << " The z y value = " << value << "\n";*/
	return value;
}

//calculates the z axis in x
float ZAxis::calculateZX() {
	float value = static_cast<float>(this->xvalue)* calculateFOV() / calculateX();
	/*std::cout << " The z x value = " << value << "\n"*/;
	return value;
}



double ZAxis::getXValue() const{
	return this->xvalue;
}

double ZAxis::getYValue() const {
	return this->yvalue;
}

int ZAxis::getTheta() const {
	return this->theta;
}
