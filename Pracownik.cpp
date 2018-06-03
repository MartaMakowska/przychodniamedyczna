#include "stdafx.h"
#include "Pracownik.h"
#include "Badanie_okresowe.h"
#include "Wyniki_badania_okresowego.h"
Pracownik::Pracownik()
{
}


Pracownik::~Pracownik()
{
}

void Pracownik::dodajTypBadania() {};
void Pracownik::dodajTerminBadania() {};
void Pracownik::wyszukajPacjenta() {};
void Pracownik::dodajPacjenta() {};

Dokument  *Pracownik::dodajBadanie(string imie,string nazwisko) {
	cout << "Dodaje Badanie" << endl;
	system("pause");
	return new Badanie_okresowe(imie, nazwisko);
};
Dokument  *Pracownik::dodajWynikBadania(string imie, string nazwisko) {
	cout << "Dodaje wyniki" << endl;
	system("pause");
	return new Wyniki_badania_okresowego(imie, nazwisko);
};
