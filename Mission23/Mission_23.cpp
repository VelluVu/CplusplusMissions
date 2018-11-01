#include "Mission_23.h"

int main() {

	string q1 = "Enter Integer table size : ";
	int input;
	
	cout << q1 << endl;
	cin >> input;

	const int n = input;

	ReadValues(InitializeArray(n), n);

	system("Pause");
	return 0;
}

void ReadValues(int* t, int const n) {

	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
	}

	Flip(t, n);

}

int* InitializeArray(int n) {

	int* table = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; i++)
	{
		table[i] = i;
	}

	return table;

}

void Flip(int* t, int const n) {

	for (int i = 0; i < n / 2; ++i)
	{
		int temp = t[i];
		t[i] = t[n - i - 1];
		t[n - i - 1] = temp;
	}

	PrintValues(t, n);
}

void PrintValues(int* t, const int n) {

	for (int i = 0; i < n; i++)
	{
		cout << t[i];
	}

	cout << endl;

}