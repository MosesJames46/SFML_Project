#pragma once
#include "mouse_property.h"
#include "VectorFunctions.h"
#include "randomNumber.h"
#include "Square.h"
#include "triangle.h"
int main() {


    sf::RenderWindow window(sf::VideoMode(600, 600), "Platformer");

    sf::View view(sf::Vector2f(0, 0), sf::Vector2f(800, 600));
    window.setView(view);


    Triangle rightTri(window);
    rightTri.setAllRadii(1);
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear();
        /*  Draw player*/
        rightTri.initAllPositions();
        rightTri.scalePoint1(40, 20);
        rightTri.scalePoint2(50, -50);
        rightTri.scalePoint3(-100, -100);
        
        rightTri.drawLines();
        rightTri.readPositions();
        

        // Draw your SFML content here


        window.display();

        //Control player movement



    }




    return 0;
}