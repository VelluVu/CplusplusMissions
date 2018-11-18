#pragma once
#include "Autot.h"
class KuormaAuto :
	public Autot
{

private:
	int _loadMaxWeight;

public:
	KuormaAuto(int loadMaxWeight);
	~KuormaAuto();
};

