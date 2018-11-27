#pragma once
#include <string>
using namespace std;

class Objekti
{
protected:
	string _nimi;
	Objekti(string nimi) {
		_nimi = nimi;
	}
	~Objekti() {
		delete(this);
	};
};

class Taisteluvaruste : public Objekti {

public:

	int _hyokkaysVoima;
	int _puolustusVoima;

	Taisteluvaruste(string nimi, int hyokkaysVoima, int puolustusVoima) : Objekti (nimi) {

		_hyokkaysVoima = hyokkaysVoima;
		_puolustusVoima = puolustusVoima;

	}

	~Taisteluvaruste() {
		delete(this);
	}

};

class MuuObjekti : public Objekti {

public:
	int _kuntoPisteBonus;
	int _varallisuusBonus;

	MuuObjekti(string nimi, int kuntoPisteBonus, int varallisuusBonus) : Objekti (nimi) {

		_kuntoPisteBonus = kuntoPisteBonus;
		_varallisuusBonus = varallisuusBonus;

	}

	~MuuObjekti() {
		delete(this);
	}

};