#include "DrawFOV.h"



void DrawFOV::drawFOV() {
	//draw points from the center onward
	for (unsigned int i = 0; i < window.getSize().y; i+= 10) {
		for (unsigned int j = 0; j < window.getSize().x; j+= 10) {
			ZAxis z(j, i, 45, .25, .25, window);
			/*std::cout << z.calculateZY();*/
			
			Draw2DPlane plane(window);
			plane.setCenterX();
			plane.setCenterY();
			/*plane.drawLine(static_cast<float>(j), static_cast<float>(i), j * z.calculateZX(), i * z.calculateZY());*/
			plane.drawFromCenter(j * z.calculateZX(), i * z.calculateZY());
			std::cout << z.calculateX() << " " << z.calculateY() << "\n";
			
			
		}
		window.display();
		window.clear();
		
	}
}
