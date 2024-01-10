#pragma once
#include "orthogonal.h"
#include "WindowProperties.h"
#include "mouse_property.h"
#include "ZAxis.h"
int main() {
    
    sf::RenderWindow window(sf::VideoMode(300, 300), "Platformer");
    WindowProperties windowProperty(window);
    Orthogonal circle;
    //Soon to be controls
    /*Orthogonal testing;*/
    ZAxis z;
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
        std::cout << z.calculateRadians(45) << " This is the radian value.\n";
        std::cout << z.calculateN(z.calculateRadians(45)) << " This is the N value.\n";
        std::cout << z.calculateY(window) << "\n";
        std::cout << z.calculateZ(200, z.calculateRadians(45), window) << " This is the z axis for " << 200 << ".\n";
        /*testing.line_draw_test(window);*/
        circle.drawCircleXY();
        /*test.line_draw_test(window);*/
        
        window.display();

        //Control player movement
        

        
    }

  

    return 0;
}