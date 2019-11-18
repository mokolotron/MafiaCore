#include "AbstractUnit.h"

AbstractUnit::AbstractUnit(Team team) {
    //this->score = score;
    statuses.isLive = true;
    statuses.isStaned = false;
    statuses.id = CountUnits;
    statuses.set_team(team);

    AbstractUnit::CountUnits ++;
}

int AbstractUnit::step(DayParts daypart) {
    int vote = 0;
    if(statuses.isStaned || !statuses.isLive) return missing_step; //havent step
    if(daypart == day){
        vote = Gamer::vote(statuses.id, statuses.team);
    }
    return vote; //succsefull
}
