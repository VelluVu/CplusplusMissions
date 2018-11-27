#include "Vihollinen.h"



void Vihollinen::Die()
{
	if (_puolustusPisteet <= 0) {
		delete(this);
	}
}

void Vihollinen::DealDamage(Pelaaja* p)
{
	p->_kuntoPisteet -= (_hyokkaysPisteet - p->_puolustusPisteet);
	p->Die();
}

Vihollinen::Vihollinen(string nimi, int hyokkausPisteet, int puolustusPisteet, int kuntoPisteet)
{
	_nimi = nimi;
	_hyokkaysPisteet = hyokkausPisteet;
	_puolustusPisteet = puolustusPisteet;
	_kuntoPisteet = kuntoPisteet;
}

Vihollinen::~Vihollinen()
{
	delete(this);
}
