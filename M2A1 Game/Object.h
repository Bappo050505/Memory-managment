#pragma once
#include "Util.hpp"
#include <SFML/Graphics.hpp>

//object class, top parent class every entity in the game inherits from
class Object
{
private:

protected:
	//member variables
	
	int m_size;

	sf::RectangleShape* m_Object;
	sf::Color m_color;
	Vector2 m_position;
public:

	Object(Vector2 position, int size , sf::Color color);
	~Object();
	void CreateObject(Vector2 position, int size, sf::Color color);
	sf::RectangleShape GetObject();


	
};

