#pragma once

#include <SFML/Graphics.hpp>
#include "Util.hpp"

class Screen
{
private:
	Screen() {};
	Screen(Screen& s) = delete;

	static Screen* m_instance;
	sf::RenderWindow* m_window;
	
protected:

public:
	static sf::Vector2u GetScreenDims();
	static Screen* Get();
	void init(sf::RenderWindow* window);

};

