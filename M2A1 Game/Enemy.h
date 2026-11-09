#pragma once
#include "Entity.h"
#include "Player.h"
#include "iostream"

class Player;
class Enemy : public Entity
{
private:
	Entity* m_target;
	Vector2 targetPos;
protected:
public:
	Enemy(Vector2 position, int size,sf::Color color, int maxHealth, int Damage, float Speed , Entity* target);
	
	void Attack() override;
	void Move() override;
	void Update() override;
	

};

