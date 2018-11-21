#pragma once
class Maastotyyppi
{
protected:

	float _taisteluVaikeusKerroin;
	float _liikkumisVaikeusKerroin;

public:

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

};