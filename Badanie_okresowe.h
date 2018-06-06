#pragma once
#include "stdafx.h"
#include "Dokument.h"
using namespace std;
class Badanie_okresowe : public Dokument
{
public:
	Badanie_okresowe(string imie, string nazwisko);
	~Badanie_okresowe();
	virtual string gettypBadania();
	virtual string getdataBadania();
	virtual string getgodzinaBadania();
private: 
		string typBadania;
		string dataBadania;
		string godzinaBadania;
		string imiePacjenta;
		string nazwiskoPacjenta;
};

