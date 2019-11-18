#pragma once
#include "PacefullUnit.h"
#include "Statuses.h"
#include "Score.h"
#include "Gamer.h"
class PoliceUnit :	public PacefullUnit
{
public:
    PoliceUnit();
    int step( DayParts daypart ) override;
};


