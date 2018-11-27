#pragma once
#include <string>
#include "Vihollinen.h"
#include "Objekti.h"
using namespace std;

class Pelaaja
{

private:

	string _nimi;
	int _level;
	int _kuntoPisteetMax;
	int _varallisuus;
	int _hyokkaysVoima;
	Objekti* kamat;

public:

	Pelaaja(string, int, int, int, int, int, int);
	~Pelaaja();
	int _puolustusPisteet;
	int _kuntoPisteet;
	void KasvataHP(int);
	void DealDamage(Vihollinen* vihu);
	void Die();
	void SetKama(Objekti* objekti);
};

