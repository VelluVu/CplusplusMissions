#pragma once
#include <iostream>

template <typename T>
void Sort(T *taulukko, int koko) {

	T t;

	for (int x = 0; x < koko - 1; x++)
	{
		for (int y = 0; y < koko - x - 1; y++)
		{
			if (taulukko[y] > taulukko[y + 1])
			{
				/* Swapping */

				t = taulukko[y];
				taulukko[y] = taulukko[y + 1];
				taulukko[y + 1] = t;
			}
		}
	}
}

class Hevonen
{
private:
	int _kavionKoko;

public:
	Hevonen();
	~Hevonen();
	Hevonen(int kavionKoko) : _kavionKoko(kavionKoko) {}
	friend bool operator>(const Hevonen& lhs, const Hevonen& rhs);

	void PrintKavio() {
		std::cout << _kavionKoko;
	}	
};




