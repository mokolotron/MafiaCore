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
#include <mainwindow.h>
#include "Score.h"
#include <QApplication>
#define TEAM_DELIVERY 0.3
using namespace std;



class Core
{
protected:
	vector<AbstractUnit> * units;
	
public:
	Core()
	{
		units = new vector<AbstractUnit>;
	}

    void start() {

		Score::set_amount(Gamer::getAmountPlayers());
		create_units();
		while (Score::end_game()) {
			step();
		}
	}

	void step()
	{
		for (int i = 0; i < units->size(); i++)
		{
			units->at(i).step();
		}
	
	}

	int myrandom(int i) { return std::rand() % i; }

	void create_units() {
		for (int i = 0; i < Score::get_amount(); i++)
			if (units->size() == 0)
				units->push_back(PoliceUnit());
			else if (Score::mafia_lead())
				units->push_back(MafiaUnit());
			else if(!Score::mafia_lead())
				units->push_back(PacefullUnit());


		std::random_shuffle(units->begin(), units->end());
	}

	

	


};
