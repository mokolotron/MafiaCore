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
#include <string>
#define TEAM_DELIVERY 0.3
using namespace std;



class Core
{
protected:
    vector<AbstractUnit*> * units;
	
public:
	Core()
	{
        units = new vector<AbstractUnit*>;
	}

    void start() {
        //find amount
        map<string, int> Teams = Gamer::getPlayers();
        int amount = 0;
        for(auto el : Teams){
            amount += el.second;
        }
        Score::set_amount(amount);

        create_units(Teams);
        DayParts daypart =  DayParts::day;


        while (!Score::end_game()) {
            step(daypart);
            daypart = ++daypart;
		}


	}

    void step(DayParts daypart)
	{
		for (int i = 0; i < units->size(); i++)
		{
            units->at(i)->step(daypart);
		}
    }

    void create_units(map<string, int> Teams) {
        map<string, int>::iterator it = Teams.begin();
        for (int i = 0; i < Score::get_amount(); i++ ){
            if (it->first == "police"){
                units->push_back(new PoliceUnit());
                }
            else if (it->first == "mafia")
                units->push_back(new MafiaUnit());
            else if(it->first == "pacefull")
                units->push_back(new PacefullUnit());
            it++;
        }
		std::random_shuffle(units->begin(), units->end());
	}

};
