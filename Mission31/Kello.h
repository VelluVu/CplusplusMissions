#pragma once
#include <Windows.h>
#include "Viisari.h"
#include "Mission_31.h"

class Kello
{
private:

	Viisari *tunnit;
	Viisari *minuutit;
	Viisari *sekunnit;
public:

	Kello(int h, int m, int s);
	~Kello();
	void nayta();
	void kay();
};

