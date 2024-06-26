#pragma once
#include "Labyrinth.h"
#include "Player.h"
#include "Fire.h"

class Game
{
public:
	Game();
	~Game();

	void start();
	void loop();

private:
	enum DIFFICULTY {
		Exit = 0,
		Rookie = 1,
		Easy = 2,
		Medium = 3,
		Hard = 4
	};

	enum class STATE {
		Playing = 0,
		Won = 1,
		Lost = 2,
	};

	DIFFICULTY difficulty;
	STATE game_state;

	Labyrinth labyrinth;
	Player* player = nullptr;
	Player* bot = nullptr;
	Fire fire;
	int fire_amnt;

	STATE check_game_state();
};