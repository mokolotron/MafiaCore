#include <iostream>
#include "Core.h"
#include "Score.h"
int Score::amount = 0;
int Score::mafia = 0;
int Score::pacefulls = 0;

int main() {
	Core * core = new Core;
	core->start();
	return 0;
}