#include "quad.h"



Quad::Quad(float x, float y, float window_size_x, float window_size_y, sf::Color color) {
    quad.setPrimitiveType(sf::Quads);
    quad.resize(4);
    quad[0].position = sf::Vector2f(x, y);
    quad[1].position = sf::Vector2f(x + 2, y);
    quad[2].position = sf::Vector2f(x + 2, y + 2);
    quad[3].position = sf::Vector2f(x, y + 2);
    quad[0].color = color;
    quad[1].color = color;
    quad[2].color = color;
    quad[3].color = color;
}

Quad::Quad(float sin_x, float sin_y, float window_size_x, float window_size_y, bool use_sine) {
    set_angle_x(sin_x);
    set_angle_y(sin_y);
    //converts to radians
    angle_x =  (get_angle_x() * pi / 180);
    angle_y = (get_angle_y() * pi / 180);
    quad.setPrimitiveType(sf::Quads);
    quad.resize(4);
    quad[0].position = sf::Vector2f(angle_x, angle_y);
    quad[1].position = sf::Vector2f(angle_x + 10, angle_y);
    quad[2].position = sf::Vector2f(angle_x + 10, angle_y + 10);
    quad[3].position = sf::Vector2f(angle_x, angle_y + 10);
    std::cout << angle_x << std::endl;
}

void Quad::is_mouse_hovering_tile(sf::RenderWindow& window) {

    MouseProperty mouse(window);
    float mouse_x = static_cast<float>(mouse.get_mouse_position_x());
    float mouse_y = static_cast<float>(mouse.get_mouse_position_y());

    // Calculate the boundaries of the tile


    // Check if the mouse position is within the boundaries of the tile
    if (mouse_x >= quad[0].position.x && mouse_x <= quad[1].position.x && mouse_y >= quad[1].position.y && mouse_y <= quad[2].position.y) {
        is_hovered = true;
    }

}



void Quad::quad_color() {
    if (is_hovered == true) {
        quad[0].color = sf::Color::Red;
        quad[1].color = sf::Color::Red;
        quad[2].color = sf::Color::Red;
        quad[3].color = sf::Color::Red;
    }
}

void Quad::draw_quad(sf::RenderWindow& window) {
    window.draw(Quad::quad);
}


sf::Vector2f Quad::get_quad_0() {
    return quad[0].position;
}
sf::Vector2f Quad::get_quad_1() {
    return quad[1].position;
}
sf::Vector2f Quad::get_quad_2() {
    return quad[2].position;
}
sf::Vector2f Quad::get_quad_3() {
    return quad[3].position;
}

float Quad::get_angle_x() {
    return angle_x;
}

float Quad::get_angle_y() {
    return angle_y;
}

void Quad::set_angle_x(float value_x) {
    angle_x = value_x;
}

void Quad::set_angle_y(float value_y) {
    angle_y = value_y;
}