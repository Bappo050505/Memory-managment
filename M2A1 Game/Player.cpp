#include "Player.h"
#include "Screen.h"
#include <iostream>

Player::Player(Vector2 position,int size,sf::Color color, int maxHealth, int Damage, float Speed) : Entity( position,size, color,maxHealth, Damage, Speed)
{
	attack = new Object({ m_position.x , m_position.y}, 10, sf::Color::Blue);
}





void Player::Attack()
{
	
	/*if (input.KeyDown(sf::Keyboard::Left)) 
	{
		attack = new Object({ m_position.x , m_position.y - m_size / 2 }, 10, sf::Color::Blue);

		std::cout << " attacked";
	}
	if (input.KeyDown(sf::Keyboard::Up))
	{

	}
	if (input.KeyDown(sf::Keyboard::Down))
	{

	}
	if (input.KeyDown(sf::Keyboard::Right))
	{

	}*/

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

void Player::Update()
{
	Move();

	Screen::Get();

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
	if (m_position.x > Screen::GetScreenDims().x - m_size)
	{
		SetPos(Screen::GetScreenDims().x-m_size, m_position.y);
	}
	//bottom screen collision
	if (m_position.y > Screen::GetScreenDims().y- m_size)
	{
		SetPos(m_position.x, Screen::GetScreenDims().y-m_size);
	}
	m_Object->setPosition(m_position.x, m_position.y);

	

}

