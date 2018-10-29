#include "Mission_15.h"

int main() {

	x = 5;
	y = 2;

	SwapValues(x, y);
	cout << part2 << x << endl;
	cout << part2_2 << y << endl;
	system("pause");
	return 0;

}

void SwapValues(int& x, int& y) {
	
	cout << part1 << x << part1_1 << y << dot << endl;
	int tmp = x;
	x = y;
	y = tmp;

}