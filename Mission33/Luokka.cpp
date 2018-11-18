#include "Luokka.h"



Luokka::Luokka()
{
	_joku = new Joku();
	
}

Luokka::~Luokka()
{
	delete(_joku);
	
}

Luokka::Luokka(const Luokka & original)
{
	_joku = original._joku;
}

Luokka & Luokka::operator=(const Luokka & luokka)
{
	if (_joku) delete(_joku);

	_joku = new Joku();

	_joku = luokka._joku;

	return *this;
}
