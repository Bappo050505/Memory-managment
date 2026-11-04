#pragma once
#include "Entity.h"
class Enemy : public Entity
{
private:
protected:
public:
	Enemy(Vector2 position, int size,sf::Color color, int maxHealth, int Damage, float Speed);
	void Attack() override;
	

};

