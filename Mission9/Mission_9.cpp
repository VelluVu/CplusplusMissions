#include "Mission_9.h"

int main() {

	/*Laadi High Scores -ohjelma.
	Ohjelma kysyy 10 kertaa käyttäjätunnuksen (std::string) ja pistemäärän (int). Käyttäjätunnukset
	talletetaan yksitellen omaan taulukkoonsa, ja pistemäärät omaansa:
	std::string nimi[10];
	int pisteet[10];
	Lopuksi ohjelma tulostaa listan esim. seuraavasti (käytä printf-funktiota saadaksesi vakiolevyiset
	sarakkeet):
	HIGH			SCORES
	Pena			9327
	Jaska			13245
	Lewandowski		5
	abba1			8567
	pacman			4876
	Timo S.			1
	Roger Federer	873
	Simona Halep	983798
	qwerty			111
	Miikka			9999999
	Tee tulosten kysyminen ja tulostus omissa silmukoissaan. Älä siis kirjoita samanlaisia ohjelmarivejä 10
	kertaa (ilkeä opettaja voi muuttaa tehtävänannon top-1000 -listaksi…).*/
	
	string question = "Anna käyttäjätunnus : ";
	string question2 = "Anna Pistemäärä (int) : ";
	string high = "HIGH";
	string scores = "SCORES";
	int score[10];
	string player[10];

	for (int i = 0; i < 10; i++)
	{
		cout << question;
		cin >> player[i];
		cout << question2;
		cin >> score[i];
	}

	cout << high << "\t\t\t" << scores << endl;

	for (int i = 0; i < 10; i++)
	{

		cout << player[i] << "\t\t\t" << score[i] << endl;

	}

	system("pause");
	return 0;
}