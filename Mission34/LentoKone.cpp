#include "LentoKone.h"



LentoKone::LentoKone(int flyHeightMax) : Ajoneuvo(_huippuNopeus, _kayttoonOttoVuosi, _paino), _flyHeightMax(flyHeightMax)
{
}


LentoKone::~LentoKone()
{
	delete(this);
}
