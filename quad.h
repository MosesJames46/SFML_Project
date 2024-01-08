#pragma once
#include <SFML/Graphics.hpp>
#include "mouse_property.h"
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
class Quad : public sf::VertexArray {
public:
    Quad(float x, float y, float window_size_x, float window_size_y, sf::Color color);
    Quad(float angle_x, float angle_y, float window_size_x, float window_size_y, bool use_sine);

    void is_mouse_hovering_tile(sf::RenderWindow& window);
    void quad_color();
    void draw_quad(sf::RenderWindow& window);
    sf::Vector2f get_quad_0();
    sf::Vector2f get_quad_1();
    sf::Vector2f get_quad_2();
    sf::Vector2f get_quad_3();
    bool is_hovered = false;
    sf::VertexArray quad;

    float get_angle_x();
    float get_angle_y();

    void set_angle_x(float angle_x);
    void set_angle_y(float angle_y);

private:
    float pi =  static_cast<float>(M_PI);
    float angle_x = 0;
    float angle_y = 0;
    bool use_sine = false;
    float sin_x = std::tan(angle_x);
    float sin_y = std::tan(angle_y);
    float x = 0;
    float y = 0;

};

