#include "Kello.h"



Kello::Kello(int h, int m, int s)
{

	sekunnit = new Viisari();
	minuutit = new Viisari();
	tunnit = new Viisari();
	sekunnit->SetArvo(s);
	minuutit->SetArvo(m);
	tunnit->SetArvo(h);

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
	} else {
		cout << sekunnit->GetArvo(); 
	}
	

	cout << "\n";
}

void Kello::kay()
{
	
	if ((sekunnit->GetArvo()+1) % 61) {
		sekunnit->IncrementArvo(1);
		if (sekunnit->GetArvo() == 60) {
			minuutit->IncrementArvo(1);
			sekunnit->SetArvo(0);
			if (minuutit->GetArvo() == 60) {
				tunnit->IncrementArvo(1);
				minuutit->SetArvo(0);
			}
			if (tunnit->GetArvo() == 24) {
				tunnit->SetArvo(0);
			}
		}
		
	}
}
