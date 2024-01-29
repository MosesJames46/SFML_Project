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

    Lines line(window, { 1, -1, 1, 1 }, { -1, 1, 1, 1 });
    //This keeps sort of a clock for our program so functions dont run automatically
    sf::Clock clock;    
    
    Triangle tri(window);
    Transform transformation(window);

    double xCount = .1;
    double yCount = .1;
    double zCount = .1;

    Point point(1, 1, 1, -1, window);
    point.setPoint3D();
    while (window.isOpen()) {
        sf::Event event;
        
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        
        sf::Time timer = clock.getElapsedTime();
        window.clear();
        /*  Draw player*/

        //This bit of code makes sure the program doesnt just do computation automatically.

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
            if (timer.asMilliseconds() > 500){

                /*line.drawShow(true);
                line.setPositionVector({ { 1 +  xCount,1 + yCount,  zCount, 1 }, { -1 + xCount, -1 + yCount,  zCount, 1 } });
                line.setPerspective();
                    
                line.drawLines3D();
                window.display();*/
                point.createPoint2D();
                point.showPoint2D();
                
                point.printPointLocation();
                point.printPointLocation3D();
                zCount += .01;
                window.display();
                /*transformation.scaleLines(line, line.returnFPOV() - .1);*/
                clock.restart();
            }
        }
        //else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        //    if (timer.asMilliseconds() > 5) {
        //        line.drawShow(true);
        //        line.setPositionVector({ { 1 + xCount, 1 + yCount,  zCount, 1 }, { -1 + xCount, -1 + yCount,  zCount, 1 } });
        //        line.setPerspective();

        //        line.drawLines3D();
        //        window.display();

        //        zCount -= .01;
        //        clock.restart();
        //    }

        //}
        //else if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        //    if (timer.asMilliseconds() > 5) {
        //        line.drawShow(true);
        //        line.setPositionVector({ { 1 + xCount,1 + yCount,  zCount, 1 }, { -1 + xCount, -1 + yCount,  zCount, 1 } });
        //        line.setPerspective();

        //        line.drawLines3D();
        //        window.display();
        //        xCount += .1;
        //        clock.restart();
        //    }

        //}
        //else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        //    if (timer.asMilliseconds() > 5) {
        //        line.drawShow(true);
        //        line.setPositionVector({ { 1 + xCount,1 + yCount,  zCount, 1 }, { -1 + xCount,-1 + yCount,  zCount, 1 } });
        //        line.setPerspective();

        //        line.drawLines3D();
        //        window.display();
        //        xCount -= .1;
        //        clock.restart();
        //    }

        //}
        //else if (sf::Keyboard::isKeyPressed(sf::Keyboard::LControl)) {
        //    if (timer.asMilliseconds() > 5) {
        //        line.drawShow(true);
        //        line.setPositionVector({ {1 + xCount, 1 + yCount,  zCount, 1 }, {-1 + xCount, -1 + yCount, zCount, 1 } });
        //        line.setPerspective();

        //        line.drawLines3D();
        //        window.display();
        //        yCount += .1;
        //        clock.restart();
        //    }

        //}
        //else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space)) {
        //    if (timer.asMilliseconds() > 5) {
        //        line.drawShow(true);
        //        line.setPositionVector({ {1 + xCount, 1 + yCount,  zCount, 1 }, {-1 + xCount, -1 + yCount, zCount, 1 } });
        //        line.setPerspective();

        //        line.drawLines3D();
        //        window.display();
        //        yCount -= .1;
        //        clock.restart();
        //    }
        //}
        /*tri.drawTriangle();*/
        // Draw your SFML content here
        
        point.showPoint3D();
       /* line.drawLines3D();*/
        window.display();
 
       
        //Control player movement



    }




    return 0;
}