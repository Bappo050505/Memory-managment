#pragma once
#include <SFML/Graphics.hpp>
#include "player.h"
#include "Enemy.h"
#include "iostream"

class Object;
class Game
{
private:

	enum GameState
	{
		MENU,
		LEVEL,
		GAMEOVER,
		WIN

	};

protected:

public:

	Game();

	void initialize();
	void Menu();
	void LoadLevel();
	void Lose();
	void Win();

	void Update();
};

