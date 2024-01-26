#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <SFML/Graphics.hpp>
class VectorFunctions {

public:
	VectorFunctions(float x, float y) : x(x), y(y) {}
	VectorFunctions(float x, float y, float z) : x(x), y(y), z(z) {}
	
	//find the magnitude of vectors
	double magnitude2D();
	float distance2D(std::vector<float> point1, std::vector<float> point2);
	std::vector<std::vector<float>> matrixMultiply(std::vector<std::vector<float>> mat1);
	
	void readMat();

private:
	std::vector<std::vector<float>> matrix{};
	
	float x;
	float y;
	float z;
	std::vector<float> vector2D{ x, y };
	std::vector<float> vector3D{ x,y,z };
};