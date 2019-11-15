#pragma once
#include <iostream>
#include <string>
#include "../numberinput.h"
using namespace std;
  class Gamer
{
public:
	 static int getAmountPlayers() {
         NumberInput ni;
         ni.setModal(true);
         ni.exec();
         return 5;
	 }
};

