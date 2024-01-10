#pragma once
#include "WindowProperties.h"
#include <iostream>


void WindowProperties::printWindowSize(sf::RenderWindow& window) {
	changeHeights(window);
	std::cout << "This is the window width "<< this->windowWidth << " window height " << this->windowHeight << "\n";
	std::cout << "This is the window center x " << this->windowCenterX << " window center y " << this->windowCenterY << " \n";
} 

void WindowProperties::changeHeights(sf::RenderWindow& window) {
	this->windowWidth = static_cast<float>(window.getSize().x);
	this->windowHeight = static_cast<float>(window.getSize().y);
	this->windowCenterX = static_cast<float>(window.getSize().x) / 2.0f;
	this->windowCenterY = static_cast<float>(window.getSize().y) / 2.0f;
}

float WindowProperties::returnWindowWidth(sf::RenderWindow& window) {
	return this->windowWidth;
}

float WindowProperties::returnWindowHeight(sf::RenderWindow& window) {
	return this->windowHeight;
}

float WindowProperties::returnWindowCenterX(sf::RenderWindow& window) {
	return this->windowCenterX;
}

float WindowProperties::returnWindowCenterY(sf::RenderWindow& window){
	return this->windowCenterY;
}