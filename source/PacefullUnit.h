#pragma once
#include "AbstractUnit.h"
#include "Statuses.h"
#include "Score.h"
class PacefullUnit : public AbstractUnit
{
	
public:


	PacefullUnit() : AbstractUnit(Team::pacefull) {
		//statuses.team = pacefull;
		Score::inc_pacefull();
    }

	void step() override {
        //cout << "step";
	}

};

