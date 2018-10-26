#include "Mission_15.h"

int main() {

	x = 5;
	y = 2;
	_x = &x;
	_y = &y;

	SwapValues(x, y);

	system("pause");
	return 0;

}

void SwapValues(int x, int y) {
	
	cout << part1 << x << part1_1 << y << dot << endl;
	
	x = *_y;
	y = *_x;

	cout << part2 << x << endl;
	cout << part2_2 << y << endl;
}