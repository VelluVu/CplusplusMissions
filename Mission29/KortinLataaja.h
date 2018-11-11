#pragma once

#include "Mission_29.h"
#include "MatkaKortti.h"

class KortinLataaja
{
public:
	KortinLataaja();
	~KortinLataaja();
	void Lataa(MatkaKortti* kortti);
};

