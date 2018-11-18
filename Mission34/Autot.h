#pragma once
#include "Ajoneuvo.h"
class Autot :
	public Ajoneuvo
{

protected:
	int _oviLkm;
	int _rengasLkm;

public:
	Autot(int oviLkm, int rengasLkm);
	~Autot();
};

