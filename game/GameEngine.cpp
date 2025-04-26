#include "GameEngine.hpp"

GameEngine::GameEngine()
{
    gameWindow.create(sf::VideoMode({ WINDOW_WIDTH, WINDOW_HEIGHT }), WINDOW_TITLE);
}

void GameEngine::run()
{
    while (gameWindow.isOpen())
    {
        while (const std::optional event = gameWindow.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                gameWindow.close();
        }

        testPlayerMechanics();

        gameWindow.clear(sf::Color::Green);
        gameWindow.display();
    }
}
