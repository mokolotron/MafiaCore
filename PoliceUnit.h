#pragma once
#include "PacefullUnit.h"
#include "Statuses.h"
#include "Score.h"
class PoliceUnit :	public PacefullUnit
{
public:
	PoliceUnit() : PacefullUnit() {
		//statuses.team = pacefull;
		Score::inc_pacefull();
	};
	void step() override {

	}
};

