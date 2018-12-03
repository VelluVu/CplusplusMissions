#include "Mission_45.h"

bool operator>(const Hevonen& lhs, const Hevonen& rhs)
{
	if (lhs._kavionKoko > rhs._kavionKoko)
		return true;
	else
		return false;
}

int main() {

	/*float taulukko1[5] = {4,3,6,1,2};
	int taulukko2[5] = {5,4,3,2,1};
	int koko = 5;

	Sort(taulukko1, koko);
	Sort(taulukko2, koko);

	for (size_t i = 0; i < koko; i++)
	{
		cout << taulukko1[i];
	}
	cout << "\n";
	for (size_t i = 0; i < koko; i++)
	{
		cout << taulukko2[i];
	}
	cout << "\n";*/

	Hevonen heppa1(3);
	Hevonen heppa2(2);
	Hevonen heppa3(5);
	Hevonen heppa4(1);

	Hevonen heppaTaulu[4] = { heppa1,heppa2,heppa3,heppa4 };

	Sort<Hevonen>(heppaTaulu, 4);

	for (size_t i = 0; i < 4; i++)
	{
		heppaTaulu[i].PrintKavio();
	}
	cout << "\n";

	system("Pause");
	return 0;

}