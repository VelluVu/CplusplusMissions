#pragma once
#include "Mission_30.h"
#include "MatkaKortti.h"
#include "KortinLataaja.h"
#include <ctime>

class Kortinlukija
{
	
private:
	
	int pv;
	int kk;
	int v;
	float arvo;
	MatkaKortti* kortti;

public:
	
	Kortinlukija();
	~Kortinlukija();
	void LueKortti(MatkaKortti* k);
	bool TarkistaKelpoisuus();
	void OtaMaksu();

};

