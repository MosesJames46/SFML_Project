#pragma once
#include <iostream>
#include "level.h"
#include <SFML/Graphics.hpp>

class Platform{
public:
	//Create platforms that read from some string element.
	Platform(const std::string& file_name);
	void draw_platform(sf::RenderWindow& window);
	/*void set_position(const std::vector<std::vector <std::string&>> map);*/
private:
	sf::Texture texture;
	sf::Sprite sprite;
	float position_x{ 0 };
	float position_y{ 0 };

};