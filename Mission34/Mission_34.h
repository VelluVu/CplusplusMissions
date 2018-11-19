#pragma once
#include <iostream>
#include <string>

using namespace std;


class Ajoneuvo
{
protected:
	int _huippuNopeus;
	int _kayttoonOttoVuosi;
	int _paino;

public:
	Ajoneuvo(int huippuNopeus, int kayttoonOttoVuosi, int paino) : _paino(paino), _huippuNopeus(huippuNopeus), _kayttoonOttoVuosi(kayttoonOttoVuosi)
	{
		cout << "hmm mikähän ajoneuvo..." << _huippuNopeus << ", " << _kayttoonOttoVuosi << ", " << _paino << endl;
	}

	~Ajoneuvo() {}
};

class Autot :
	public Ajoneuvo
{

protected:
	int _oviLkm;
	int _rengasLkm;

public:
	Autot(int huippuNopeus, int kayttoonOttoVuosi, int paino, int oviLkm, int rengasLkm) 
		: Ajoneuvo(huippuNopeus, kayttoonOttoVuosi, paino)
		, _oviLkm(oviLkm), _rengasLkm(rengasLkm)
	{
		cout << "Valitsit jonkun auton..." << _huippuNopeus << ", " << _kayttoonOttoVuosi << ", " << _paino << ", " << _oviLkm << ", " << _rengasLkm << endl;
	}
	~Autot() {}
};

class HenkiloAuto :
	public Autot
{
private:
	int _matkustajatMax;

public:
	HenkiloAuto(int huippuNopeus, int kayttoonOttoVuosi, int paino, int oviLkm,
		int rengasLkm, int matkustajatMax)
		: Autot(huippuNopeus, kayttoonOttoVuosi, paino, oviLkm, rengasLkm)
		, _matkustajatMax(matkustajatMax)
	{
		cout << "Valitsit jonkun Henkilöauton..." << _huippuNopeus << ", " << _kayttoonOttoVuosi << ", " << _paino << ", " << _oviLkm << ", " << _rengasLkm << ", " << _matkustajatMax << endl;
	}
	~HenkiloAuto() {}
};

class KuormaAuto :
	public Autot
{

private:
	int _loadMaxWeight;

public:
	KuormaAuto(int huippuNopeus, int kayttoonOttoVuosi, int paino, int oviLkm,
		int rengasLkm, int loadMaxWeight) : Autot(huippuNopeus, kayttoonOttoVuosi, paino, oviLkm, rengasLkm), _loadMaxWeight(loadMaxWeight)
	{
		cout << "Valitsit jonkun Henkilöauton..." << _huippuNopeus << ", " << _kayttoonOttoVuosi << ", " << _paino << ", " << _oviLkm << ", " << _rengasLkm << ", " << _loadMaxWeight << endl;
	}
	~KuormaAuto() {}
};

class Laiva :
	public Ajoneuvo
{
private:
	int _depthMax;

public:
	Laiva(int huippuNopeus, int kayttoonOttoVuosi, int paino, int depthMax) : Ajoneuvo(huippuNopeus, kayttoonOttoVuosi, paino), _depthMax(depthMax)
	{
		cout << "hmm laiva ajoneuvo..." << _huippuNopeus << ", " << _kayttoonOttoVuosi << ", " << _paino << ", " << _depthMax << endl;
	}
	~Laiva() {}
};

class LentoKone :
	public Ajoneuvo
{

private:
	int _flyHeightMax;

public:
	LentoKone(int huippuNopeus, int kayttoonOttoVuosi, int paino, int flyHeightMax) : Ajoneuvo(huippuNopeus, kayttoonOttoVuosi, paino), _flyHeightMax(flyHeightMax)
	{
		cout << "hmm lentokone ajoneuvo..." << _huippuNopeus << ", " << _kayttoonOttoVuosi << ", " << _paino << ", " << _flyHeightMax << endl;
	}
	~LentoKone() {}
};