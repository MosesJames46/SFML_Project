#pragma once
#include "tile_map.h"
#include <cmath>
#include <vector>





float Tile_Map::get_window_size_x() {   
    return window_width = static_cast<float>(window.getSize().x);
}
float Tile_Map::get_window_size_y() {
    return window_height = static_cast<float>(window.getSize().y);
}

void Tile_Map::set_window_size_x(float x_value) {
    window_width = x_value;
}

void Tile_Map::set_window_size_y(float y_value) {
    window_height = y_value;
}


void Tile_Map::update_window() {
    set_window_size_x(static_cast<float>(window.getSize().x));
    set_window_size_y(static_cast<float>(window.getSize().y));
}

void Tile_Map::get_window_info() {
    float newWidth = static_cast<float>(window.getSize().x);
    float newHeight = static_cast<float>(window.getSize().y);

    if (newWidth != window_width || newHeight != window_height) {
        window_width = newWidth;
        window_height = newHeight;
    }
    
}

void Tile_Map::get_key_press() {
   
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        up = true;
    }
    else {
        up = false;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        left = true;
    }
    else {
        left = false;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        down = true;
    }
    else {
        down = false;
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)){ 
        right = true;
    }
    else {
        right = false;
    }
}

float Tile_Map::get_x_trans() {
    return 0;
}

float Tile_Map::get_y_trans() {
    return 0;
}

void Tile_Map::set_x_trans(float x_value) {
    
}

void Tile_Map::set_y_trans(float y_value) {
    
}
void Tile_Map::get_trasnlation() {
     float pi = static_cast<float>(M_PI);
     float max_win_y = static_cast<float>(window.getSize().y);
     float max_win_x = static_cast<float>(window.getSize().x);
    get_key_press();

    if (up) {
        window.setFramerateLimit(1);
        
        start_y -= .25;
        adjust_y = ((start_x - center_x) * std::sin(theta * 180 / pi) + (start_y - center_y) * std::cos(theta * 180 / pi)) + center_y;
        
    }
    if (down) {
        window.setFramerateLimit(1);
       
        start_y += .25;
        adjust_y = ((start_x - center_x) * std::sin(theta * 180 / pi) + (start_y - center_y) * std::cos(theta * 180 / pi)) + center_y;
    }
    if (left) {
        window.setFramerateLimit(1);
        
        start_x -= .25;
        adjust_x = ((start_x - center_x) * std::cos(theta * 180 / pi) - (start_y - center_y) * std::sin(theta * 180 / pi)) + center_x;
        
    }
    if (right) {
       
        start_x += .25;
        adjust_y = ((start_x - center_x) * std::cos(theta * 180 / pi) - (start_y - center_y) * std::sin(theta * 180 / pi)) + center_x;
    }
    /*std::cout << theta << "\n";*/

}
