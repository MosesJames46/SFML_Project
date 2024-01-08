#pragma once
#include "player.h"

class PlayerImage : public PlayerClass {
public:
    PlayerImage();
    ~PlayerImage();

    

    bool load_texture(const std::string& filePath);
    void set_position(float x, float y);
    void draw(sf::RenderWindow& window);
    void move_player(sf::RenderWindow& window);


private:
    sf::View view;
    sf::Texture texture;
    sf::Sprite sprite;
};
