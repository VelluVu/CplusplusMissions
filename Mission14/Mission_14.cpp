#include "Mission_14.h"

int main() {

	/*x:n arvo:
	1. int x = 15; 15
	2. int *y; 15
	3. y = &x; 15
	4. *y = *y + 3; 18
	5. int z = 2; 18
	6. int *w; 18
	7. w = y; 18
	8. y = 0; 18
	9. y = &z; 18
	10. *w = *w + *y; 20
	11. int t[] = { 9, 10 }; 20
	12. y = t; 20
	13. *w += *y; 29
	14. y++; 29
	15. *w += *y; 39	*/

	int x = 15;
	cout << "x = 15 : " << x << endl;
	int *y;
	cout << "*y : " << x << endl;
	y = &x;
	cout << "y = &x : " << x << endl;
	*y = *y + 3;
	cout << "*y = *y + 3 : " << x << endl;
	int z = 2;
	cout << "z = 2 : " << x << endl;
	int *w;
	cout << "*w : " << x << endl;
	w = y;
	cout << "w = y : " << x << endl;
	y = 0;
	cout << "y = 0 : " << x << endl;
	y = &z;
	cout << "y = &z : " << x << endl;
	*w = *w + *y;
	cout << "*w = *w + *y : " << x << endl;
	int t[] = { 9, 10 };
	cout << "t[] = { 9 , 10 } : " << x << endl;
	y = t;
	cout << "y = t : " << x << endl;
	*w += *y;
	cout << "w += *y : " << x << endl;
	y++;
	cout << "y++ : " << x << endl;
	*w += *y;
	cout << "*w += *y : " << x << endl;

	system("pause");
	return 0;
}