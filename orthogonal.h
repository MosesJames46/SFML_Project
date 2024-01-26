#pragma once
#include <SFML/Graphics.hpp>
#include <cmath>
#include <iostream>
#include <thread>
#include <chrono>

class Orthogonal {
public:
    Orthogonal(double xvalue, double yvalue, sf::Color color, sf::RenderWindow& window) : xvalue(xvalue), yvalue(yvalue), color(color),window(window) {}

    void draw_points(double xvalue, double yvalue, double xtan, double ytan);
    void drawCircleXY(double xvalue, double yvalue);
    void drawCircleOwn();
private:
    sf::RenderWindow& window;
    double xvalue;
    double yvalue;
    sf::Color color;
};