#include "get_view.h"

GameView::GameView(){
	//Initialize View
	float x_value = static_cast<float>(PlayerImage::window_width);
	float y_value = static_cast<float>(PlayerImage::window_width);
	view.setSize(x_value, y_value);
}

void GameView::update_view(const sf::Vector2f& targetPosition) {
	view.setCenter(targetPosition);
}

const sf::View& GameView::get_view() const {
	return view;
}