#pragma once
#include "Maastotyyppi.h"
#include "Vihollinen.h"
#include "Objekti.h"

class Maastoruutu
{
	
public:
	int x;
	int y;
	Maastotyyppi* maastoTyyppi;
	Vihollinen* viholliset;
	Objekti* objektit;
	Maastoruutu();
	~Maastoruutu();
	
};

