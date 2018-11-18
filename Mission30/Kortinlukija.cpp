#include "Kortinlukija.h"

Kortinlukija::Kortinlukija()
{
	
}

Kortinlukija::~Kortinlukija()
{
	
}

void Kortinlukija::LueKortti(MatkaKortti* c)
{

	card = c;

}

bool Kortinlukija::TarkistaKelpoisuus()
{
	
	p = 14;
	k = 11;
	vu = 2018;

	cout << p << "/" << k << "/" << vu << endl;
	
	if (card->GetPv() >= p && card->GetKk() >= k && card->GetVuosi() >= vu) {

		cout << "Kortissa on aikaa. " << endl;

		return true;

	}
	else
	{

		cout << "Kortissa Ei ole aikaa. " << endl;

		return false;

	}
	
}

void Kortinlukija::OtaMaksu() 
{

	if (!TarkistaKelpoisuus) 
	{
		cout << "bad card..." << endl;
		return;
	}

	cout << "0 = vaihdoton raitiovaunumatka, " << endl;
	cout << "1 = kaupungin sisäinen matka, " << endl;
	cout << "2 = seutumatka tai vyöhykelisä. " << endl;
	int nappi0;
	cin >> nappi0;

	switch (nappi0)	
	{
	case 0:

		cout << "ratikka... -2.8€" << endl;
		card->SetArvo(-3);

		if (card->GetArvo() <= 0) {
			cout << "Eihä sulla oo rahaa..." << endl;
		}

		break;

	case 1:

		cout << "sisäinen... -3.5€" << endl;
		card->SetArvo(-3.5);

		if (card->GetArvo() <= 0) {
			cout << "Eihä sulla oo rahaa..." << endl;
		}

		break;

	case 2:

		cout << "seutu... nyt meni massit -100€" << endl;
		card->SetArvo(-100);

		if (card->GetArvo() <= 0) {
			cout << "Eihä sulla oo rahaa..." << endl;
		}

		break;

	default:
		break;
	}

}
