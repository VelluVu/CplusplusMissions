#pragma once

#include <string>
#include <iostream>
using namespace std;

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

};

