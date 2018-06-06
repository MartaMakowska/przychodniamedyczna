#include "stdafx.h"
#include "Wyniki_badania_okresowego.h"

Wyniki_badania_okresowego::Wyniki_badania_okresowego()
{

}


Wyniki_badania_okresowego::~Wyniki_badania_okresowego()
{
}

Wyniki_badania_okresowego::Wyniki_badania_okresowego(string imie, string nazwisko) {
	this->imiePacjenta = imie;
	this->nazwiskoPacjenta = nazwisko;
	typBadania = "Spirometria";
	dataBadania = "12.01.2018";
	godzinaBadania = "13:00";
	komentarz = "Badanie przebieg\210o poprawnie.Wynik w normie.";
}
string Wyniki_badania_okresowego::dodajTypBadania() {
	return typBadania;

};
string Wyniki_badania_okresowego::dodajDateBadania() {
	return dataBadania;

};
string Wyniki_badania_okresowego::dodajGodzineBadania() {
	return godzinaBadania;
};
string Wyniki_badania_okresowego::dodajKomentarz() {
	return komentarz;
};
