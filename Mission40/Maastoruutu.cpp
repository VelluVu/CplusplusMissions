#include "Maastoruutu.h"



Maastoruutu::Maastoruutu()
{
}

Maastoruutu::Maastoruutu(Maastotyyppi* maastotyyppi)
{
	_maastoTyyppi = maastotyyppi;
}

Maastoruutu::Maastoruutu(Maastotyyppi * maastotyyppi, Pelaaja * pelaaja)
{
	_maastoTyyppi = maastotyyppi;
	_pelaaja = pelaaja;
}

Maastoruutu::Maastoruutu(Maastotyyppi* maastotyyppi, Objekti * objektit, int objektitlkm)
{
	_maastoTyyppi = maastotyyppi;

	for (int i = 0; i < objektitlkm; i++)
	{
		_objektit.push_back(objektit);
	}
}

Maastoruutu::Maastoruutu(Maastotyyppi* maastotyyppi, Vihollinen * viholliset, int vihollisetlkm)
{
	_maastoTyyppi = maastotyyppi;

	for (int i = 0; i < vihollisetlkm; i++)
	{
		_viholliset.push_back(viholliset);
	}
		
}


Maastoruutu::Maastoruutu(Maastotyyppi* maastotyyppi, Vihollinen * viholliset, int vihollisetlkm, Objekti * objektit, int objektitlkm)
{
	_maastoTyyppi = maastotyyppi;

	for (int i = 0; i < vihollisetlkm; i++)
	{
		_viholliset.push_back(viholliset);
	}
	for (int i = 0; i < objektitlkm; i++)
	{
		_objektit.push_back(objektit);
	}
	
}

Maastoruutu::Maastoruutu(Maastotyyppi* maastotyyppi, Vihollinen * viholliset, int vihollisetlkm, Objekti * objektit, int objektitlkm, Pelaaja * pelaaja)
{
	_maastoTyyppi = maastotyyppi;
	_pelaaja = pelaaja;

	for (int i = 0; i < vihollisetlkm; i++)
	{
	_viholliset.push_back(viholliset);
	}
	for (int i = 0; i < objektitlkm; i++)
	{
		_objektit.push_back(objektit);
	}
	
}

Maastoruutu::~Maastoruutu()
{
}

