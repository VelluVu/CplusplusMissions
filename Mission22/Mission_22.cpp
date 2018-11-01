#include "Mission_22.h"

int main() {

	const int n = 4;
	const int table[n] = { 2,4,6,8 };

	PrintValues(table,n);

	system("Pause");
	return 0;
}

void PrintValues(const int* t, const int n) {

	for (int i = 0; i < n; i++)
	{
		cout << t[i];
	}
	cout << endl;
}