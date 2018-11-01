#include "Mission_17.h"

int main() {

	for (int i = 0; i < elements; i++)
	{
		cout << t[i];
	}

	cout << endl;

	Order(t, elements);

	for (int i = 0; i < elements; i++)
	{
		cout << t[i];
	}

	cout << endl;

	system("pause");
	return 0;
}

void Order(int* table, int elements) {

	/*Kirjoita funktio, joka järjestää parametrina annetun kokonaislukutaulukon suurimmasta pienimpään
	alkioon. Funktiot voivat hyödyntää tehtävien 16 ja 17 funktioita:
	*/

	for (int i = 0; i < elements; i++)
	{
		int* largest = Find_Largest(&table[i], elements -i);
		SwapValues(*largest, table[i]);
	}

	
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

void SwapValues(int& x, int& y) {

	int tmp = x;
	x = y;
	y = tmp;

}