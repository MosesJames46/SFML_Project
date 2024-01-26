#include "fonts.h"
void Get_Fonts::get_font(const std::string& fileName, const std::string& text, int font_size, sf::RenderWindow& window) {

	//Load ttf file from data folder
	some_font.loadFromFile(fileName);
	sf::Text place_holder(text, some_font, font_size);
	window.draw(place_holder);
}

void Get_Fonts::text_box() {

}