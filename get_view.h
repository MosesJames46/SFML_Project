#pragma once
#include "player_image.h"
#include <SFML/Graphics.hpp>

class GameView : public PlayerImage {
public:
	GameView();
	
	void update_view(const sf::Vector2f& target_position);
	const sf::View& get_view() const;
private:
	sf::View view;
};