#pragma once
#include <SFML/Graphics.hpp>
/// <summary>
/// This class' purpose is to manage window properties such as window width, height, and other dimensions
/// such as window change detection and other various aspects of window properties.
/// </summary>
class WindowProperties{
public:
    
    WindowProperties(sf::RenderWindow& window)
        :  // Initialize the reference member
        
        windowWidth(static_cast<float>(window.getSize().x)),
        windowHeight(static_cast<float>(window.getSize().y)),
        windowCenterX(static_cast<float>(window.getSize().x) / 2.0f),
        windowCenterY(static_cast<float>(window.getSize().y) / 2.0f) {
        // Additional constructor code if needed
    }

    void printWindowSize(sf::RenderWindow& window);
    void changeHeights(sf::RenderWindow& window);

    float returnWindowWidth(sf::RenderWindow& window);
    float returnWindowHeight(sf::RenderWindow& window);
    float returnWindowCenterX(sf::RenderWindow& window);
    float returnWindowCenterY(sf::RenderWindow& window);

protected:
    
	float windowWidth;
	float windowHeight;
    float windowCenterX;
    float windowCenterY;


};

