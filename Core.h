#pragma once
#include "AbstractUnit.h"
#include "MafiaUnit.h"
#include "PoliceUnit.h"
#include "PacefullUnit.h"
#include <map>
#include "Gamer.h"
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <random>
#include <chrono>
#define TEAM_DELIVERY 0.3
using namespace std;



class Core
{
protected:
	vector<AbstractUnit> units;
	Score score;
public:
	Core()
	{

	}

	void start() {
		score.set_amount(Gamer::getAmountPlayers());
		create_units();
		while (score.end_game()) {
			step();
		}
		
	}

	bool step()
	{
		for (int i = 0; i < units.size(); i++)
		{
			units[i].step();
		}
		
	}

	int myrandom(int i) { return std::rand() % i; }

	void create_units() {
		for (int i = 0; i < score.get_amount(); i++)
			if (units.size() == 0)
				units.push_back(PoliceUnit(&score));
			else if (score.mafia_lead())
				units.push_back(MafiaUnit(&score));
			else if(!score.mafia_lead())
				units.push_back(PacefullUnit(&score));

		
		unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
		shuffle(units.begin(), units.end(), std::default_random_engine(seed));
	}

	

	


};