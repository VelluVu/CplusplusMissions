#include "Mission_26.h"


class Solmu
{
public:
	int data;
	Solmu* next;
};

void tulosta_lista(const Solmu* alku);
Solmu* lisaa_alkuu(Solmu* alku, int arvo);
#include "Mission_26.h"

int main() {

	Solmu* s4 = new Solmu;
	s4->data = 1; s4->next = 0;
	Solmu* s3 = new Solmu;
	s3->data = 2; s3->next = s4;
	Solmu* s2 = new Solmu;
	s2->data = 10; s2->next = s3;
	Solmu* s1 = new Solmu;
	s1->data = 3; s1->next = s2;
	Solmu* head = s1;

	int arvo = 4;
	head = lisaa_alkuu(head, arvo);
	tulosta_lista(head);

	delete(s4);
	delete(s3);
	delete(s2);
	delete(s1);
	
	delete(head);

	system("Pause");
	return 0;
}

Solmu* lisaa_alkuu(Solmu* alku, int arvo) {	Solmu* s0 = new Solmu;	s0->data = arvo;	s0->next = alku->next;	alku->next = s0;	return s0;	delete(s0);}

void tulosta_lista(const Solmu* alku) {	while (alku != nullptr) {

		cout << alku->data << endl;
		alku = alku->next;

	}}