#pragma once
#include "player.h"
#include "quad.h"

class Tile_Map {
public:
	Tile_Map( sf::RenderWindow& window, int window_width, int window_height) : window(window), window_width(static_cast<float>(window_width)), window_height(static_cast<float>(window_height)) {}
	Tile_Map(sf::RenderWindow& window, int window_width, int window_height, bool draw_circle) : window(window), window_width(static_cast<float>(window_width)), window_height(static_cast<float>(window_height)), draw_circle(draw_circle){}
	Tile_Map(sf::RenderWindow& window) : window(window) {}
	
	//Iterate over the the length of the window which is 600 and then the height of the window
	/*void draw_tiles();*/
	/*void draw_circles();*/
	
	std::vector<std::vector<sf::Vector2f>> quad_vectors();

	float get_window_size_x();

	float get_window_size_y();

	void set_window_size_x(float x_value);

	void set_window_size_y(float y_value);

	void get_window_info();
	void update_window();

	void get_trasnlation();

	void get_key_press();

	float get_x_trans();
	float get_y_trans();

	void set_x_trans(float x_value);
	void set_y_trans(float y_value);

private:
	bool up, down, left, right = false;
	
	
	
protected:
	
	sf::RenderWindow& window;
	float window_width = static_cast<float>(window.getSize().x);// Change this to your tile width
	float window_height = static_cast<float>(window.getSize().y); // Change this to your tile height
	float center_x = window_width / 2;
	float center_y = window_height / 2;
	float start_x = window_width / 4;
	float start_y = window_height / 4;
	float end_x = window_width / 2 + start_x;
	float end_y = window_height / 2 + start_y;
	bool window_change = false;
	float theta = 45;
	bool draw_circle = false;
	float adjust_x = 1.0f;
	float adjust_y = 1.0f;
};



