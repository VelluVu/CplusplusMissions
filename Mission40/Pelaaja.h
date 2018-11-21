#pragma once
#include <string>
#include "Vihollinen.h"
using namespace std;

class Pelaaja
{
public:
	string _nimi;
	int _level;
	int _kuntoPisteet;
	int _kuntoPisteetMax;
	int _varallisuus;
	int _hyokkaysVoima;
	int _puolustusVoima;
	void KasvataHP(int);
	void DealDamage(Vihollinen&);
	void Die();
	Pelaaja(string, int, int, int, int, int, int);
	~Pelaaja();
};

