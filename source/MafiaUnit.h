#pragma once
#include "AbstractUnit.h"
#include "Gamer.h"
#include "Score.h"
class MafiaUnit : public AbstractUnit
{
public:
 MafiaUnit();
 int step(DayParts daypart) override;
		
};


