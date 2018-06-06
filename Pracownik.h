#pragma once
#include "stdafx.h"
#include "Dokument.h"
#include "Osoba.h"
using namespace std;




class Pracownik abstract :public Osoba
{
public:
	Pracownik();
	~Pracownik();
	Dokument *dodajBadanie(string imie, string nazwisko);
	Dokument *dodajWynikBadania(string imie, string nazwisko);
	void dodajTypBadania();
	void dodajDateBadania();
	void dodajGodzineBadania();
	void dodajPacjenta();
	void dodajKomentarz();
};

