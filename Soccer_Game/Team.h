#pragma once
#include <string>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Team
{
public:
	Team(string name, int level);
	Team() {};
	Team(Team & other);
	friend ostream& operator<<(ostream& os, const Team& other);
	~Team();

	friend class Match;

	string get_name() { return name; }
	int get_level() { return level; }
	int get_winning_point() { return winning_point; }
	int get_gf() { return gf; }
	int get_ga() { return ga; }
	int get_gd() { return gd; }

	void reset_stats();
	void set_name(string set_name) { name = set_name; }
	void set_level(int set_level) { level = set_level; }
	void add_winning_point(int added_winning_point) { winning_point += added_winning_point; }
	void add_gf(int added_gf) { gf += added_gf; }
	void add_ga(int added_ga) { ga += added_ga; }
	void set_gd() { gd = gf - ga; }
	void new_team() { my_team = true; }
	bool is_my_team() { return my_team; }

private:
	string name;
	int level;
	int winning_point = 0;
	int gf = 0; //µæÁ¡
	int ga = 0; //½ÇÁ¡
	int gd = gf - ga; //µæ½ÇÂ÷
	bool my_team = false;
};

