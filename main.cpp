#pragma once
#include <SFML/Graphics.hpp>
#include "player.h"
#include "player_image.h"
#include "fonts.h"
#include "platform.h"
#include "get_view.h"
#include "tile_map.h"
#include "orthogonal.h"

int main() {
    PlayerImage* player = new PlayerImage();
    sf::RenderWindow window(sf::VideoMode(player->window_width, player->window_height), "Platformer");
   
    //Soon to be controls
    /*Tile_Map tiles(window, player->window_width, player->window_height);*/
    MouseProperty mouse(window);
    Orthogonal test(window);
    player->load_texture("data/images/char_plyr_humn.png");
    player->set_position(100.0f, 100.0f);
    Get_Fonts hello_world;
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        
        window.clear();
        //Draw player
        //player.draw_sprite(window, "data/images/char_plyr_humn.png");
        /*player->move_player(window);*/
        
        /*hello_world.get_font("data/fonts/consolai.ttf", "Hello World", 10, window);*/
        /*Platform block("data/images/assets/grass_pltf_ver1.png");*/
       /* mouse.get_mouse_position();*/
        /*block.draw_platform(window);*/
        /*tiles.draw_circles();*/
        // Draw your SFML content here
        
        test.line_draw_test();
        window.display();

        //Control player movement
        

        
    }

    return 0;
}