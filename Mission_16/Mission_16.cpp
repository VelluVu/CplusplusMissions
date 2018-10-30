#include "Mission_16.h"

int main() {

	/*Kirjoita funktio, joka palauttaa osoittimen parametrina annetun kokonaislukutaulukon suurimpaan
	alkioon. Parametrina annetaan sekä osoitin taulukoon ensimmäiseen alkioon, että tieto siitä kuinka
	monta alkioita taulukossa on.*/
	elements = 7;

	for (int i = 0; i < elements; i++)
	{
		cout << table[i];
	}

	t = table;
	*t = *table;

	table[elements] = *Find_Largest(t, elements);

	cout << endl;

	for (int i = 0; i < elements; i++)
	{
		cout << table[i];
	}

	cout << endl;

	system("pause");
	return 0;
}
int* Find_Largest(int* t, int elements) {

	
	//Find Largest number and move it in to the biggest index of the table
	for (int i = 0; i < elements; i++)
	{
		
		if (t[i] > table[i]) {
			t[elements] = table[i];
			}
				
		t++;
	}
	

	return t;
}