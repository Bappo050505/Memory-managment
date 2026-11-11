#pragma once
#include "Entity.h"
#include "InputManager.h"


class InputManager;
class Player : public Entity
{
private:
	sf::RenderWindow window;
	Object* attack;
	InputManager input;
protected:

public:
	Player(Vector2 position,int size,sf::Color color, int maxHealth, int Damage, float Speed);
	
	Object GetAttack();
	void Attack() override;
	void Move() override;
	void Update() override;
};

