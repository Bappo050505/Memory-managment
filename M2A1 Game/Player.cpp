#include "Player.h"
#include "iostream"

Player::Player(Vector2 position,int size,sf::Color color, int maxHealth, int Damage, float Speed) : Entity( position,size, color,maxHealth, Damage, Speed)
{
	init();
}

Player::~Player()
{
	if (m_Object != nullptr) 
	{
		delete m_Object;
	}

}

void Player::init()
{

}

void Player::Attack()
{

}

void Player::Move()
{
	if (input.KeyDown(sf::Keyboard::W))
	{
		SetPos(m_position.x, m_position.y - 1);
	}
	if (input.KeyDown(sf::Keyboard::A))
	{
		SetPos(m_position.x-1, m_position.y);
	}
	if (input.KeyDown(sf::Keyboard::S))
	{
		SetPos(m_position.x, m_position.y + 1);
	}
	if (input.KeyDown(sf::Keyboard::D))
	{
		SetPos(m_position.x+1, m_position.y);
	}

	m_Object->setPosition(m_position.x, m_position.y);
	
	std::cout << "Position y:" << m_position.y << "\n";
	std::cout<<"Object y:" << m_Object->getPosition().y << "\n";

	
}

void Player::Update()
{
	Move();
}

