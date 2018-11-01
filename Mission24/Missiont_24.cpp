#include "Mission_24.h"

static int n;
static int* t;

int main() {

	string q1 = "Enter Integer table size : ";
	

	cout << q1 << endl;
	cin >> n;
	
	t = (int* )malloc(sizeof(int)*n);

	ReadValues();
	Flip();
	PrintValues();

	system("Pause");
	return 0;

}

void ReadValues() {

	for (int i = 0; i < n; i++)
	{
		cin >> t[i];
	}
	
}


void Flip() {

	for (int i = 0; i < n / 2; ++i)
	{
		int temp = t[i];
		t[i] = t[n - i - 1];
		t[n - i - 1] = temp;
	}

}

void PrintValues() {

	for (int i = 0; i < n; i++)
	{
		cout << t[i];
	}

	cout << endl;

}