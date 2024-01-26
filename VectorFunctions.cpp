#include "VectorFunctions.h"




double VectorFunctions::magnitude2D() {
	double magnitude = std::sqrt(std::pow(this->vector2D[0], 2) + std::pow(this->vector2D[1], 2) + std::pow(this->vector2D[2], 2));
	return magnitude;
}

std::vector<std::vector<float>> VectorFunctions::matrixMultiply(std::vector<std::vector<float>> mat1) {
	
	std::vector<std::vector<float>> newMat;
	
	//The amount of rows inside 
	for (int i = 0; i < mat1[0].size(); i++) {
		std::vector<float> newVector;
		//The amount of columns inside
		for (int j = 0; j < this->vector2D.size(); j++) {
			//mat1[i] steps into the outside vecotr and mat[i][j] steps into each value of each vector
			//mat2[j] makes sure the values of the vector gets multiplied to ever value in mat1
			newVector.push_back(mat1[i][j] * this->vector2D[j]);
		}
		newMat.push_back(newVector);
	}
	this->matrix = newMat;
	return this->matrix;
}

void VectorFunctions::readMat() {
	for (const auto& outter : this->matrix) {
		for (const auto& inner : outter) {
			std::cout << inner << " ,";
		}
		std::cout << "\n";
	}
}

//Takes two points and gets their distance
float VectorFunctions::distance2D(std::vector<float> point1, std::vector<float> point2) {
	return static_cast<float>(std::sqrt(std::pow((point2[0] - point1[0]), 2) + std::powf((point2[1] - point1[1]), 2)));
}