#pragma once

#include "Object.h";

class Entity : public Object
{
private:

	//member variables
protected:
	int m_Maxhealth;
	int m_Currenthealth = 0;
	int m_Damage;
	float m_Speed;
public:

	Entity(Vector2 position, int size,sf::Color color, int maxHealth, int Damage , float Speed);
	~Entity();
	void SetPos(float x , float y);
	Vector2 GetPosition();

	void Die();
	int TakeDamage(int damage);
	//virtual functions, allows the player and enemy to ovveride as they will both be inheriting from entity
	virtual void Move();
	void CheckCollision();

	virtual void Attack();

	virtual void Update(sf::RenderWindow window);

	int GetDamage();

};

