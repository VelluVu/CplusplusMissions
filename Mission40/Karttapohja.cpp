#include "Karttapohja.h"



Karttapohja::Karttapohja(Maastoruutu& maastoRuutu, int width, int height)
{
	
	_width = width;
	_height = height;

	for (int x = 0; x < _width; x++)
	{
		for (int y = 0; y < _height; y++)
		{
			_maastoRuutu = &maastoRuutu;
		}
	}

}


Karttapohja::~Karttapohja()
{
	delete[]_maastoRuutu;
}
