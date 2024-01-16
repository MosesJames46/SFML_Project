#include "VectorFunctions.h"



double VectorFunctions::magnitude(std::vector<double> values) {
	double magnitude = std::sqrt(std::pow(values[0], 2) + std::pow(values[1], 2) + std::pow(values[2], 2));
	return magnitude;
}

std::vector<std::vector<float>> VectorFunctions::frustum(double xvalue, double yvalue, int theta, double percentagex, double percentagey, sf::RenderWindow& window) {
	ZAxis point(xvalue, yvalue, theta, percentagex, percentagey, window);
	//| aspectRatio * fov * x			0			0			0|
	//|						0			f			0			0|
	//|						0			0			Zfar
	std::vector<float> view = { {point.calculateFOV(), 0 , 0 , 0}, { 0,  point.calculateFOV() * (window.getSize().x / window.getSize().y), 0,0}, {0 , 0,  };
}
