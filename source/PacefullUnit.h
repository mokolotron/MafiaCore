#pragma once
#include "AbstractUnit.h"
#include "Statuses.h"
#include "Score.h"
#include "Gamer.h"
class PacefullUnit : public AbstractUnit
{
	
public:


    PacefullUnit();

    int step(DayParts daypart) override;

};

