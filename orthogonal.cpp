#include "orthogonal.h"
#include "tile_map.h"
#include "Matrix3x3.h"
#include "quad.h"
void Orthogonal::line_draw_test() {
	MouseProperty mouse(window);

	for (int i = 1; i < window_height; i += 2) {
		/*std::cout << i << "\n";*/
		//This is the computers depth
		float zY = (i * n) / window_height;
		// n = YP*z/Y This is our view
		float nY = window_height * zY / i;
		std::cout << nY << " " << zY <<"\n";
		for (int j = 0; j < window_width; j += 2) {
			update_window();
			/*get_trasnlation();*/
			get_window_info();
			/*mouse.get_mouse_position();*/
			mouse.draw_mouse_position();
			
			// z = Y*n/YP This is the computers depth
			float zX = (j * n) / window_width;
			//n = xP * z / x our window width
			float nX = window_width * zX / j;
			sf::Vector2f point2;
			sf::VertexArray line(sf::Lines, 2);
			sf::Vector2f point1(center_x, center_y);
			
			sf::VertexArray line_2(sf::Lines, 2);
			//Takes function relative to window
			point2.y = (1 * nY);
			point2.x = (j * zX);
			
			make_line(point2.x, window_height * nY, sf::Color::White, sf::Color::Green);
			make_line(0, window_width * nX, sf::Color::Blue, sf::Color::Red);
			line[0].position = point1;
			line[1].position = point2;
			line[0].color = sf::Color::White;
			line[1].color = sf::Color::Green;
			
			window.draw(line);
			window.draw(line_2);
			/*window.display();*/
			/*std::cout << i << " " << j << " " << " tan_x " << point2.x << " tan_y " << point2.y << "\n";*/
			
			
		}
		window.display();
		window.clear();
		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
	
}

void Orthogonal::draw_cube(float x, float y, float zX, float zY, float offset){ 
	std::vector<sf::Vector2f> points; 
	points.push_back(sf::Vector2f(x * zX, y * zY));
	points.push_back(sf::Vector2f(x / zX , y * zY));
	points.push_back(sf::Vector2f(x / zX, y  / zY ));
	points.push_back(sf::Vector2f(x * zX, y / zY));
	points.push_back(sf::Vector2f(x, y));
	// when finding tan you can offset by multipling via some constnat
	//start at the point then add the offset to the tangent values
	for (const auto& point : points) {
		sf::CircleShape circle(2); // You can adjust the radius as needed
		circle.setFillColor(sf::Color::Red);
		circle.setPosition(point);
		window.draw(circle);
	}
}
	

float Orthogonal::transform(float x_or_y, float z) {
	float radi = (n / 180) * 3.1415926535f;
	return x_or_y / (z * tan(radi/2));
}

void Orthogonal::make_line(float x, float y, sf::Color color1, sf::Color color2) {
	sf::VertexArray line(sf::Lines, 2);
	sf::Vector2f point1(center_x, center_y);
	sf::Vector2f point2(x , y);

	line[0].position = point1;
	line[1].position = point2;
	line[0].color = color1;
	line[1].color = color2;
	window.draw(line);
}