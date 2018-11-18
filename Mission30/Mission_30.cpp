#include "Mission_30.h"


int main() {

	MatkaKortti*  mk;
	KortinLataaja* kl;
	Kortinlukija* lukija;

	kl->Lataa(mk);
	lukija->LueKortti(mk);
	lukija->OtaMaksu();
	
	
	delete(mk);
	delete(kl);
	delete(lukija);

	system("Pause");
	return 0;

}