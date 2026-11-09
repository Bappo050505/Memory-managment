#pragma once
#include "iostream"
class Entity;
class Player;
class Enemy;
class Object;
class Game
{
private:

	Player* player;
	int entityMax = 3;
	Entity** m_entities;

	bool levelLoaded = false;

	
	enum GameState
	{
		LEVEL,
		PLAYING,
		GAMEOVER,
		WIN

	};

	GameState gameState;

protected:

public:

	Game();

	void initialize();
	void LoadLevel();
	void CheckDead();
	void Lose();
	void Win();

	void Update();
};

