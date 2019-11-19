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

    void kill(int id){
        for( vector<AbstractUnit*>::iterator el = units->begin(); el != units->end(); el++){
            if((*el)->get_id() == id) {
                (*el)->~AbstractUnit();
                //delete * el;
                el =  units->erase(el);
            };
        }
    }


    void step(DayParts daypart)
	{
        vector<int> round_res(units->size(), int(0));

        for (int i = 0; i < units->size(); i++)
		{
            int id = units->at(i)->step(daypart);
            round_res.at(id) += 1;  //collect votes in round
        }

        //find unit with mosts votes
        vector<int>::iterator it = max_element(round_res.begin(), round_res.end());
        int distatnce_to_el = distance(round_res.begin(), it);
        kill(distatnce_to_el);
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

private:


};
