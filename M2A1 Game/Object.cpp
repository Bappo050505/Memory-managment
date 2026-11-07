#include "Object.h"


Object::Object(Vector2 position, int size, sf::Color color) : m_position(position), m_size(size)
{
	CreateObject(position, size , color);
}
//destructor
Object::~Object()
{

	if (m_Object != nullptr)
	{
		delete m_Object;
	}
}

void Object::CreateObject(Vector2 position, int size, sf::Color color) 
{
	m_Object = new sf::RectangleShape(sf::Vector2f(size, size));
	m_Object->setPosition(position.x, position.y);
	m_Object->setFillColor(color);
}

sf::RectangleShape Object::GetObject()
{
	return *m_Object;
}





