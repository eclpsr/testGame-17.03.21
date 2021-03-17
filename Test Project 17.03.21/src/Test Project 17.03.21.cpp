#include <map>
#include <string>
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

class Entity{
public:

private:

};

class gameMain {
public:
	gameMain(){

	}
private:

};

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    gameMain newgame;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(newgame);
        window.display();
    }

    return 0;
}
