#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <SFML/Graphics.hpp>

class VectorFunctions {

public:


	
	//find the magnitude of vectors
	double magnitude2D();
	float distance2D(std::vector<double> point1, std::vector<double> point2);
	std::vector<double> matrixMultiply(std::vector<std::vector<double>> mat, std::vector<double> vec);
	
	void readMat(std::vector<double> mat1);

private:

	
};