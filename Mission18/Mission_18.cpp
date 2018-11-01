#include "Mission_18.h"

int main() {

	int n = 10;

	int* t = InitializeArray(n);
	for (int i = 0; i < n; i++)
	{
		
		cout << t[i];
	}
	
	cout << "\n";

	free(t);

	system("Pause");
	return 0;
}

int* InitializeArray(int n) {

	int* table = (int*)malloc(n * sizeof(int));

	for  (int i = 0;  i < n;  i++)
	{
		table[i] = i;
	}
	
	
	return table;

	
}