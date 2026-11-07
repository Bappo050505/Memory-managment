#include "Game.h"


//game states


Game::Game()
{
	int r = 0, g = 0, b = 0;

	sf::RenderWindow  window(sf::VideoMode(1080, 720), "Game");
	window.setFramerateLimit(144);
	//creates entities
	Player* player = new Player({ 10,10 }, 25, sf::Color::Green, 100, 10, 1);
	Enemy* enemy = new Enemy({ 500,500 }, 25, sf::Color::Red, 100, 10, 1);

	enemy->SetTarget(player);

	InputManager input;
	//starts the game at the menu state
	GameState gameState = MENU;

	//checks the game state 
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
		case MENU:
			Menu();
			break;
		case LEVEL:
			LoadLevel();
			break;
		case GAMEOVER:
			Lose();
			break;
		case WIN:
			Win();
			break;

		}


		//debug, will be moved to update
		player->Update(window);
		enemy->Update();


		window.clear();
		window.draw(player->GetObject());
		window.draw(enemy->GetObject());
		window.display();

	}

}



void Game::initialize()
{
	
}

void Game::Menu()
{}

void Game::LoadLevel()
{}

void Game::Lose()
{}

void Game::Win()
{}

void Game::Update()
{

}
