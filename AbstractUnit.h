#pragma once
#include  "Statuses.h"


class AbstractUnit
{
protected:
	Statuses statuses;
	Score* score ;

public:
	AbstractUnit() {
		statuses.isLive = true;
		statuses.isStaned = false;
	}

	AbstractUnit(Score *score) {
		this->score = score;
		statuses.isLive = true;
		statuses.isStaned = false;
		
	}
	~AbstractUnit();
	virtual void step() = 0;

private:

};
