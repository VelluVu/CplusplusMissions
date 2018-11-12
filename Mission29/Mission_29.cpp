#include "Mission_29.h"
#include "MatkaKortti.h"
#include "KortinLataaja.h"

int main() {

	MatkaKortti*  mk = new MatkaKortti();
	KortinLataaja* kl = new KortinLataaja();

	kl->Lataa(mk);

	delete(mk);
	delete(kl);
	system("Pause");
	return 0;
}