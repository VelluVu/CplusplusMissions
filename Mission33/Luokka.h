#pragma once
#include "Mission_33.h"

class Joku {};

class Luokka
{

	Joku* _joku;

public:
	
	Luokka();
	~Luokka();
	Luokka(const Luokka& original);
	Luokka& operator = (const Luokka& luokka);

};

