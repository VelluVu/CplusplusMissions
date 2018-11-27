#include "Karttapohja.h"
#include <iostream>


Karttapohja::Karttapohja(Maastoruutu* m11, Maastoruutu* m12, Maastoruutu* m13, Maastoruutu* m14, 
						 Maastoruutu* m21, Maastoruutu* m22, Maastoruutu* m23, Maastoruutu* m24, 
						 Maastoruutu* m31, Maastoruutu* m32, Maastoruutu* m33, Maastoruutu* m34)
{
	_m11 = m11;
	_m12 = m12;
	_m13 = m13;
	_m14 = m14;
	_m21 = m21;
	_m22 = m22;
	_m23 = m23;
	_m24 = m24;
	_m31 = m31;
	_m32 = m32;
	_m33 = m33;
	_m34 = m34;
	
	std::cout << map;

}

Karttapohja::~Karttapohja()
{
	
}
