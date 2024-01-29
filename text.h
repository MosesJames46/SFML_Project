#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include "fonts.h"

class Text : public sf::Font {
	//Base class for creating text our outputting text onto the screen
	//Have the file for the font and the capability to take input from the users using the sf::Event::TextEntry
private:
	bool stringState = false;
	bool accpetText = false; 
	bool errorState = false;
	std::string errorText = "";
	std::string userText = "";
	//The use of clock will help get a delay this comment is for learning purposes
	sf::Clock clock;
	float textPositionX;
	int typingDelay = 200;
	float textPositionY;
	float floatText = 0;
	sf::RenderWindow& window;
	Get_Fonts textToDisplay;

public:
	Text(float textPositionX, float textPositionY, bool acceptText, sf::RenderWindow& window) :
		textPositionX(textPositionX), textPositionY(textPositionY), accpetText(acceptText), window(window), textToDisplay(this->textPositionX, textPositionY, 12, window) {}
	std::string getText();

	bool setTextToFloat(sf::Event& event);

	void displayText(sf::Event& event);
};