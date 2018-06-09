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
//////////////////////?????????????????????
void Pracownik::dodajTypBadania() {
	string typBadania;
	cout << "Podaj typ badania: ";
	cin >> typBadania;
};
void Pracownik::dodajTerminBadania() {
	string dataBadania;
	string godzinaBadania;
	cout << "Podaj date badania: ";
	cin >> dataBadania;
	cout << "Podaj godzine badania: ";
	cin >> godzinaBadania;

};
//void Pracownik::dodajGodzineBadania() {
	/*string godzinaBadania;
	cout << "Podaj godzine badania: ";
	cin >> godzinaBadania;*/
//};
void Pracownik::dodajPacjenta() {
	cout << "Podaj dane pacjenta" << endl;
};
void Pracownik::dodajKomentarz() {//dodac do diagramu 
	string komentarz;
	cout << "Podaj komentarz do badania: ";
	cin >> komentarz;
}

Dokument  *Pracownik::dodajBadanie(string imie,string nazwisko) {
	cout << endl;
	cout << "Badanie zostalo dodane" << endl;
	system("pause");
	return new Badanie_okresowe(imie, nazwisko);
};
Dokument  *Pracownik::dodajWynikBadania(string imie, string nazwisko) {
	cout << endl;
	cout << "Wynik badania zostal dodany" << endl;
	system("pause");
	return new Wyniki_badania_okresowego(imie, nazwisko);
};
//////////////////////?????????????????????