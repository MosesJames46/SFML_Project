#include "transform.h"

void Transform::scaleLines(Lines& line, double scalingValue) {
	std::vector<std::vector<double>> positionVectors = line.getPositionVector();

	std::vector<double> initialPosition = positionVectors[0];
	std::vector<double> terminalPosition = positionVectors[1];

	double oldScaleValue = line.returnFPOV();

	line.setFPOVScale(scalingValue);
	double newScaleValue = line.returnFPOV();

	initialPosition[0] = initialPosition[0] * oldScaleValue;
	initialPosition[1] = initialPosition[1] * oldScaleValue;

	initialPosition[0] = initialPosition[0] / newScaleValue;
	initialPosition[1] = initialPosition[1] / newScaleValue;

	terminalPosition[0] = terminalPosition[0] * oldScaleValue;
	terminalPosition[1] = terminalPosition[1] * oldScaleValue;

	terminalPosition[0] = terminalPosition[0] / newScaleValue;
	terminalPosition[1] = terminalPosition[1] / newScaleValue;

	line.setPositionVector({ initialPosition , terminalPosition });
	std::vector<std::vector<double>> positionVectorsNew = line.getPositionVector();
	std::vector<double> initialPositionNew = positionVectors[0];
	std::vector<double> terminalPositionNew = positionVectors[1];

}

void Transform::rotateLines(Lines& line) {

	double cosTheta = std::cos(4);
	double sinTheta = std::sin(4);
	std::vector<std::vector<double>> positionVectors = line.getPositionVector();

	std::vector<double> initialPosition = positionVectors[0];
	std::vector<double> terminalPosition = positionVectors[1];

	initialPosition[0] = initialPosition[0] * cosTheta - initialPosition[1] * sinTheta;
	initialPosition[1] = initialPosition[0] * sinTheta + initialPosition[1] * cosTheta;


	terminalPosition[0] = terminalPosition[0] * cosTheta - terminalPosition[1] * sinTheta;
	terminalPosition[1] = terminalPosition[0] * sinTheta + terminalPosition[1] * cosTheta;
	std::cout << "The positions after rotation: " << initialPosition[0] << ", " << initialPosition[1] << "\n";

	line.setPositionVector({ initialPosition , terminalPosition });
}