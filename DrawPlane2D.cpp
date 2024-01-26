#include "DrawPlane2D.h"

//This is used to get the center of both x and y
unsigned int Draw2DPlane::getCenterX() {
	/*std::cout << this->centerX << "\n";*/
	return this->centerX;
}

unsigned int Draw2DPlane::getCenterY() {
	/*std::cout << this->centerY << "\n";*/
	return this->centerY;
}
// end 


//Should be called to set the center
void Draw2DPlane::setCenterX() {
	centerX = window.getSize().x;

}

void Draw2DPlane::setCenterY() {
	centerY = window.getSize().y;
}
// end


void Draw2DPlane::drawPlane() {
	
	float centerX = this->x/2;
	float centerY = this->y/2;
	sf::CircleShape point;
	
	point.setRadius(1);
	point.setPosition(centerX,  centerY);
	point.setFillColor(sf::Color::Red);
	window.draw(point);

	//center to the left
	drawLine(centerX, centerY, 0, centerY);
	// center to down
	drawLine(centerX, centerY, centerX, this->y);
	//up
	drawLine(centerX, centerY, centerX, 0);
	//right
	drawLine(centerX, centerY, this->x, centerY);
	
}

void Draw2DPlane::drawLine(float point1x, float point1y, float point2x, float point2y) {
	sf::VertexArray lineSegment(sf::Lines, 2);
	lineSegment[0].position = sf::Vector2f(point1x, point1y);
	lineSegment[1].position = sf::Vector2f(point2x, point2y);

	lineSegment[0].color = sf::Color::Red;
	lineSegment[1].color = sf::Color::Blue;
	window.draw(lineSegment);
	
	
}

void Draw2DPlane::drawFromCenter(float point2x, float point2y) {
	sf::VertexArray lineSegment(sf::Lines, 2);
	lineSegment[0].position = sf::Vector2f(static_cast<float>(this->centerX) / 2.0f,  static_cast<float>(this->centerY) / 2.0f);
	lineSegment[1].position = sf::Vector2f(point2x, point2y);
	

	lineSegment[0].color = sf::Color::White;
	lineSegment[1].color = sf::Color::Green;
	window.draw(lineSegment);
}