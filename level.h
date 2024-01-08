#pragma once
#include <iostream>
#include <vector>
#include <SFML/Graphics.hpp>


class Level {
public:
	Level(std::vector<std::string>& map, std::string& type, sf::RenderWindow& window);
	void iterate_map();

	void draw_map();
private: 
	std::vector<std::vector<size_t>> map_x_y;
};