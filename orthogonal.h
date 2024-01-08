#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <thread>
#include <chrono>
#include "tile_map.h"




class Orthogonal : public Tile_Map {
public:
	
	Orthogonal(sf::RenderWindow& window) : Tile_Map(window) {}
	void line_draw_test();
	void draw_cube(float x, float y, float zX, float zY, float offset);
	float transform(float x_or_y, float z);
	void make_line(float x, float y, sf::Color color1, sf::Color color2);
private:
	float radians = (theta / 180) * 3.1415926535f;
	float a = (45);
	float n = 1 / (std::tan(a)/2);
	
	float fov_place = std::tan(radians) / 2;

};