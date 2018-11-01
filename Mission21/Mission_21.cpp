#include "Mission_21.h"

int main() {

	int const n = 4;
	int table[n] = { 1,3,5,7 };

	Flip(table, n);

	for (int i = 0; i < n; i++)
	{
		cout << table[i];
	}
	cout << endl;

	system("Pause");
	return 0;
}

void Flip(int* t, int const n) {

	for (int i = 0; i < n/2; ++i)
	{
		int temp = t[i];
		t[i] = t[n-i-1];
		t[n - i-1] = temp;					
	}

}