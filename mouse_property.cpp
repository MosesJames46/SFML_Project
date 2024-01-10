#include "mouse_property.h"




void MouseProperty::draw_mouse_position(sf::RenderWindow& window) {
	sf::CircleShape circle(3);

	sf::Vector2i mousePosition = sf::Mouse::getPosition(window);
	
	circle.setFillColor(sf::Color::Red);
	circle.setPosition(sf::Vector2f(static_cast<float>(mousePosition.x), static_cast<float>(mousePosition.y)));
	
	window.clear();
	window.draw(circle);
	
}


