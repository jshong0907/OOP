#include "Match.h"



Match::Match()
{
}


Match::~Match()
{
}

void Match::my_game_simulation(Team & a, Team & b, Player & player)
{
	Home_goal = 0;
	Away_goal = 0;
	player_goal = 0;
	if (a.is_my_team() == true)
	{
		for (int i = 0; i < 9; i++)
		{
			Sleep(please->get_num());
			Home_goal += please->probability(a.get_level());
		}
		for (int i = 0; i < player.run_time(); i++)
		{
			Sleep(please->get_num());
			player_goal += please->probability(player.get_speed() * 0.5 + player.get_shoot_accuarcy() * player.get_shoot_power() / 100);
		}
		Home_goal += player_goal;

		for (int i = 0; i < 18; i++)
		{
			Sleep(please->get_num());
			Away_goal += please->probability(b.get_level());
		}
	}
	else if (b.is_my_team() == true)
	{
		for (int i = 0; i < 9; i++)
		{
			Away_goal += please->probability(b.get_level());
		}
		for (int i = 0; i < player.run_time(); i++)
		{
			player_goal += please->probability(player.get_speed()*0.5 + player.get_shoot_accuarcy() * player.get_shoot_power());
		}
		Away_goal += player_goal;

		for (int i = 0; i < 18; i++)
		{
			Home_goal += please->probability(a.get_level());
		}
	}
	if (Home_goal > Away_goal) { a.add_winning_point(3); }
	else if (Away_goal > Home_goal) { b.add_winning_point(3); }
	else
	{
		a.add_winning_point(1);
		b.add_winning_point(1);
	}
	player.add_my_goal(player_goal);
	a.add_gf(Home_goal);
	a.add_ga(Away_goal);
	b.add_gf(Away_goal);
	b.add_ga(Home_goal);
	cout << "나의 골수는 " << player_goal << "입니다." << endl;
	cout << a.get_name() << " " << Home_goal << " : " << Away_goal << " " << b.get_name() << endl;
}

void Match::game_simulation(Team & a, Team & b)
{
	Home_goal = 0;
	Away_goal = 0;
	for (int i = 0; i < 18; i++)
	{
		Sleep(please->get_num());
		Home_goal += please->probability(a.get_level());
		Sleep(please->get_num());
		Away_goal += please->probability(b.get_level());
	}
	if (Home_goal > Away_goal) { a.add_winning_point(3); }
	else if (Away_goal > Home_goal) { b.add_winning_point(3); }
	else
	{
		a.add_winning_point(1);
		b.add_winning_point(1);
	}
	a.add_gf(Home_goal);
	a.add_ga(Away_goal);
	b.add_gf(Away_goal);
	b.add_ga(Home_goal);
	cout << a.get_name() << " " << Home_goal << " : " << Away_goal << " " << b.get_name() << endl;
}
