#include <iostream>

#include "Game.h"
#include "Labyrinth.h"
#include "UI.h"
#include "Player.h"

Game::Game() 
:player()
,labyrinth(5, 5)
,ui()
{
	difficulty = Rookie;
}

void Game::start() {
	labyrinth.init();
	labyrinth.draw();
	std::cout << "Successfully started the game!" << std::endl;
}