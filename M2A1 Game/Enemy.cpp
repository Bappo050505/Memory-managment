#include "Enemy.h"


Enemy::Enemy(Vector2 position, int size, sf::Color color,int maxHealth, int Damage, float Speed) : Entity(position, size,color, maxHealth, Damage, Speed)
{

}

Enemy::~Enemy()
{
	if (m_Object != nullptr)
	{
		delete m_Object;
	}
}

void Enemy::SetTarget(Player* player)
{
	//allows for players position too be present in the enemy
	target = player;
}

void Enemy::Attack()
{

}

void Enemy::Move()
{
	// checks if the player x/y is </> then moves depending on the case
	if (targetPos.y > m_position.y) 
	{
		SetPos(m_position.x, m_position.y + m_Speed);
	}
	else if (targetPos.x > m_position.x)
	{
		SetPos(m_position.x+ m_Speed, m_position.y);
	}
	if (targetPos.y < m_position.y)
	{
		SetPos(m_position.x, m_position.y -m_Speed);
	}
	else if (targetPos.x < m_position.x)
	{
		SetPos(m_position.x -m_Speed, m_position.y);
	}
	
	m_Object->setPosition(m_position.x, m_position.y);

}

void Enemy::Update()
{

	targetPos = target->GetPosition();
	Move();

}


