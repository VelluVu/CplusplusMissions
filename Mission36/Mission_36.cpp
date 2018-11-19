#include "Mission_36.h"

int main() {
	char fileN[] = "tiedosto";
	char tekstiN[] = "Diipadaapaa jepauuu";
	MyClass joku(fileN, tekstiN, 921);
	joku.WriteState(joku.GetFileName());

	joku.ReadState(joku.GetFileName());

	system("Pause");
	return 0;

}