#pragma once
#include <iostream>

using namespace std;

class LaskuToimitus {
	
public: 
	
	virtual double Laske(double, double) = 0;
	virtual ~LaskuToimitus() {};
};

class YhteenLasku : public LaskuToimitus {

public:

	double Laske(double x, double y) {
		return x + y;
	}
	~YhteenLasku(){}

};

class KertoLasku : public LaskuToimitus {

public:

	double Laske(double x, double y) {
		return x * y;
	}
	~KertoLasku(){}

};