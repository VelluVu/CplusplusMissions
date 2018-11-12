#include "Mission_30.h"


int main() {

	MatkaKortti*  mk = new MatkaKortti();
	KortinLataaja* kl = new KortinLataaja();

	kl->Lataa(mk);

	Kortinlukija* lukija = new Kortinlukija();

	if (!lukija->TarkistaKelpoisuus()) 
	{
		lukija->OtaMaksu();
	}
	
	delete(mk);
	delete(kl);
	delete(lukija);

	system("Pause");
	return 0;

}