#include "Game.h"
#include <SFML/Graphics.hpp>
#include "player.h"
#include "Enemy.h"
#include "Screen.h"


//game states

Game::Game()
{

	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game");
	window.setFramerateLimit(144);
	Screen::Get()->init(&window);

	//sets rand and the entity array
	initialize();

	//m_entities[0]->SetTarget(player);

	//starts the game at the Level state
	gameState = LEVEL;

	//game loop
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			//allows the window to be closed using the x in the top right;
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		
		//switch case state machine
		switch (gameState)
		{
		case LEVEL:
			//creates entities
			LoadLevel();
			break;
		case PLAYING:
			CheckDead();
		case GAMEOVER:
			Lose();
			break;
		case WIN:
			Win();
			break;

		}


		Update();
		
		window.clear();

		for (int i = 0; i < 3; i++)
		{
			window.draw(m_entities[i]->GetObject());
			m_entities[i]->Update();

		}
		window.display();

	}

}



void Game::initialize()
{
	srand(time(0));
	m_entities = new Entity * [entityMax];
}

void Game::CheckDead() 
{

}

void Game::LoadLevel()
{
	//creates player and sets it to index 0 in the entities array
	player = new Player({ 10,10 }, 25, sf::Color::Green, 100, 10, 1);
	m_entities[0] = player;

	//creates x amount of enemies depending on the size of the dynamic array
	for (int i = 1; i < entityMax; ++i)
	{

		m_entities[i] = new Enemy({ (float)(rand() % 1000), (float)(rand() % 1000) }, 25, sf::Color::Red, 100, 10, 0.5 , player);

	}

	levelLoaded = true;
}

void Game::Lose()
{

}

void Game::Win()
{

}

void Game::Update()
{
	if (levelLoaded) 
	{
		gameState = PLAYING;
	}
}
