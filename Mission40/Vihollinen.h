#pragma once
#include <string>
#include "Pelaaja.h"
using namespace std;

class Vihollinen
{

private:

	string _nimi;
	int _hyokkaysPisteet;	

public:
	
	Vihollinen(string nimi, int hyokkausPisteet, int puolustusPisteet, int kuntoPisteet);
	~Vihollinen();
	int _puolustusPisteet;
	int _kuntoPisteet;
	void Die();
	void DealDamage(Pelaaja* p);
	
};

/*class Orc : public Vihollinen {

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

};*/

