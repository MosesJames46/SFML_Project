#include "fonts.h"
bool Get_Fonts::getStringFont(std::string& value) {

	//Load ttf file from data folder
	if (!some_font.loadFromFile(this->directory)) {
		std::cerr << "File could not be loaded. \n";
		return false;
	}

	sf::Text place_holder(value, this->some_font, this->fontSize);
	place_holder.setPosition(this->x, this->y);
	place_holder.setFillColor(sf::Color::White);
	window.draw(place_holder);
	return true;

}

bool Get_Fonts::getFloatFont(float value) {

	//Load ttf file from data folder
	if (!some_font.loadFromFile(this->directory)) {
		std::cerr << "File could not be loaded. \n";
		return false;
	}
	std::string newValue = std::to_string(value);
	std::ostringstream oss;
	oss << std::fixed << std::setprecision(2) << value; 
	std::string newString = oss.str();
	sf::Text place_holder(newString, this->some_font, this->fontSize);
	place_holder.setPosition(this->x, this->y);
	place_holder.setFillColor(sf::Color::White);
	window.draw(place_holder);
	return true;

}