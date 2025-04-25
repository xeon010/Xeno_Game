#include "Entity.hpp"

Entity::Entity(const std::string& texturePath)
{
	if (!texture.loadFromFile(texturePath))
	{
		std::cerr << "Error loading texture" << std::endl;
		return;
	}
	sprite.emplace(texture, rect);
}