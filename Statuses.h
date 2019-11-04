#pragma once
#include "string";
using namespace std;

enum Role {
	police = 1, pacefull, mafia
};

struct Statuses {
	bool isLive;
	enum activity {day, night};
	bool isStaned;
	Role role;
};
