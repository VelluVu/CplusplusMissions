#pragma once
#include "Ajoneuvo.h"
class Laiva :
	public Ajoneuvo
{
private:
	int _depthMax;

public:
	Laiva(int depthMax);
	~Laiva();
};

