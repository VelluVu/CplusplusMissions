#include "HenkiloAuto.h"



HenkiloAuto::HenkiloAuto(int matkustajatMax) : Autot(_oviLkm,_rengasLkm), _matkustajatMax(matkustajatMax)
{
}


HenkiloAuto::~HenkiloAuto()
{
	delete(this);
}
