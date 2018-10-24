#include "Mission_7.h"

int main() {

	/*Laadi Arvauspeli, jossa tietokone ensin arpoo kokonaisluvun v‰lilt‰ 1..100. T‰m‰n j‰lkeen k‰ytt‰j‰
	yritt‰‰ arvata lukua, ja jokaisen arvauksen j‰lkeen tietokone kertoo oliko arvaus liian pieni vai suuri.
	Oikean arvauksen j‰lkeen tietokone tulostaa k‰ytettyjen arvausten lukum‰‰r‰n:
	Arvaa luku (1-100) : 50
	Liian pieni!
	Arvaa luku (1-100) : 90
	Liian suuri!
	Arvaa luku (1-100) : 85
	Liian suuri!
	Arvaa luku (1-100) : 63
	Oikein! Teit 4 arvausta.
	Vihje:
	// Includet (tiedoston alussa)
	#include <time.h>
	#include <stdlib.h>
	// Satunnaislukugeneraattorin alustus
	// (vain kerran, p‰‰ohjelman alussa)
	srand(time(0));
	// Satunnaisluvun generointi v‰lilt‰ 0..99 (tarvittaessa)
	int r = rand() % 100;	Muuta Arvauspeli‰ niin, ett‰ k‰ytt‰j‰ s‰‰ m‰‰ritell‰, milt‰ v‰lilt‰ arvottava luku on.	*/
	srand(time(0));
	string question1 = "Arvaa luku (";
	string endQ1 = ") : ";
	string lower = "Liian pieni!\n";
	string higher = "Liian suuri!\n";
	string finish = "Oikein! Teit ";
	string guesses = " arvausta.";
	string questMin = "Anna alku luku: ";
	string questMax = "Anna loppu luku: ";

	int randomMin = 0;
	int randomMax = 0;
	int times = 0;
	int guess = 0;
	int r = 0;

	cout << questMin;
	cin >> randomMin;
	cout << questMax;
	cin >> randomMax;

	for (int i = 0; i < 10; i++)
	{
		r = rand() % (randomMin - randomMax + 1) + randomMin;
		cout << question1 << randomMin << "-" << randomMax << endQ1;
		cin >> guess;
		times++;

		if (guess == r) {
			cout << finish << times << guesses << endl;
			break;
		} 
		else if (guess < r) {
			cout << lower;
		} 
		else if (guess > r) {
			cout << higher;
		}
	}
	
	system("pause");
	return 0;
}