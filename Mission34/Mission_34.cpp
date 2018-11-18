#include "Mission_34.h"

int main() {

	Ajoneuvo* ajoneuvo = 0;
	Ajoneuvo* ajoPeli = 0;
	Ajoneuvo* autoja1 = 0;
	Ajoneuvo* autoja2 = 0;
	autoja1 =  new Autot(4, 4);
	autoja2 = new Autot(2, 2);
	autoja1 = new HenkiloAuto(6);
	autoja2 = new KuormaAuto(1500);
	ajoPeli = new Laiva(10);
	ajoneuvo = new LentoKone(1000);



	return 0;
}