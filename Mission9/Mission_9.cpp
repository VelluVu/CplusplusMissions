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
	kertaa (ilkeä opettaja voi muuttaa tehtävänannon top-1000 -listaksi…).


	Muokkaa High Scores -ohjelmaa siten, että se hyödyntää funktioita. Ohjelmassa tulee olla kolme
	funktiota:
		// kysyy ja palauttaa pelaajan nimen
	std::string kysy_nimi();
		// kysyy ja palauttaa pelaajan pisteet
	int kysy_pisteet();
		// tulostaa pelaajan nimen ja pisteet
	void tulosta(std::string nimi, int pisteet);
	Organisoi ohjelma kolmeen lähdekooditiedostoon:
·	pääohjelma (teht_010.cpp)
·	funktioiden prototyypit (funktiot.h)
·	funktioiden toteutus (funktiot.cpp)
	*/

	question = "Anna käyttäjätunnus : ";
	question2 = "Anna Pistemäärä (int) : ";
	high = "HIGH";
	scores = "SCORES";
	scored[SIZE];
	players[SIZE];
	
	

	for (int i = 0; i < SIZE; i++)
	{
		players[i] = Ask_Name();
		scored[i] = Ask_Score();
	}

	PrintScore(players, scored);

	system("pause");
	return 0;
}

	string Ask_Name() {
		cout << question;
		cin >> name;
		return name;
	}

	int Ask_Score() {
		cout << question2;
		cin >> score;
		return score;
	}
	
	void PrintScore(string players[SIZE], int scored[SIZE]) {

		
		cout << high << "\t\t\t" << scores << endl;

		for (int i = 0; i < SIZE; i++)
		{

			cout << players[i] << "\t\t\t" << scored[i] << endl;

		}
	}
