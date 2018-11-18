#pragma once

#include "Mission_32.h"

class Viisari
{
private:

	int _arvo;
	int			_max;
	Viisari*	_seuraaja;

public:

	Viisari(int arvo, int max, Viisari* seuraaja) :
		_arvo(arvo), _max(max), _seuraaja(seuraaja) {}
	void SetArvo(int a);
	void IncrementArvo(int a);
	int GetArvo();
	void etene() {
		_arvo = ++_arvo % _max;
		if (!_arvo && _seuraaja)
			_seuraaja->etene();
	}
	void nayta() const {
		printf("%02d", _arvo);
	}
};

