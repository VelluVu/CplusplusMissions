#pragma once
class Maastoruutu;

class Karttapohja
{
private:
	Maastoruutu* _m11;
	Maastoruutu* _m12;
	Maastoruutu* _m13;
	Maastoruutu* _m14;
	Maastoruutu* _m21;
	Maastoruutu* _m22;
	Maastoruutu* _m23;
	Maastoruutu* _m24;
	Maastoruutu* _m31;
	Maastoruutu* _m32;
	Maastoruutu* _m33;
	Maastoruutu* _m34;

	
	char map[3][4] = {'T','T','T','T',
					 'V','V','T','M',
					 'V','M','T','M'};

public:
	Karttapohja(Maastoruutu* m11, Maastoruutu* m12, Maastoruutu* m13, Maastoruutu* m14,
				Maastoruutu* m21, Maastoruutu* m22, Maastoruutu* m23, Maastoruutu* m24,
				Maastoruutu* m31, Maastoruutu* m32, Maastoruutu* m33, Maastoruutu* m34);
	~Karttapohja();
};

