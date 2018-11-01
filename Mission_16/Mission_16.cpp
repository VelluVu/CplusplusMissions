#include "Mission_16.h"

int main() {

	/*Kirjoita funktio, joka palauttaa osoittimen parametrina annetun kokonaislukutaulukon suurimpaan
	alkioon. Parametrina annetaan sekä osoitin taulukoon ensimmäiseen alkioon, että tieto siitä kuinka
	monta alkioita taulukossa on.*/
	elements = 7;

	cout << "largest number : " << *Find_Largest(t, elements) << endl;
	
	system("pause");
	return 0;
}
int* Find_Largest(int* table, int elements) {

	if (!elements)
		return 0;

	int* largest = &table[0];

	//Find Largest number

	for (int i = 1; i < elements; ++i)
	{
		
		if (table[i] > *largest) {
			largest = &table[i];
			}
				
	}
	

	return largest;
}