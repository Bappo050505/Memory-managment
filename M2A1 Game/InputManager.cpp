#include "InputManager.h"

bool InputManager::KeyDown(sf::Keyboard::Key pressedkey)
{
	
	if (sf::Keyboard::isKeyPressed(pressedkey))
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
