#pragma once

class Maastoruutu;

class Karttapohja
{
private:
	Maastoruutu* _maastoRuutu;
	int _width;
	int _height;

public:
	Karttapohja(Maastoruutu*, int, int);
	~Karttapohja();
};

