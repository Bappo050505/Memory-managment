#include "Entity.h"

Entity::Entity(Vector2 position, int size, sf::Color color,int maxHealth, int Damage, float Speed) : Object(position ,size , color), m_Maxhealth(maxHealth) , m_Damage(Damage) , m_Speed(Speed)
{
	m_Currenthealth = maxHealth;
}

Entity::~Entity()
{
}

void Entity::SetPos(float x, float y) 
{
	m_position.x = x;
	m_position.y = y;
}

Vector2 Entity::GetPosition() 
{
	return m_position;
}

void Entity::Die()
{
	//death code
}

void Entity::CheckCollision() 
{
	//collision code here
}

void Entity::Move()
{
	
	
	
}

void Entity::Attack()
{
	
}
int Entity::TakeDamage(int damagetaken)
{
	//simple damage code
	m_Currenthealth = m_Currenthealth - damagetaken;
	return m_Currenthealth;

}

void Entity::Update(sf::RenderWindow window)
{

}

int Entity::GetDamage()
{
	//return the entity damage value
	return m_Damage;
}
