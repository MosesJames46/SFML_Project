#include "platform.h"
#include <tuple>


Platform::Platform(const std::string& file_name) {
	texture.loadFromFile(file_name);
	sprite.setTexture(texture);

}

void Platform::draw_platform(sf::RenderWindow& window) {
	window.draw(sprite);
}


//Iterates over a nested vector and attempts to obtain a tuple of int where each hash is located. Will be used for outputting many sprites later.
