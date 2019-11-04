#pragma once
#include "AbstractUnit.h"
#include "Statuses.h"
class PoliceUnit :	public AbstractUnit
{
public:
	PoliceUnit() : AbstractUnit() {
		statuses.role = police;

	};

	void step() {

	}

};

