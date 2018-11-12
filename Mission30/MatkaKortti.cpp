#include "MatkaKortti.h"



MatkaKortti::MatkaKortti()
{
	
}


MatkaKortti::~MatkaKortti()
{
}

void MatkaKortti::AlustaKortti() {

	_arvo = 0;
	_pv = 0;
	_kk = 0;
	_vuosi = 0;

}

void MatkaKortti::LataaArvoa(float summa) {


	_arvo += summa;

}

void MatkaKortti::LataaAikaa(int vuosi, int kk, int pv) {

	_pv = pv;
	_kk = kk;
	_vuosi = vuosi;

}

float MatkaKortti::GetArvo() {

	return _arvo;

}

int MatkaKortti::GetPv() {

	return _pv;

}

int MatkaKortti::GetKk() {

	return _kk;

}

int MatkaKortti::GetVuosi() {

	return _vuosi;

}

void MatkaKortti::SetArvo(float luku) {

	_arvo += luku;

}
