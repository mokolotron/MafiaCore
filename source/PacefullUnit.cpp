#include "PacefullUnit.h"

PacefullUnit::PacefullUnit() : AbstractUnit(Team::pacefull) {
    //statuses.team = pacefull;
    Score::inc_pacefull();
}

int PacefullUnit::step(DayParts daypart) {
    int vote = AbstractUnit::step(daypart);
    if(vote<=missing_step) return missing_step;
    return vote;
}
