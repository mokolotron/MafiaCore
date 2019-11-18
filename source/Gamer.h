#pragma once
#include <iostream>
#include <string>
#include "../numberinput.h"
#include "Statuses.h"
//#include "Score.h"
using namespace std;
  class Gamer
{

public:
     static  map<string, int> getPlayers() {
         NumberInput * ni = new NumberInput;
         ni->setModal(true);
         ni->exec();

         map<string, int> Teams;
         Teams["mafia"] = ni->get_mafiaN();
         Teams["pacefull"] = ni->get_mafiaN();
         Teams["police"] = ni->get_mafiaN();

         return Teams;

         //return 5;
	 }

     static int vote(int id, Team team){
        //get units from Coreb
      return 0;
     }

     static int inspect(int id){
         return 0;
     }

     static int mafia_vote(){
         return 0;
     }
};

