#include "Player.h"
#include "iostream"

Player::Player(Vector2 position,int size,sf::Color color, int maxHealth, int Damage, float Speed) : Entity( position,size, color,maxHealth, Damage, Speed)
{
	
}

Player::~Player()
{
	if (m_Object != nullptr) 
	{
		delete m_Object;
	}

}

void Player::Attack()
{

}

void Player::Move()
{
	if (input.KeyDown(sf::Keyboard::W))
	{
		SetPos(m_position.x, m_position.y - m_Speed);
	}
	if (input.KeyDown(sf::Keyboard::A))
	{
		SetPos(m_position.x-m_Speed, m_position.y);
	}
	if (input.KeyDown(sf::Keyboard::S))
	{
		SetPos(m_position.x, m_position.y +m_Speed);
	}
	if (input.KeyDown(sf::Keyboard::D))
	{
		SetPos(m_position.x +m_Speed, m_position.y);
	}

	

	
	
	
	
}

void Player::Update(sf::RenderWindow window)
{
	Move();

	//left screen collision
	if (m_position.x < 0.f)
	{
		SetPos(0.f, m_position.y);
	}
	//top screen collision
	if (m_position.y < 0.f)
	{
		SetPos(m_position.x, 0.f);
	}
	//right screen collision
	//bottom screen collision

	m_Object->setPosition(m_position.x, m_position.y);
}

