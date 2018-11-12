#include "Mission_32.h"

int main() {

	int sec = 0;
	int min = 0;
	int hour = 0;

	sec = 55;
	min = 59;
	hour = 23;

	Kello* klo = new Kello(hour, min, sec);

	while (1) {
		klo->kay();
		klo->nayta();
		Sleep(1000);
	}

	delete(klo);
	system("Pause");
	return 0;

	return 0;

}