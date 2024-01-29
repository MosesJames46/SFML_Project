#include "text.h"


std::string Text::getText(){

	return this->userText;
}


bool Text::setTextToFloat(sf::Event& event) {
	//Checks the accpetText memeber is true otherwise it will not accpet text
	if (this->accpetText == true) {
		//For learning purposes with SFML when creating an event, you check against the event type
		//to clarify if the event has passed or not.
			
			if (event.type == sf::Event::TextEntered) {
				//We make sure the unicode values on the keyboard do not match command keys since
				//128 and lower are usually for letters and numbers
					if (event.text.unicode < 128) {
						//upon correct unicode value convert to a char 
						char typedChar = static_cast<char>(event.text.unicode);

						//The first time i have used the sf::Time class
						sf::Time timeElasped = clock.getElapsedTime();
						if (timeElasped.asMilliseconds() > this->typingDelay){
							if (std::isdigit(typedChar) || typedChar == '.' || typedChar == '-') {
								this->userText += typedChar;
								stringState = true;
							}
					
						//the empty function checks if the text is an empty string or not.
						//This with the preceeding check if the backspace is pressed makes sure 
						//the user can not backspace any further
							else if (typedChar == '\b' && !userText.empty()) {
							userText.pop_back();
							stringState = true;
						}
						//\r and \n are characters for enter this condition tries to convert the string to a flost
							else if (typedChar == '\r' || typedChar == '\n') {
							
								if (this->userText.size() > 0){
									//Turn off error state if successful so the error message doesnt display
									this->accpetText = false;
									stringState = true;
									errorState = false;
									return true;
								} else{	
									errorText = "Not a proper string";
									textToDisplay.getStringFont(errorText);
									errorState = true;
									stringState = false;
									return false;
						}
					}
					clock.restart();
				}
							
			}
		}
	}
	return false;
}

void Text::displayText(sf::Event& event) {
	if (errorState) {
		textToDisplay.getStringFont(errorText);
	}
	if (stringState) {
		textToDisplay.getStringFont(this->userText);
	}
	if (setTextToFloat(event) && stringState) {
		this->floatText = std::stof(this->userText);
		textToDisplay.getFloatFont(this->floatText);
	}

}