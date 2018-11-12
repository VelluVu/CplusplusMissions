#include "Kortinlukija.h"
#pragma warning(disable : 4996)

Kortinlukija::Kortinlukija()
{

	kortti = new MatkaKortti();

}

Kortinlukija::~Kortinlukija()
{

	delete(kortti);

}

void Kortinlukija::LueKortti(MatkaKortti* k)
{

	kortti = k;

}

bool Kortinlukija::TarkistaKelpoisuus()
{
	
	time_t t = time(NULL);
	tm* timePtr = localtime(&t);

	cout << pv << "/" << kk << "/" << v << endl;
	
	if (kortti->GetPv() >= (timePtr->tm_mday) && kortti->GetVuosi() >= (timePtr->tm_mon) && v >= (timePtr->tm_year) + 1900) {

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
	
	cout << "0 = vaihdoton raitiovaunumatka, " << endl;
	cout << "1 = kaupungin sisäinen matka, " << endl;
	cout << "2 = seutumatka tai vyöhykelisä. " << endl;
	int nappi0;
	cin >> nappi0;

	switch (nappi0)	
	{
	case 0:

		cout << "ratikka... -2.8€" << endl;
		kortti->SetArvo(-3);

		if (kortti->GetArvo() <= 0) {
			cout << "Eihä sulla oo rahaa..." << endl;
		}

		break;

	case 1:

		cout << "sisäinen... -3.5€" << endl;
		kortti->SetArvo(-3.5);

		if (kortti->GetArvo() <= 0) {
			cout << "Eihä sulla oo rahaa..." << endl;
		}

		break;

	case 2:

		cout << "seutu... nyt meni massit -100€" << endl;
		kortti->SetArvo(-100);

		if (kortti->GetArvo() <= 0) {
			cout << "Eihä sulla oo rahaa..." << endl;
		}

		break;

	default:
		break;
	}

}
