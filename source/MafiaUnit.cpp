#include "MafiaUnit.h"

MafiaUnit::MafiaUnit() : AbstractUnit(Team::mafia) {
    //	statuses.team = mafia;
    Score::inc_mafia();
}

int MafiaUnit::step(DayParts daypart) {
    int vote = AbstractUnit::step(daypart);
    if(vote<=missing_step) return missing_step;

    if(daypart == night)  vote = Gamer::mafia_vote();
    return vote;
    // return 1;
}
