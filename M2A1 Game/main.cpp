#include <SFML/Graphics.hpp>
#include "InputManager.h"
#include "Game.h"





int main() 
{

	//creates a game and initializes it
	Game* game = new Game;
	game->initialize();

	return 0;
}



