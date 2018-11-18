#include "Kello.h"



Kello::Kello(int h, int m, int s)
{

	tunnit = new Viisari(h,24,0);
	minuutit = new Viisari(m,60, tunnit);
	sekunnit = new Viisari(s, 60, minuutit);
		
}


Kello::~Kello()
{

	delete(sekunnit);
	delete(minuutit);
	delete(tunnit);

}

void Kello::nayta()
{
	system("cls");

	if (tunnit->GetArvo() < 10) {
		cout << "0" << tunnit->GetArvo() << ":";
	}
	else {
		cout << tunnit->GetArvo() << ":";
	}
	if (minuutit->GetArvo() < 10) {
		cout << "0" << minuutit->GetArvo() << ":";
	}
	else {
		cout << minuutit->GetArvo() << ":";
	}
	if (sekunnit->GetArvo() < 10) {
		cout << "0" << sekunnit->GetArvo();
	}
	else {
		cout << sekunnit->GetArvo();
	}


	cout << "\n";
}

void Kello::kay()
{

	sekunnit->etene();
}

