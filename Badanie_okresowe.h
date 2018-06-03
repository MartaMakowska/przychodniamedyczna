#pragma once
#include "stdafx.h"
#include "Dokument.h"
using namespace std;
class Badanie_okresowe : public Dokument
{
public:
	Badanie_okresowe(string imie, string nazwisko);
	~Badanie_okresowe();
	
private: 
		string typBadania;
		char dataBadania;
		char godzinaBadania;
		string imiePacjenta;
		string nazwiskoPacjenta;
};

