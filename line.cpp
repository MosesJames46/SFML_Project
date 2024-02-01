#include "line.h"


void Lines::drawLines() {
	initialPoint.createPoint3D();
	terminalPoint.createPoint3D();

	initialPoint.setPoint3D();
	terminalPoint.setPoint3D();

	initialPosition = terminalPoint.returnPointVector();
	terminalPosition = initialPoint.returnPointVector();
	
	double changeInX = terminalPosition.x - initialPosition.x;
	double changeInY = terminalPosition.y - initialPosition.y;

	double lengthOfLine = std::sqrt(changeInX * changeInX + changeInY * changeInY);

	double angleTheta = std::atan2(changeInY, changeInX);

	for (double i = 0; i < lengthOfLine; i+= .001) {
		double newPointX = initialPosition.x + std::cos(angleTheta) * i;
		double newPointY = initialPosition.y + std::sin(angleTheta) * i;
		Point pointOfIntrest(newPointX, newPointY, 0, 1, window);
		pointVector.push_back(pointOfIntrest);
	}

	for (int i = 0; i < pointVector.size(); i++) {
		pointVector[i].createPoint3D();
		pointVector[i].setPoint3D();
		
		/*std::cout << "The position above is the position relative to this i: " << i << "\n";*/
		pointVector[i].showPoint3D();

		
	}

}