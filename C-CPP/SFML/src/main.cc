#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

int main() {
	// Window function
    sf::RenderWindow window(sf::VideoMode(800, 500), "Window");

    // Background color
    sf::Color backgroundColor(255, 255, 255, 100);

	// Service intitialization
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

		// Window Attributes binding
        window.clear(backgroundColor);
        window.display();
    }
    return 0;
}
