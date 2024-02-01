#include "projectionMat.h"

glm::mat4 projMat::returnProjMat() {
	glm::mat4 FOV{ 
		x, 0 , 0 ,0,
		0, y, 0, 0,
		0, 0, q, 0,
		0, 0, z, w
	};
	
	return FOV;
}

double projMat::returnScaling() {
	return w;
}

void projMat::setScaling(double value) {
	this->w = value;
}