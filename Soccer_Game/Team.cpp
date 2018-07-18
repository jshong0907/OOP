#include "Team.h"




Team::Team(string _name, int _level)
{
	name = _name;
	level = _level;
	/*winning_point = 0;
	gf = 0;
	ga = 0;*/
}

Team::Team(Team & other)
{
	name = other.name;
	level = other.level;
	winning_point = other.winning_point;
	gf = other.gf;
	ga = other.ga;
	gd = other.gd;
	my_team = other.my_team;
}

Team::~Team()
{
}

void Team::reset_stats()
{
	winning_point = 0;
	gf = 0;
	ga = 0;
	gd = gf - ga;
}

ostream & operator<<(ostream & os, const Team & other)
{
	os << other.name;
	return os;
}
