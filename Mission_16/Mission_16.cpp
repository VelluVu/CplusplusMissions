#include "Mission_16.h"

int main() {

	/*Kirjoita funktio, joka palauttaa osoittimen parametrina annetun kokonaislukutaulukon suurimpaan
	alkioon. Parametrina annetaan sekä osoitin taulukoon ensimmäiseen alkioon, että tieto siitä kuinka
	monta alkioita taulukossa on.*/
	
	for (int i = 0; i < elements; i++)
	{
		cout << table[i];
	}

	Find_Largest(table, elements);

	cout << endl;

	for (int i = 0; i < elements; i++)
	{
		cout << table[i];
	}

	cout << endl;

	system("pause");
	return 0;
}
int* Find_Largest(int* table, int elements) {

	//Find Largest number and move it in to the biggest index of the table
	
	return table;
}