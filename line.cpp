#include "line.h"



std::vector<std::vector<double>> Lines::getPositionVector() {
	return  { initialPoint, terminalPoint };
}

void Lines::setPositionVector(std::vector<std::vector<double>> newPosition) {
	initialPoint[0] = newPosition[0][0];
	initialPoint[1] = newPosition[0][1];
	initialPoint[2] = newPosition[0][2];
	initialPoint[3] = newPosition[0][3];

	terminalPoint[0] = newPosition[1][0];
	terminalPoint[1] = newPosition[1][1];
	terminalPoint[2] = newPosition[1][2];
	terminalPoint[3] = newPosition[1][3];
}

void Lines::drawShow(bool value) {
	if (value) {
		this->draw = true;
	}
	else if (!value) {
		this->draw = false;
	}
}

void Lines::setPerspective() {
	//get the vector for the projection matrix here
	std::vector<std::vector<double>> fpovMat = fpov.returnProjMat();

	//Then use function to convert values to respective 2D

	VectorFunctions vectorOp;

	std::vector<double> initial3D = vectorOp.matrixMultiply(fpovMat, initialPoint);
	std::vector<double> terminal3D = vectorOp.matrixMultiply(fpovMat, terminalPoint);

	std::cout << "The z in the initial and terminal: " << initialPoint[2] << ", " << terminalPoint[2] << "\n";

	std::cout << "The first value in the matrix: " << initial3D[0] << ", " << terminal3D[0] << "\n";
	std::cout << "The second value in the matrix: " << initial3D[1] << ", " << terminal3D[1] << "\n";

	std::cout << "The third value in the matrix: " << initial3D[2] << ", " << terminal3D[2] << "\n";
	std::cout << "The fourth value in the matrix: " << initial3D[3] << ", " << terminal3D[3] << "\n";

	
	//Sets the perspective of the x and y values for each point respectively
	this->initialPoint[0] = initial3D[0] / initial3D[3];
	this->initialPoint[1] = initial3D[1] / initial3D[3];
	std::cout << "The 3D first value in the matrix: " << initialPoint[0] << ", " << initialPoint[1] << "\n";
	
	
	this->terminalPoint[0] = terminal3D[0] / terminal3D[3];
	this->terminalPoint[1] = terminal3D[1] / terminal3D[3];
	
	std::cout << "The 3D second value in the matrix: " << terminalPoint[0] << ", " << terminalPoint[1] << "\n";
}

bool Lines::clipping() {
	if (initialPoint[0] >= -1 && initialPoint[0] <= 1 || initialPoint[1] >= -1 && initialPoint[1] <= 1 
		|| terminalPoint[0] >= -1 && terminalPoint[0] <= 1 || terminalPoint[1] >= -1 && terminalPoint[1] <= 1) {
		std::cout << 1;
	}
	return false;
}

void Lines::drawLines3D() {
	if (draw){
		sf::Vertex vertex[2];

		vertex[0].position = sf::Vector2f(static_cast<float>(initialPoint[0]), static_cast<float>(initialPoint[1]));
		vertex[1].position = sf::Vector2f(static_cast<float>(terminalPoint[0]), static_cast<float>(terminalPoint[1]));


		sf::VertexBuffer buffer(sf::Lines);

		buffer.create(2);
		buffer.update(vertex);

		window.draw(buffer);
	}
}

double Lines::returnFPOV() {
	return fpov.returnScaling();
}

void Lines::setFPOVScale(double scale) {
	fpov.setScaling(scale);
}