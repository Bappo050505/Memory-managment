#include <SFML/Graphics.hpp>
#include "InputManager.h"
#include "Player.h"
#include "Enemy.h"



//game states
enum GameState
{
	MENU,
	LEVEL,
	GAMEOVER,
	WIN

};
void Update()
{
	
}

void Menu()
{
	
}

void LoadLevel()
{

}

void Win(sf::RenderWindow&  window)
{
	window.clear(sf::Color::Green);
}
void GameOver(sf::RenderWindow&  window)
{
	window.clear(sf::Color::Red);
}

int main() 
{
		
	Player* player = new Player({10,10},25 ,sf::Color::Green , 100 ,10 , 1);

	InputManager input;
	//starts the game at the menu state
	GameState gameState = MENU;

	sf::RenderWindow window(sf::VideoMode(1080, 720), "Game!");
	window.setFramerateLimit(144);
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
		switch (gameState)
		{
		case MENU:
			Menu();
			break;
		case LEVEL:
			LoadLevel();
			break;
		case GAMEOVER:
			GameOver(window);
			break;
		case WIN:
			Win(window);
			break;

		}

		player->Update();

		//debug checking if input works
		if (input.KeyDown(sf::Keyboard::Q))
		{
			gameState = GAMEOVER;
		}
		else if(input.KeyDown(sf::Keyboard::E))
		{
			gameState = WIN;
		}
		window.clear();
		window.draw(player->GetObject());
		window.display();

	}
	return 0;
}



