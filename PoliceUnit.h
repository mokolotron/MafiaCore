#pragma once
#include "PacefullUnit.h"
#include "Statuses.h"
class PoliceUnit :	public PacefullUnit
{
public:
	PoliceUnit() : PacefullUnit() {
		/*statuses.team = pacefull;*/

	};

	PoliceUnit(Score *score) : PacefullUnit(score) {
		//statuses.team = pacefull;
		//score->get_pacefulls();
	};

	void step() override {

	}

};

