#include "point.h"

sf::VertexArray Point::createPoint2D() {

	sf::VertexArray pointArray(sf::Points);
	
	pointArray.append(sf::Vector2f(static_cast<float>(pointPositionX), static_cast<float>(pointPositionY)));
	return pointArray;
}

sf::VertexArray Point::createPoint3D() {
	glm::vec4 pointPosition = pointFromFov();
	
	if (pointPosition.w != 0 ){
		sf::Vector2f pointIn3D(static_cast<float>(pointPosition.x),
			static_cast<float>(pointPosition.y));
		sf::VertexArray pointArray(sf::Points);

		pointArray.append(sf::Vertex(pointIn3D, sf::Color::White));
		return pointArray;
	}
	else {
		sf::VertexArray pointArray(sf::Points);
		
		pointArray.append(sf::Vector2f(0, 0));
		return pointArray;
	}

	
}

void Point::setPoint3D() {
	glm::vec4 point3D = pointFromFov();
	pointPositionX = point3D.x / point3D.w;
	pointPositionY = point3D.y / point3D.w;
	pointPositionZ = point3D.z / point3D.w;
}

glm::vec4 Point::pointFromFov() {
	projMat fPov(window);

	glm::vec4 pointVector{ pointPositionX , pointPositionY, pointPositionZ, pointPositionW };

	glm::vec4 pointPositionVector = fPov.returnProjMat() * pointVector;

	return pointPositionVector;
}

void Point::showPoint2D() {
	
	window.draw(createPoint2D());
	
}

void Point::printPointLocation() {
	std::cout << "The x position and the y position: " << pointPositionX << ", " << pointPositionY << "\n";

}

void Point::printPointLocation3D() {


	std::cout << "The x position and the y position: " << pointPositionX << ", " << pointPositionY << "\n";

}

void Point::showPoint3D() {
	window.draw(createPoint3D());
}