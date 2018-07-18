#include "League.h"



League::League()
{
	
	/*team[0] = ManU;
	team[1] = Liverpool;
	team[2] = Chelsea;
	team[3] = ManC;
	team[4] = Arsenal;
	team[5] = Bournemouth;
	team[6] = Brighton;
	team[7] = Burnley;
	team[8] = Cardiff;
	team[9] = Crystal_Palace;
	team[10] = Everton;
	team[11]*/

	ManU.set_level(20);
	Liverpool.set_level(10);
	Chelsea.set_level(17);
	ManC.set_level(19);
	Arsenal.set_level(6);
	Bournemouth.set_level(13);
	Brighton.set_level(12);
	Burnley.set_level(13);
	Cardiff.set_level(10);
	Crystal_Palace.set_level(11);
	Everton.set_level(15);
	Fulham.set_level(10);
	Huddersfield.set_level(12);
	Leicester.set_level(15);
	Newcastle.set_level(11);
	Southampton.set_level(15);
	Spurs.set_level(18);
	Watford.set_level(13);
	West_Ham.set_level(13);
	Wolves.set_level(12);

	ManU.set_name("ManU");
	Liverpool.set_name("Liverpool");
	Chelsea.set_name("Chelsea");
	ManC.set_name("ManC");
	Arsenal.set_name("Arsenal");
	Bournemouth.set_name("Bournemouth");
	Brighton.set_name("Brighton");
	Burnley.set_name("Burnley");
	Cardiff.set_name("Cardiff");
	Crystal_Palace.set_name("Crystal_Palacce");
	Everton.set_name("Everton");
	Fulham.set_name("Fulham");
	Huddersfield.set_name("Huddersfield");
	Leicester.set_name("Leicester");
	Newcastle.set_name("Newcastle");
	Southampton.set_name("Southampton");
	Spurs.set_name("Spurs");
	Watford.set_name("Watford");
	West_Ham.set_name("West_Ham");
	Wolves.set_name("Wolves");


	Arsenal.new_team();

	Team tem[] = { ManU, Liverpool, Chelsea, ManC, Arsenal, Bournemouth, Brighton, Burnley, Cardiff, Crystal_Palace, Everton, Fulham, Huddersfield, Leicester, Newcastle, Southampton, Spurs, Watford, West_Ham, Wolves };
	for (int i = 0; i < 20; i++)
	{
		team[i] = tem[i];
	}
}




League::~League()
{
}

void League::clear_team()
{
	ManU.reset_stats();
	Liverpool.reset_stats();
	Chelsea.reset_stats();
	ManC.reset_stats();
	Arsenal.reset_stats();
	Bournemouth.reset_stats();
	Brighton.reset_stats();
	Burnley.reset_stats();
	Cardiff.reset_stats();
	Crystal_Palace.reset_stats();
	Everton.reset_stats();
	Fulham.reset_stats();
	Huddersfield.reset_stats();
	Leicester.reset_stats();
	Newcastle.reset_stats();
	Southampton.reset_stats();
	Spurs.reset_stats();
	Watford.reset_stats();
	West_Ham.reset_stats();
	Wolves.reset_stats();

	team_id = (int*)malloc(numTeam * sizeof(int));
	for (int i = 0; i < 20; i++)
	{
		team_id[i] = i;
	}
}

void League::match_system(Player & player)
{
	//int* team_id;
	//Team team[] = { ManU, Liverpool, Chelsea, ManC, Arsenal, Bournemouth, Brighton, Burnley, Cardiff, Crystal_Palace, Everton, Fulham, Huddersfield, Leicester, Newcastle, Southampton, Spurs, Watford, West_Ham, Wolves };
	//int numTeam = 20;
	//team_id = (int*)malloc(numTeam * sizeof(int));
	/*
	for (int i = 0; i < numTeam; i++) {
		team_id[i] = i;
	}*/

	/*for (int i = 0; i < numTeam - 1; i++) {
		cout << i + 1 << "주차" << endl;
		for (int j = 0; j < numTeam / 2; j++) {
			if (team[team_id[j]].is_my_team() == true || team[team_id[numTeam - j - 1]].is_my_team() == true)
			{
				match.my_game_simulation(team[team_id[j]], team[team_id[numTeam - j - 1]], player);
			}
			else
			{
				match.game_simulation(team[team_id[j]], team[team_id[numTeam - j - 1]]);
			}
			cout << endl;
		}

		for (int j = 0; j < numTeam - 1; j++) {
			team_id[j] = (team_id[j] + 1) % (numTeam - 1);
		}

		cout << endl;
	}*/
	cout << week + 1 << "주차" << endl;
	for (int j = 0; j < numTeam / 2; j++) {
		if (team[team_id[j]].is_my_team() == true || team[team_id[numTeam - j - 1]].is_my_team() == true)
		{
			match.my_game_simulation(team[team_id[j]], team[team_id[numTeam - j - 1]], player);
		}
		else
		{
			match.game_simulation(team[team_id[j]], team[team_id[numTeam - j - 1]]);
		}
		cout << endl;
	}

	for (int j = 0; j < numTeam - 1; j++) {
		team_id[j] = (team_id[j] + 1) % (numTeam - 1);
	}

	cout << endl;


	for (int i = 0; i < 20; i++)
	{
		cout << team[i].get_name() << "\t" << team[i].get_winning_point() << endl;
	}
}
