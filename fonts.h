#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
class Get_Fonts {

public:

	// Get_font function takes four parameters that contribute to outputing text on window screen.
	void get_font(const std::string& fileName, const std::string& text, int font_size, sf::RenderWindow& window );
	void text_box();

private:
	sf::Font some_font;

};

