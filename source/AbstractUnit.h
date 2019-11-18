#pragma once
#include "Gamer.h"
#include  "Statuses.h"

class AbstractUnit
{
protected:
	Statuses statuses;
	//Score* score;

public:
    AbstractUnit(Team team);

    virtual ~AbstractUnit() {}

    virtual int step(DayParts daypart) = 0;

private:
    static int CountUnits;
};


