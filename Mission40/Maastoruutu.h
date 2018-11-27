#pragma once
#include <vector>

// "forward declaration"
class Pelaaja;
class Objekti;
class Vihollinen;
class Maastotyyppi;

class Maastoruutu
{
private:
	int x;
	int y;
	Maastotyyppi* _maastoTyyppi = nullptr;
	Pelaaja* _pelaaja = nullptr;
	std::vector<Vihollinen*> _viholliset;
	std::vector<Objekti*> _objektit;

public:
	
	
	Maastoruutu();
	Maastoruutu(Maastotyyppi* maastotyyppi);
	Maastoruutu(Maastotyyppi* maastotyyppi, Pelaaja* pelaaja);
	Maastoruutu(Maastotyyppi* maastotyyppi, Objekti* objektit, int objektitlkm);
	Maastoruutu(Maastotyyppi* maastotyyppi, Vihollinen* viholliset, int vihollisetlkm);
	Maastoruutu(Maastotyyppi* maastotyyppi, Vihollinen* viholliset, int vihollisetlkm, Objekti* objektit, int objektitlkm);
	Maastoruutu(Maastotyyppi* maastotyyppi, Vihollinen* viholliset, int vihollisetlkm, Objekti* objektit, int objektitlkm, Pelaaja* pelaaja);
	~Maastoruutu();
};

