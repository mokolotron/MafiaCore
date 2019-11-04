#pragma once
#include "AbstractUnit.h"
#include "MafiaUnit.h"
#include "PoliceUnit.h"
#include "Gamer.h"
#include <vector>
using namespace std;



class Core
{
protected:
	vector<AbstractUnit> units;
	vector<AbstractUnit> next_units;
public:
	Core()
	{

	}

	void start() {
		int number = Gamer::get_number_player();
		create_units(number);
		
	}

	bool step()
	{
		for (int i = 0; i < next_units.size(); i++)
		{
			next_units[i].step();
		}
		
	}

	void create_units(int number) {
		for (int i = 0; i < number; i++)
			if (units.size() == 0)
				units.push_back(PoliceUnit());
	}


};