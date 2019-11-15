#pragma once
#include "AbstractUnit.h"
#include "Score.h"
class MafiaUnit : public AbstractUnit
{
public:

	MafiaUnit() : AbstractUnit(Team::mafia) {
	//	statuses.team = mafia;
		Score::inc_mafia();
	};

	void step() override {

	}
		
};

