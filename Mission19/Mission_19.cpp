#include "Mission_19.h"

int main() {

	
	int const n = 4;
	int table[n] = {0,0,0,0};

	ReadValues(table, n);

	for (int i = 0; i < n; i++)
	{
		cout << table[i];
	}
	cout << "\n";

	system("Pause");
	return 0;
}

void ReadValues(int* t, int const n) {

	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
	}

}