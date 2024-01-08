#include "player.h"
#include "player_image.h"
#include <iostream>

//If you have a variable defined in your header you can create a constructor definition


//Memeber function definition 

//The update function is in the main game loop, it enables updtaes and also 
void PlayerClass::update(){
	if (player_right) {
		PlayerClass::set_x_vel(.5f);
		//Trun player around
		PlayerClass::player_face_left = false;
		PlayerClass::player_face_right = true;
		PlayerClass::get_x_vel();
		//Set new position
		PlayerClass::update_player_x_position();
	}
	if (player_left) {
		//Trun player around
		PlayerClass::player_face_right = false;
		PlayerClass::player_face_left = true;
		PlayerClass::set_x_vel(-.5f);
		PlayerClass::get_x_vel();
		//Update position
		PlayerClass::update_player_x_position();
	}
	if (player_down) {
		PlayerClass::set_y_vel(.5f);
		PlayerClass::get_y_vel();
		PlayerClass::update_player_y_position();
	}
	if (player_up) {
		PlayerClass::set_y_vel(-.5f);
		PlayerClass::get_y_vel();
		PlayerClass::update_player_y_position();
	}
	if (!(PlayerClass::player_left || PlayerClass::player_right)) {
		PlayerClass::set_x_vel(0);
		PlayerClass::get_x_vel();
	}
	if (!(PlayerClass::player_up || PlayerClass::player_down)) {
		PlayerClass::set_y_vel(0);
		PlayerClass::get_y_vel();
	}
	PlayerClass::set_x_pos(PlayerClass::get_x_pos());
	PlayerClass::set_y_pos(PlayerClass::get_y_pos());

}
//x velcoity getter
float PlayerClass::get_x_vel(){
	return PlayerClass::player_x_vel;
}
//y velocity getter
float PlayerClass::get_y_vel() {
	return PlayerClass::player_y_vel;
}

//Setter for x vel
void PlayerClass::set_x_vel(float x_value) {
	PlayerClass::player_x_vel = x_value;
	/*std::cout << PlayerClass::get_x_vel() << std::endl;*/
}

//Setter for y vel
void PlayerClass::set_y_vel(float y_value) {
	PlayerClass::player_y_vel = y_value;
	/*std::cout << PlayerClass::get_y_vel() << std::endl;*/
}

							  
//Getter for x pos				
float PlayerClass::get_x_pos() {
	return PlayerClass::player_x_pos;
}

//Getter for y pos
float PlayerClass::get_y_pos() {
	return PlayerClass::player_y_pos;
}

//setters for x and y pos
void PlayerClass::set_x_pos(float x_value) {
	
	PlayerClass::player_x_pos = x_value;
}

void PlayerClass::set_y_pos(float y_value) {
	
	PlayerClass::player_y_pos = y_value;
}

float PlayerClass::update_player_x_position() {
	PlayerClass::set_x_pos(PlayerClass::get_x_pos() + PlayerClass::get_x_vel());
	float value = static_cast<float>(PlayerClass::window_width);
	if (PlayerClass::get_x_pos() >= value) {
		PlayerClass::set_x_pos(value);
	}
	if (PlayerClass::get_x_pos() <= 0) {
		PlayerClass::set_x_pos(0);
	}
	
	return PlayerClass::get_x_pos();
}

float PlayerClass::update_player_y_position() {
	float value = static_cast<float>(PlayerClass::window_height);
	PlayerClass::set_y_pos(PlayerClass::get_y_pos() + PlayerClass::get_y_vel());
	if (PlayerClass::get_y_pos() >= value) {
		PlayerClass::set_y_pos(value);
	}
	if (PlayerClass::get_y_pos() <= 0) {
		PlayerClass::set_y_pos(0);
	}
	return PlayerClass::get_x_pos();
}

void PlayerClass::player_movement() {
	//Control player movement
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
		player_right = true;
		/* std::cout << "Player is moving right!\n";*/
	}
	else {
		player_right = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
		player_left = true;
		/*std::cout << "Player is moving left!\n";*/
	}
	else {
		player_left = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
		player_up = true;
		/*std::cout << "Player is moving up!\n";*/
	}
	else {
		player_up = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
		player_down = true;
		/*std::cout << "Player is moving down!\n";*/
	}
	else {
		player_down = false;
	}
}

