#include "Autot.h"



Autot::Autot(int oviLkm, int rengasLkm): Ajoneuvo(_huippuNopeus,_kayttoonOttoVuosi,_paino) , _oviLkm(oviLkm), _rengasLkm(rengasLkm)
{
}


Autot::~Autot()
{
	delete(this);
}
