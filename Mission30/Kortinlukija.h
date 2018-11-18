#pragma once
#include "Mission_30.h"
#include "MatkaKortti.h"
#include "KortinLataaja.h"
#include <ctime>

class Kortinlukija
{	
private:

	MatkaKortti* card;
	int p;
	int k;
	int vu;
	float arvo;

public:

	Kortinlukija();
	~Kortinlukija();
	void LueKortti(MatkaKortti* c);
	bool TarkistaKelpoisuus();
	void OtaMaksu();

};