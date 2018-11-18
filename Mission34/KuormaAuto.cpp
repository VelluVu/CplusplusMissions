#include "KuormaAuto.h"



KuormaAuto::KuormaAuto(int loadMaxWeight) : Autot(_oviLkm,_rengasLkm), _loadMaxWeight(loadMaxWeight)
{
}


KuormaAuto::~KuormaAuto()
{
	delete(this);
}
