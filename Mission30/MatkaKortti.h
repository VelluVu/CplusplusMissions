#pragma once

#include "Mission_30.h"

class MatkaKortti
{
private:
	
	float _arvo;
	int _vuosi;
	int _kk;
	int _pv;

public:

	MatkaKortti();
	~MatkaKortti();
	void AlustaKortti();
	void LataaArvoa(float summa);
	void LataaAikaa(int vuosi, int kk, int pv);
	float GetArvo();
	int GetPv();
	int GetKk();
	int GetVuosi();
	void SetArvo(float luku);
};

