#include "KortinLataaja.h"



KortinLataaja::KortinLataaja()
{
}

KortinLataaja::~KortinLataaja()
{
}

void KortinLataaja::Lataa(MatkaKortti* mk) 
{
	mk.AlustaKortti();
	float sum;
	int pv;
	int kk;
	int v;

	cout << "Paljonko ladataan arvoa? ";

	cin >> sum;

	if (sum > 0)
	{

		mk.LataaArvoa(sum);

	}
	else
	{

		cout << "Enemmän ku 0" << endl;

	}

	cout << "Paljonko ladataan aikaa? pv/kk/vuosi" << endl;

	cin >> pv;

	if (pv >= 1 && pv <= 31) {

		cout << "Sitten kk" << endl;

	}
	else
	{
		cout << "Eipä oo tommosia päiviä olemassa... kokeile uusiksi" << endl;
		pv = 0;
		cin >> pv;
	}

	cin >> kk;

	if (kk >= 1 && kk <= 12) {

		cout << "Sitten Vuosi" << endl;

	}
	else
	{
		cout << "Eipä oo tommosia kuukausia olemassa... kokeile uusiksi" << endl;
		kk = 0;
		cin >> kk;
	}

	cin >> v;

	if (v >= 2018) {
		cout << "Well done" << endl;
	}
	else
	{
		cout << "Vuonna 2018! MIN, kokeile uusiksi!" << endl;
		cin >> v;
	}

	if (pv >= 1 && pv <= 31 && kk >= 1 && kk <= 12 && v >= 2018) {

		mk.LataaAikaa(v, kk, pv);

	}

	cout << "Arvoa on: " << mk.GetArvo() << endl;
	cout << "Aikaa on: " << mk.GetPv() << "/" << mk.GetKk() << "/" << mk.GetVuosi() << endl;

}
