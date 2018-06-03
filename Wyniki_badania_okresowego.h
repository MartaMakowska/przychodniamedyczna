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
private: 
		string typBadania;
		char dataBadania;
		char godzinaBadania;
		string imiePacjenta;
		string nazwiskoPacjenta;
		string komentarz;
};

