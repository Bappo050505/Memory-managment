#pragma once
#include "Util.hpp"
#include <SFML/Graphics.hpp>

class Object
{
private:

protected:
	Vector2 m_position;
	int m_size;

	sf::RectangleShape* m_Object;
	sf::Color m_color;
public:

	Object(Vector2 position, int size , sf::Color color);
	~Object();
	void CreateObject(Vector2 position, int size, sf::Color color);
	sf::RectangleShape GetObject();


	
};

