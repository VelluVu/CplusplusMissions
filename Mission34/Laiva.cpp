#include "Laiva.h"



Laiva::Laiva(int depthMax) : Ajoneuvo(_huippuNopeus, _kayttoonOttoVuosi, _paino), _depthMax(depthMax)
{
}


Laiva::~Laiva()
{
	delete(this);
}
