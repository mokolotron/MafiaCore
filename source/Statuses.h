#pragma once

using namespace std;

enum class Team {
	pacefull, mafia
};

struct Statuses {
	bool isLive;
	//enum activity {day, night};
	bool isStaned;
	Team team;
	void set_team(Team _team) { team = _team; }
};
