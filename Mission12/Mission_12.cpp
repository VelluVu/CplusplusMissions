#include "Mission_12.h"

int main() {

	x = 5;
	// y omaksuu x osoitteen
	y = &x;
	
	// Tulostetaan muistilohkojen osoitteet
	cout << "x osoite: " << &x << endl;
	cout << "y osoite: " << &y << endl;

	// Tulostetaan muuttujien arvot
	cout << "x arvo: " << x << endl;
	cout << "y arvo: " << y << endl;

	// muutetaan x:n muuttuja arvoa osoittimen avulla
	*y = 101;

	//Tulostetaan uudestaan => "huomaa x:n arvo muuttui, koskematta x muuttujaan!"
	cout << "x osoite: " << &x << endl;
	cout << "y osoite: " << &y << endl;
	cout << "x arvo: " << x << endl;
	cout << "y arvo: " << y << endl;

	system("pause");
	return 0;
}