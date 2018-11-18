#include "Ajoneuvo.h"



Ajoneuvo::Ajoneuvo(int huippuNopeus, int kayttoonOttoVuosi, int paino) : _paino(paino), _huippuNopeus(huippuNopeus), _kayttoonOttoVuosi(kayttoonOttoVuosi)
{
}


Ajoneuvo::~Ajoneuvo()
{
	delete(this);
}
