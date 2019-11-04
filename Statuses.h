#pragma once

#define TEAM_DELIVERY 0.3
using namespace std;

static class Score {
		int pacefulls;
		int mafia;
		int amount;
public:
	Score() {
		int pacefulls = 0;
		int mafia = 0;
		int amount = 0;
	}
	void inc_pacefull() { pacefulls++; }
	void inc_mafia() { mafia++; }
	void set_amount(int _amount ) { amount = _amount; }
	int  get_amount() { return amount; }
	int  get_mafia() { return amount; }
	int  get_pacefulls() { return amount; }

	void dec_pacefull() { pacefulls--;}
	void dec_mafia() { mafia--; }
	void dec_amount() { amount--; }

	bool mafia_lead() { return (mafia / amount < TEAM_DELIVERY); }
	
	bool end_game() {
		if(pacefulls && mafia) return true;
	}

};

enum Team {
	pacefull, mafia
};

struct Statuses {
	bool isLive;
	enum activity {day, night};
	bool isStaned;
	Team team;
};
