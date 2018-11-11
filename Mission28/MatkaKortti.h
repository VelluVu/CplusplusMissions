#pragma once

#include "Mission_28.h"

class MatkaKortti
{
public:
	MatkaKortti();
	~MatkaKortti();

private:
	float _arvo;
	int _vuosi;
	int _kk;
	int _pv;

public:

	void AlustaKortti();
	void LataaArvoa(float summa);
	void LataaAikaa(int vuosi, int kk, int pv);
	float GetArvo();
	int GetPv();
	int GetKk();
	int GetVuosi();
};