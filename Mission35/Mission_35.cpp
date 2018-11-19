#include "Mission_35.h"

int main() {

	LaskuToimitus* yhteen;
	LaskuToimitus* kerto;

	double _x = 30;
	double _y = 4;
	double vastaus1 = 0;
	double vastaus2 = 0;
	
	yhteen = new YhteenLasku();
	vastaus1 = yhteen->Laske(_x, _y);
	cout << vastaus1 << endl;
	
	kerto = new KertoLasku();
	vastaus2 = kerto->Laske(_x, _y);
	cout << vastaus2 << endl;

	delete yhteen;
	delete kerto;

	system("Pause");
	return 0;
}