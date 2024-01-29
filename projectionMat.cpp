#include "projectionMat.h"

glm::mat4 projMat::returnProjMat() {
	glm::mat4 FOV{ 
		x, 0 , 0 ,0,
		0, y, 0, 0,
		0, 0, q, w,
		0, 0, z, 0
	};
	
	return FOV;
}

double projMat::returnScaling() {
	return w;
}

void projMat::setScaling(double value) {
	this->w = value;
}