#pragma once
#include "Ajoneuvo.h"
class LentoKone :
	public Ajoneuvo
{

private:
	int _flyHeightMax;

public:
	LentoKone(int flyHeightMax);
	~LentoKone();
};

