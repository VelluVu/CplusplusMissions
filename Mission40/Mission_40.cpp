#include "Mission_40.h"

int main() {
	string nimi = "Hilfred";
	Pelaaja pelaaja(nimi, 1, 70, 70, 0, 10, 0);
	Taisteluvaruste miekka("opmiekka", 20, 2);
	Taisteluvaruste haarniska("haarniska", 0, 5);
	MuuObjekti sormus("theonering", 100, 10000);
	MuuObjekti rohto("rohto", 30, 20);
	Vihollinen orc1("Örkki",2,2,30);
	Vihollinen orc2("Örkki", 1, 1, 30);
	Vihollinen vuorenPeikko("Vuorenpeikko", 10, 5, 100);
	Maastotyyppi tie('T', 1.0f, 1.0f);
	Maastotyyppi metsa('M', 0.6f, 0.6f);
	Maastotyyppi vuoristo('V', 0.3f, 0.3f);

	Maastoruutu maastoRuutu11(&tie, &pelaaja);
	Maastoruutu maastoRuutu12(&tie, &orc1, 1);
	Maastoruutu maastoRuutu13(&tie, &haarniska, 1);
	Maastoruutu maastoRuutu14(&tie, &rohto, 1);
	Maastoruutu maastoRuutu21(&vuoristo, &vuorenPeikko, 1, &sormus, 1);
	Maastoruutu maastoRuutu22(&vuoristo);
	Maastoruutu maastoRuutu23(&tie, &orc2, 1);
	Maastoruutu maastoRuutu24(&metsa);
	Maastoruutu maastoRuutu31(&vuoristo);
	Maastoruutu maastoRuutu32(&metsa);
	Maastoruutu maastoRuutu33(&tie);
	Maastoruutu maastoRuutu34(&metsa);

	Karttapohja mappi(&maastoRuutu11, &maastoRuutu12, &maastoRuutu13, &maastoRuutu14,
					&maastoRuutu21, &maastoRuutu22, &maastoRuutu23, &maastoRuutu24,
					&maastoRuutu31, &maastoRuutu32, &maastoRuutu33, &maastoRuutu34);

	pelaaja.SetKama(&miekka);
	

	Karttapohja karttaPohja();

	system("pause");
	return 0;

}