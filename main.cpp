#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace sf;

sf::Texture texture;
sf::Sprite sprite;

int main() {
	sf::Event evt;
	texture.loadFromFile("crosshair.png");
	sprite.setTexture(texture);
	
	sprite.setPosition(800 / 2 - (float)texture.getSize().x/2, 600 / 2 - (float)texture.getSize().y / 2);
	

	sf::RenderWindow Ventana(sf::VideoMode(800, 600, 32), "Crosshair centrado en la pantalla");
	while (Ventana.isOpen()) 
	{
		while (Ventana.pollEvent(evt)) 
		{
			switch (evt.type)
			{
			case sf::Event::Closed:
				Ventana.close();
				break;
			default:
				break;
			}
		}
		Ventana.clear(sf::Color::White);
		Ventana.draw(sprite);
		Ventana.display();

	}
	return 0;
}