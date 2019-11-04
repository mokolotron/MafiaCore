#pragma once
#include  "Statuses.h"

class AbstractUnit
{
protected:
	Statuses statuses;
public:
	AbstractUnit() {
		statuses.isLive = true;
		statuses.isStaned = false;
	}
	~AbstractUnit();
	virtual void step() = 0;

private:

};
