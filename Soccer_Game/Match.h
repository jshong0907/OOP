#pragma once
#include "Player.h"
#include "Team.h"
#include "Probability.h"
#include <Windows.h>
//#include "League.h"
class Match
{
public:
	Match();
	~Match();
	
	int get_player_goal() { return player_goal; }
	void my_game_simulation(Team & a, Team & b, Player & player);
	void game_simulation(Team & a, Team & b);
private:
	int Home_goal;
	int Away_goal;
	Probability* please = new Probability;
	int player_goal;
};

