#pragma once
#include "triangle.h"
#include "text.h"
#include "line.h"
#include "VectorFunctions.h"
#include "Transform.h"
#include "point.h"
int main() {


    sf::RenderWindow window(sf::VideoMode(600, 300), "Platformer");

    sf::View view(sf::FloatRect(0, 0, 2, 2));
    view.setCenter(0.0f, 0.0f);
    view.setSize(2.0f, -2.0f);
    window.setView(view);

    //This keeps sort of a clock for our program so functions dont run automatically    
    
    Triangle tri(window);
    Transform transformation(window);

    sf::Clock clock;
     
    double timeElapsed = 100;
    
    
    while (window.isOpen()) {
        sf::Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        sf::Time time = clock.getElapsedTime();
        window.clear();
        
        Lines firstLine({ .25,.25,1,1 }, { -.25,-.25,0,1 }, window);
        firstLine.drawLines();
                
        window.display();
 
       



    }



    return 0;
}