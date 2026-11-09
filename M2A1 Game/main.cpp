#include <SFML/Graphics.hpp>
#include "InputManager.h"
#include "Game.h"
#include "Object.h"




//make a m_ent dynamic array for entites (done)
//use new for arrays^^ (done)
//treat object/obj struct polymorphically (done)
//game loop
//minimum game win /over , if time add menu (not drawing over a current scene)


int main() 
{


	//creates a game and initializes it
	Game* game = new Game();
	game->initialize();

	return 0;
}



