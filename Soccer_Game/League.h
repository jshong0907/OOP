#pragma once
#include "Team.h"
#include "Match.h"
#include "Player.h"

class League
{
public:
	League();
	~League();

	void clear_team();
	friend class Match;
	friend class Application;
	void add_week() { week += 1; }
	void match_system(Player & player);

private:
	int numTeam = 20;
	int week = 0;
	Match match;
	Team ManU;
	Team Liverpool;
	Team Chelsea;
	Team ManC;
	Team Arsenal;
	Team Bournemouth;
	Team Brighton;
	Team Burnley;
	Team Cardiff;
	Team Crystal_Palace;
	Team Everton;
	Team Fulham;
	Team Huddersfield;
	Team Leicester;
	Team Newcastle;
	Team Southampton;
	Team Spurs;
	Team Watford;
	Team West_Ham;
	Team Wolves;
	int* team_id;
	Team team[20];
};

