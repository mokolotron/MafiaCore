#pragma once
#include  "Statuses.h"

class AbstractUnit
{
protected:
	Statuses statuses;
	//Score* score;

public:

	AbstractUnit(Team team) {
		//this->score = score;
		statuses.isLive = true;
		statuses.isStaned = false;
		statuses.set_team(team);
	}

	~AbstractUnit() {};
    virtual void step() {};

private:

};
