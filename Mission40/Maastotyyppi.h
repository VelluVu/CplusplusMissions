#pragma once
#include <iostream>

class Maastotyyppi
{

protected:

	float _taisteluVaikeusKerroin;
	float _liikkumisVaikeusKerroin;

public:

	virtual void Piirra() = 0;
	Maastotyyppi(float taisteluVaikeusKerroin, float liikkumisVaikeusKerroin) {
		_taisteluVaikeusKerroin = taisteluVaikeusKerroin;
		_liikkumisVaikeusKerroin = liikkumisVaikeusKerroin;
	}
	~Maastotyyppi() {
		delete(this);
	}
};

class Suo : public Maastotyyppi {

	float tv;
	float lv;
	Suo() : Maastotyyppi(tv, lv) {
		tv = 2;
		lv = 2;
	}
	~Suo() {
		delete(this);
	}
	void Piirra() {
		std::cout << "S";
	}
	
};

class Metsa : public Maastotyyppi {

	float tv;
	float lv;
	Metsa() : Maastotyyppi(tv, lv) {
		tv = 1.4;
		lv = 1.6;
	}
	~Metsa() {
		delete(this);
	}
	void Piirra() {
		std::cout << "M";
	}
	
};

class Vesi : public Maastotyyppi {

	float tv;
	float lv;
	Vesi() : Maastotyyppi(tv, lv) {
		tv = 5;
		lv = 5;
	}
	~Vesi() {
		delete(this);
	}
	void Piirra() {
		std::cout << "V";
	}

};

class Heinikko : public Maastotyyppi {

	float tv;
	float lv;
	Heinikko() : Maastotyyppi(tv, lv) {
		tv = 1;
		lv = 1;
	}
	~Heinikko() {
		delete(this);
	}
	void Piirra() {
		std::cout << "H";
	}
	
};

class Tie : public Maastotyyppi {

	float tv;
	float lv;
	Tie() : Maastotyyppi(tv, lv) {
		tv = 0.8;
		lv = 0.8;
	}
	~Tie() {
		delete(this);
	}
	void Piirra() {
		std::cout << "T";
	}

};

class Vuoristo : public Maastotyyppi {

	float tv;
	float lv;
	Vuoristo() : Maastotyyppi(tv, lv) {
		tv = 3;
		lv = 3;
	}
	~Vuoristo() {
		delete(this);
	}
	void Piirra() {
		std::cout << "v";
	}

};