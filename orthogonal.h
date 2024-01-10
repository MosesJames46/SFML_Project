#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <thread>
#include <chrono>

class Orthogonal {
public:
    void draw_points(sf::RenderWindow& window);
    void drawCircleXY(float xvalue, float yvalue, sf::RenderWindow& window);

};