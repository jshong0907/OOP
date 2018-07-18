#pragma once
#include <string>

using namespace std;
class Player
{
public:
	Player(string name, int speed, int stamina,int pass, int sight, int defend, int shoot_accuracy, int shoot_power);
	Player(Player&other);
	~Player();
	
	friend class League;
	friend class Match;
	friend class Application;
	string get_name() { return name; }
	int get_speed() { return speed; }
	int get_stamina() { return stamina; }
	int get_pass() { return pass; }
	int get_sight() { return sight; }
	int get_defend() { return defend; }
	int get_shoot_accuarcy() { return shoot_accuracy; }
	int get_shoot_power() { return shoot_power; }
	int get_fame() { return fame; }
	int run_time() { return stamina / 10; }
	int get_goal() { return my_goal; }

	void add_speed(int added_speed) { speed += added_speed; }
	void add_stamina(int added_stamina) { stamina += added_stamina; }
	void add_pass(int added_pass) { pass += added_pass; }
	void add_sight(int added_sight) { sight += added_sight; }
	void add_defend(int added_defend) { defend += added_defend; }
	void add_shoot_accuracy(int added_shoot_accuracy) { shoot_accuracy += added_shoot_accuracy; }
	void add_shoot_power(int added_shoot_power) { shoot_power += added_shoot_power; }
	void add_fame(int added_fame) { fame += added_fame; }
	void add_my_goal(int added_goal) { my_goal += added_goal; }


	int goal_chance = 0;
	int shoot_on_target = 0;
	int target_on_goal = 0;
	void clear_game_stats();
private:
	string name;
	int speed;
	int stamina;
	int pass;
	int sight;
	int defend;
	int shoot_accuracy;
	int shoot_power;
	int fame = 0;
	int my_goal = 0;
	
};

