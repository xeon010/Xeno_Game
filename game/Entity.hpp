#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

////////////////////////////////////////////////////////////
///Class: Entity
///Purpose: Handle all entity instances: terrain objects, characters, player, etc.
////////////////////////////////////////////////////////////

enum class EntityType
{
	PLAYER,
	ENEMY,
	TERRAIN,
	VEHICLE,
	ITEM,
	PROJECTILE,
	BULLET,
	EXPLOSION,
};

class Entity
{
public:
	Entity(const std::string& texturePath, EntityType entitytype);
	~Entity();

private:
	std::optional<sf::Sprite> sprite;
	sf::Texture texture;
	sf::IntRect rect;
};