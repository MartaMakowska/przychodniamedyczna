#include "stdafx.h"
#include "Pracownik.h"
#include "Badanie_okresowe.h"
#include "Wyniki_badania_okresowego.h"
Modu�_gabinetu_zabiegowego::Pracownik::Pracownik()
{
}


Modu�_gabinetu_zabiegowego::Pracownik::~Pracownik()
{
}
//////////////////////?????????????????????
void Modu�_gabinetu_zabiegowego::Pracownik::dodajTypBadania() {
	string typBadania;
	cout << "Podaj typ badania: ";
	cin >> typBadania;
};
void Modu�_gabinetu_zabiegowego::Pracownik::dodajTerminBadania() {
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
void Modu�_gabinetu_zabiegowego::Pracownik::dodajPacjenta() {
	cout << "Podaj dane pacjenta" << endl;
};
void Modu�_gabinetu_zabiegowego::Pracownik::dodajKomentarz() {//dodac do diagramu 
	string komentarz;
	cout << "Podaj komentarz do badania: ";
	cin >> komentarz;
}

Modu�_gabinetu_zabiegowego::Dokument  *Modu�_gabinetu_zabiegowego::Pracownik::dodajBadanie(string imie,string nazwisko,long int pesel) {
	cout << endl;
	cout << "Badanie zostalo dodane" << endl;
	system("pause");
	return new Badanie_okresowe(imie, nazwisko);
};
Modu�_gabinetu_zabiegowego::Dokument  *Modu�_gabinetu_zabiegowego::Pracownik::dodajWynikBadania(string imie, string nazwisko, long int pesel) {
	cout << endl;
	cout << "Wynik badania zostal dodany" << endl;
	system("pause");
	return new Wyniki_badania_okresowego(imie, nazwisko);
};
//////////////////////?????????????????????