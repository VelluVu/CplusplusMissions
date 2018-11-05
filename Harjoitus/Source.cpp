#include "HarjoitusHeader.h"

int main() {

	int z = 1000;
	cout << "Main alkaa:\n";
	Foo();
	Bar();
	cout << "Main käynnissä:\n";
	Bar();
	Foo();
	cout << "Main Loppuu\n";
	Bar();
	Foo();

	system("Pause");
	return 0;

}

void Foo() {

	int x = 10;
	cout << "foo\n";

}

void Bar() {

	int y = 20;
	cout << "bar\n";

}