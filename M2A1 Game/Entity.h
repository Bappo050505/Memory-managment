#pragma once

#include "Object.h";

class Entity : public Object
{
private:

	enum EntityState
	{
		IDLE,
		DEAD,
		MOVING,
		ATTACKING
	};
protected:
	int m_Maxhealth;
	int m_Currenthealth = 0;
	int m_Damage;
	float m_Speed;
public:
	Entity(Vector2 position, int size,sf::Color color, int maxHealth, int Damage , float Speed);

	void SetPos(float x , float y);
	Vector2 GetPosition();

	void Die();
	void CheckCollision();
	//virtual functions, allows the player and enemy to ovveride as they will both be inheriting from entity
	virtual void Move();
	virtual void Attack();
	int TakeDamage(int damage);

	virtual void Update();

	int GetDamage();

};

