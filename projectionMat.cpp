#include "projectionMat.h"

std::vector<std::vector<double>> projMat::returnProjMat() {
	return { {x, 0, 0,0 }, {0 , y, 0, 0}, {0, 0, q, w}, {0, 0, z, 0} };
}

double projMat::returnScaling() {
	return w;
}

void projMat::setScaling(double value) {
	this->w = value;
}