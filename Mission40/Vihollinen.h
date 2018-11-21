#pragma once
#include <string>
#include "Pelaaja.h"
using namespace std;

class Vihollinen
{
public:
	string _nimi;
	int _hyokkaysPisteet;
	int _puolustusPisteet;
	int _kuntoPisteet;
	void Die();
	void DealDamage(Pelaaja&);
	Vihollinen(string nimi, int hyokkausPisteet, int puolustusPisteet, int kuntoPisteet);
	~Vihollinen();
};

class Orc : public Vihollinen {

	Orc(string nimi,int hyokkaysPisteet, int puolustusPisteet, int kuntoPisteet) : Vihollinen(nimi, hyokkaysPisteet, puolustusPisteet, kuntoPisteet) {

	}
	~Orc() {
		delete(this);
	}

};

class MyrkkyHamis : public Vihollinen {

	MyrkkyHamis(string nimi, int hyokkaysPisteet, int puolustusPisteet, int kuntoPisteet) : Vihollinen(nimi, hyokkaysPisteet, puolustusPisteet, kuntoPisteet) {

	}
	~MyrkkyHamis() {
		delete(this);
	}

};

