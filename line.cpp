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
	

	//Then use function to convert values to respective 2
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
