#pragma once

#define TEAM_DELIVERY 0.3
class Score {
public:
	static int pacefulls;
	static int mafia;
	static int amount;

	 Score() {
         pacefulls = 0;
         mafia = 0;
         amount = 0;
	 }


	static void inc_pacefull() { pacefulls++; }
	static void inc_mafia() { mafia++; }
	static void set_amount(int _amount) { 
		amount = _amount;
	}
	static int  get_amount() { return amount; }
	static int  get_mafia() { return amount; }
	static int  get_pacefulls() { return amount; }

	static void dec_pacefull() { pacefulls--; }
	static void dec_mafia() { mafia--; }
	static void dec_amount() { amount--; }

	static bool mafia_lead() { 
		return (((mafia / amount) + (mafia % amount)) < TEAM_DELIVERY);
	}

	static bool end_game() {
		if (pacefulls && mafia) return false;
	}

};

