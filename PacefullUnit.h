#pragma once
#include "AbstractUnit.h"
#include "Statuses.h"
class PacefullUnit : public AbstractUnit
{
	
public:
	PacefullUnit() : AbstractUnit() {
		statuses.team = pacefull;

	};

	PacefullUnit(Score *score) : AbstractUnit(score) {
	
		statuses.team = pacefull;
		score->inc_pacefull();
	};

	void step() override {

	}

};

