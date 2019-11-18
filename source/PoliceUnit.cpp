#include "PoliceUnit.h"

PoliceUnit::PoliceUnit() : PacefullUnit() {
    //statuses.team = pacefull;
    Score::inc_pacefull();
}

int PoliceUnit::step(DayParts daypart) {
    int vote = AbstractUnit::step(daypart);
    if(vote<=missing_step) return missing_step ;

    if(daypart == night ){
        vote = Gamer::inspect(statuses.id);
    }

    return vote;
}
