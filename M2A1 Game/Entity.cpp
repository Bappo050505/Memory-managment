#include "Entity.h"

Entity::Entity(Vector2 position, int size, sf::Color color,int maxHealth, int Damage, float Speed) : Object(position ,size , color), m_Maxhealth(maxHealth) , m_Damage(Damage) , m_Speed(Speed)
{
	m_Currenthealth = maxHealth;
}

Entity::~Entity()
{

	if (m_Object != nullptr)
	{
		delete m_Object;
	}
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

int Entity::GetCurrentHealth()
{
	return m_Currenthealth;
}

void Entity::Die()
{
	currentState = DEAD;
	
}

bool Entity::CheckCollision(sf::RectangleShape player, sf::RectangleShape enemy)
{
	//collision box for the enemy and player
	sf::FloatRect hitboxPlayer = player.getGlobalBounds();
	sf::FloatRect hitboxEnemy = enemy.getGlobalBounds();

	return(hitboxPlayer.intersects(hitboxEnemy));

}

sf::RectangleShape Entity::GetRect()
{
	return *m_Object;
}

void Entity::Move()
{
	
	
	
}

void Entity::Attack()
{
	
}
bool Entity::isdead()
{
	return true;;
}
int Entity::TakeDamage(int damagetaken)
{
	//simple damage and death code
	if (m_Currenthealth != 0)
	{
		m_Currenthealth = m_Currenthealth - damagetaken;
		return m_Currenthealth;
	}
	else
	{
		Die();
	}

}

void Entity::Update()
{


	switch(currentState) 
	{
	case MOVING:
		Move();
		break;
	case DEAD:
		isdead();
	}

	//sets state to dead if health is <= 0
	

	

}

int Entity::GetDamage()
{
	//return the entity damage value
	return m_Damage;
}
