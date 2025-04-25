#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Entity
{
public:
	Entity(const std::string& texturePath);
	~Entity();

private:
	std::optional<sf::Sprite> sprite;
	sf::Texture texture;
	sf::IntRect rect;
};