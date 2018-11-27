#include "Pelaaja.h"



void Pelaaja::KasvataHP(int increase)
{

	_kuntoPisteetMax += increase;

}

void Pelaaja::DealDamage(Vihollinen* vihu)
{

	vihu->_kuntoPisteet -= (_hyokkaysVoima - vihu->_puolustusPisteet);
	vihu->Die();
	
}

void Pelaaja::Die()
{

	if (_kuntoPisteet <= 0) {
		delete(this);
	}

}

Pelaaja::Pelaaja(string nimi,int level, int kuntoPisteet, int kuntoPisteetMax, int varallisuus, int hyokkaysVoima, int puolustusVoima)
{
	_nimi = nimi;
	_level = level;
	_kuntoPisteet = kuntoPisteet;
	_kuntoPisteetMax = kuntoPisteet;
	_varallisuus = varallisuus;
	_hyokkaysVoima = hyokkaysVoima;
	_puolustusPisteet = puolustusVoima;

}


Pelaaja::~Pelaaja()
{
	
	delete(this);

}

void Pelaaja::SetKama(Objekti* objekti)
{
	//varusteiden vaihto ja jne... saa lisätä
	kamat = objekti;
}
