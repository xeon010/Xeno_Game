#pragma once
#include <SFML/Graphics.hpp>

#define WINDOW_WIDTH 1000u
#define WINDOW_HEIGHT 1000u
#define WINDOW_TITLE "Game Window"

class GameEngine
{
public:
	GameEngine();
	~GameEngine()
	{}
	void run();
private:
	sf::RenderWindow gameWindow;
};