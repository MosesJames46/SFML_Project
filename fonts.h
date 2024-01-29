#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <iomanip>
#include <sstream>

class Get_Fonts {

public:
	Get_Fonts(float x, float y, int fontSize, sf::RenderWindow& window) : 
		text(text), x(x) , y(y), fontSize(fontSize), window(window) {}
	// Get_font function takes four parameters that contribute to outputing text on window screen.
	bool getStringFont(std::string& value);

	bool getFloatFont(float value);

private:
	const std::string directory = "data/fonts/consola.ttf";
	sf::Font some_font;
	sf::RenderWindow& window;
	std::string text;
	float textValue;
	float x;
	float y;
	int fontSize;

};

