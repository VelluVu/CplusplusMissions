#include "Mission_25.h"


class Solmu
{
public:
	int data;
	Solmu* next;
};

void tulosta_lista(const Solmu* alku);

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

	tulosta_lista(head);

	system("Pause");
	return 0;
}


void tulosta_lista(const Solmu* alku) {	for (int i = 0; i != 0; i++)
	{
		cout << alku->data;
		
	}
		cout << endl;}