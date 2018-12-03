#include "Mission_47.h"

int main() {

	Stack<int> s1, s2, s3, s4;
	s4._next = nullptr; s4._data = 3;
	s3._next = &s4;		s3._data = 10;
	s2._next = &s3;		s2._data = 5;
	s1._next = &s2;		s1._data = 6;
	Stack<int>* head = &s1;
	int koko = Size(head);

	std::cout << koko << std::endl;


	system("Pause");
	return 0;
}