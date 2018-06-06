#pragma once
#include "stdafx.h"
#include "Dokument.h"
using namespace std;

class Wyniki_badania_okresowego :public Dokument
{
public:
	Wyniki_badania_okresowego();
	Wyniki_badania_okresowego(string imie, string nazwisko);
	~Wyniki_badania_okresowego();
	virtual string dodajTypBadania();
	virtual string dodajDateBadania();
	virtual string dodajGodzineBadania();
	virtual string dodajKomentarz();
private: 
		string typBadania;
		string dataBadania;
		string godzinaBadania;
		string imiePacjenta;
		string nazwiskoPacjenta;
		string komentarz;
};

