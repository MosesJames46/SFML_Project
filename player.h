#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
class PlayerClass {
public: 
	//Velocity of player
	int window_width = 600;
	int window_height = 600;


	bool player_up, player_down, player_left, player_right = false;
	bool player_face_right{ false };
	bool player_face_left{ false };

	void update();

	//Getters for x and y velocity
	float get_x_vel();
	float get_y_vel();

	//Get x and y pos
	float get_x_pos();
	float get_y_pos();


	//Set x and y pos
	void set_x_pos(float x_value);
	void set_y_pos(float y_value);
	

	//Setters for x and y velocity
	void set_x_vel(float x_vel);
	void set_y_vel(float y_vel);

	float update_player_x_position();
	float update_player_y_position();
	
	void player_movement();
	

private:
	float player_x_pos = 0;
	float player_y_pos = 0;
	//How fast player going
	float player_x_vel{ 0 };
	float player_y_vel{ 0 };
	
	

};