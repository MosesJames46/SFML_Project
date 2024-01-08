#include "level.h"
#include "platform.h"
Level::Level(std::vector<std::string>& map, std::string& type,sf::RenderWindow& window) {
	for (std::size_t i = 0; i < map.size(); i++) {
		if (map[i] == "#") {
			
			Platform ground("data/images/assets/grass_pltf_ver1.png");
			//Tuple to be used for calculating position of types
			
			ground.draw_platform(window);

		}
		if (map[i] == " ") {
			map_x_y.push_back({i, 1});
		}
	}
}

void Level::iterate_map() {


}

void Level::draw_map() {
	for (size_t i = 0; i < map_x_y.size(); i++) {
		for (size_t j = 0; map_x_y[i].size(); j++) {
			if (map_x_y[i][2] == 0) {

			}
		}
	}
}