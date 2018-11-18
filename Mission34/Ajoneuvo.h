#pragma once
#include "Mission_34.h"

class Ajoneuvo
{
protected:
	int _huippuNopeus;
	int _kayttoonOttoVuosi;
	int _paino;

public:
	Ajoneuvo(int huippuNopeus, int kayttoonOttoVuosi, int paino);
	~Ajoneuvo();
};

