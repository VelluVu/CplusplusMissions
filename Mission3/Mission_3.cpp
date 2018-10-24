#include "Mission_3.h"

int main() {

	string question = "What's your name?\n";
	string question2 = "Give Score as integer\n";
	string question3 = "Give maxscore as integer\n";
	string answer = "Game Over, ";
	string name;

	int number = 0;
	int maxPoints = 0;
	double percent = 0;

	cout << question;
	cin >> name;
	cout << question2;
	cin >> number;
	cout << question3;
	cin >> maxPoints;
	
	percent = (double)number / maxPoints * 100;
	cout << fixed << setprecision(2) << percent;
	cout << answer << name << " " << number << " out of " << maxPoints << " (" << percent << "%)";

	system("pause");
	return 0;
}