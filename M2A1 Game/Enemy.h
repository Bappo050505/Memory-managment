#pragma once
#include "Entity.h"
#include "Player.h"
#include "iostream"

class Player;
class Enemy : public Entity
{
private:
	Player* target;
	Vector2 targetPos;
protected:
public:
	Enemy(Vector2 position, int size,sf::Color color, int maxHealth, int Damage, float Speed);
	~Enemy();
	void SetTarget(Player* player);
	void Attack() override;
	void Move() override;
	void Update() override;
	

};

