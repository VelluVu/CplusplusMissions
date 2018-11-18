#pragma once
#include "Autot.h"
class HenkiloAuto :
	public Autot
{
private:
	int _matkustajatMax;

public:
	HenkiloAuto(int matkustajatMax);
	~HenkiloAuto();
};

