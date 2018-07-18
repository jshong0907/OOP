#include "Player.h"



Player::Player(string _name, int _speed, int _stamina, int _pass, int _sight, int _defend, int _shoot_accuracy, int _shoot_power)
{
	name = _name;
	speed = _speed;
	stamina = _stamina;
	pass = _pass;
	sight = _sight;
	defend = _defend;
	shoot_accuracy = _shoot_accuracy;
	shoot_power = _shoot_power;
}

Player::Player(Player & other)
{
	speed = other.speed;
	stamina = other.stamina;
	pass = other.pass;
	sight = other.sight;
	defend = other.defend;
	shoot_accuracy = other.shoot_accuracy;
	shoot_power = other.shoot_power;
}

Player::~Player()
{
}

void Player::clear_game_stats()
{
	goal_chance = 0;
	shoot_on_target = 0;
	target_on_goal = 0;
}
