#pragma once
#include <map>
using namespace std;

enum  Team {
	pacefull, mafia
};

//map<Team, int> Teams;

enum DayParts {
    day = 0,
    night
};
inline  DayParts operator++ (DayParts const& d) {
    return static_cast<DayParts>((static_cast<int>(d) + 1) % 2);
}

enum results {
    fatal_error = -3,
    non_fatal_error,
    missing_step
};

struct Statuses {
	bool isLive;
	//enum activity {day, night};
	bool isStaned;
	Team team;
    int id;
	void set_team(Team _team) { team = _team; }
};
