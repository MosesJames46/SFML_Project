#pragma once

#include "WindowProperties.h"
#include "mouse_property.h"

#include "VectorFunctions.h"
#include "DrawFOV.h"
#include "DrawPlane2D.h"

int main() {
   
    sf::RenderWindow window(sf::VideoMode(600, 600), "Platformer");
    WindowProperties windowProperty(window);
    
    
    //Soon to be controls
    /*Orthogonal testing;*/
    
    
    DrawFOV fov(window);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        
        window.clear();
      /*  Draw player*/
        
        
        // Draw your SFML content here

        /*fov.drawFOV();*/

        /*testing.line_draw_test(window);*/
        
        /*test.line_draw_test(window);*/
        
        window.display();

        //Control player movement
        

        
    }

  
    std::cout << std::sin(3.14 / 6) << "\n";
    return 0;
}