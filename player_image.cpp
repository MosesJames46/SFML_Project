#include "player_image.h"
#include "get_view.h"


PlayerImage::PlayerImage() {
    // Constructor logic, if needed
}

PlayerImage::~PlayerImage() {
    // Destructor logic, if needed
}

bool PlayerImage::load_texture(const std::string& filePath) {
    if (!texture.loadFromFile(filePath)) {
        std::cerr << "Failed to load the image: " << filePath << std::endl;
        return false;
    }

    sprite.setTexture(texture);
    return true;
}

void PlayerImage::set_position(float x, float y) {
    sprite.setPosition(x, y);
}

void PlayerImage::draw(sf::RenderWindow& window) {
    window.draw(sprite);
}
void PlayerImage::move_player(sf::RenderWindow& window) {
    GameView game_view;
    float x_value = static_cast<float>(PlayerClass::window_width);
    float y_value = static_cast<float>(PlayerClass::window_height);

    PlayerImage::update();
    PlayerImage::player_movement();
    sf::Vector2f position = sprite.getPosition();
    //if (position.x > x_value - 15) {
    //    sprite.setPosition(x_value - 16, position.y);

    //}
    //if (position.x < 0) {
    //    sprite.setPosition(0.0, position.y);
    //    
    //}
    //if (position.y > y_value - 35) {
    //    sprite.setPosition(position.x, y_value - 36);
    //}
    //if (position.y < 0) {
    //    sprite.setPosition(position.x, 0);
    //}
    //else {
    //    sprite.move(sf::Vector2f(PlayerImage::get_x_vel(), PlayerImage::get_y_vel()));
    //    
    //}
    //Centers window view around player
    window.clear();
    game_view.update_view(sprite.getPosition());
    sprite.move(sf::Vector2f(PlayerImage::get_x_vel(), PlayerImage::get_y_vel()));
    window.setView(game_view.get_view());
    ;

    //draws Player during game loop
    
    
    PlayerImage::draw(window);

    
}

