#include "Mission_4_5_6.h"

int main() {

	/*Laadi ohjelma, joka pelaa käyttäjän kanssa Kiinalaista Numeropeliä seuraavasti:
	Pelataan Kiinalaista Numeropeliä!
	Anna luku: 12
	Voitin, minun on 13!
	Anna luku: 999
	Voitin, minun on 1000!
	Anna luku:
	(jne., peli jatkuu loputtomiin)	*/

	string start = "Pelataan Kiinalaista Numeropeliä!\n";
	string question1 = "Anna Kokonaisluku: ";
	string answer = "Voitin, minun on ";
	string draw = "Tasapeli?!?!?!?\n";
	int luku1 = 0;
	int koneenLuku = 0;

	
	for (int i = 0; i < 10; i++)
	{
		cout << start;
		cout << question1;
		cin >> luku1;
		if (luku1 == 0) {
			break;
		}
		else if (luku1 == INT_MAX) {
			cout << draw;
			break;
		}
		koneenLuku = luku1 + 1;
		luku1 = 0;
		cout << answer + " " << koneenLuku << "!" << endl;	
	}


	system("pause");
	return 0;
}