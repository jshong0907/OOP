#pragma once
#include <iostream>
#include <Windows.h>
#include "Team.h"
#include "Match.h"
#include "Probability.h"
#include "League.h"
#include "Player.h"
using namespace std;
class Application
{
public:
	Application();
	~Application();
	void run();
	void choose();
	void base_interface(Player & player);
	void training_interface(Player & player);
private:
	int choice;
	Probability* possible = new Probability;
	int practice = 30;
	int is_train = 2;
};

