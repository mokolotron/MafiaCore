#pragma once
#include "AbstractUnit.h"
#include "Statuses.h"
class MafiaUnit : public AbstractUnit
{
public:
	MafiaUnit() : AbstractUnit() {
		statuses.team = mafia;

	};

	MafiaUnit(Score *score) : AbstractUnit(score) {
		statuses.team = mafia;
		score->inc_mafia();
	};

	void step() override {

	}

};

