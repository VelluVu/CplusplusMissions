#pragma once
#include <iostream>

class Maastotyyppi
{

protected:
	char _merkki;
	float _taisteluVaikeusKerroin;
	float _liikkumisVaikeusKerroin;

public:

	//virtual void Piirra() = 0;
	Maastotyyppi(char merkki, float taisteluVaikeusKerroin, float liikkumisVaikeusKerroin) {
		_merkki = merkki;
		_taisteluVaikeusKerroin = taisteluVaikeusKerroin;
		_liikkumisVaikeusKerroin = liikkumisVaikeusKerroin;
	}
	~Maastotyyppi() {
		delete(this);
	}
	void EtuMerkki() {
		std::cout << _merkki;
	}
};

/*class Suo : public Maastotyyppi {

	Suo(float tv, float lv) : Maastotyyppi(tv, lv) {
	}
	~Suo() {
		delete(this);
	}
	void Piirra() {
		std::cout << "S";
	}
	
};

class Metsa : public Maastotyyppi {

	Metsa(float tv, float lv) : Maastotyyppi(tv, lv) {
	}
	~Metsa() {
		delete(this);
	}
	void Piirra() {
		std::cout << "M";
	}
	
};

class Vesi : public Maastotyyppi {

	Vesi(float tv, float lv) : Maastotyyppi(tv, lv) {
	
	}
	~Vesi() {
		delete(this);
	}
	void Piirra() {
		std::cout << "V";
	}

};

class Heinikko : public Maastotyyppi {

	Heinikko(float tv, float lv) : Maastotyyppi(tv, lv) {
	}
	~Heinikko() {
		delete(this);
	}
	void Piirra() {
		std::cout << "H";
	}
	
};

class Tie : public Maastotyyppi {

	Tie(float tv, float lv) : Maastotyyppi(tv, lv) {
	}
	~Tie() {
		delete(this);
	}
	void Piirra() {
		std::cout << "T";
	}

};

class Vuoristo : public Maastotyyppi {

	Vuoristo(float tv, float lv) : Maastotyyppi(tv, lv) {
	}
	~Vuoristo() {
		delete(this);
	}
	void Piirra() {
		std::cout << "v";
	}

};*/