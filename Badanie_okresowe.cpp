#include "stdafx.h"
#include "Badanie_okresowe.h"


Modu�_gabinetu_zabiegowego::Badanie_okresowe::Badanie_okresowe(string imie, string nazwisko)
{

	imiePacjenta=imie;
	nazwiskoPacjenta=nazwisko;
	typBadania = "Spirometria";
	dataBadania = "12.01.2018";
	godzinaBadania = "13:00";
}


Modu�_gabinetu_zabiegowego::Badanie_okresowe::~Badanie_okresowe()
{
}
string Modu�_gabinetu_zabiegowego::Badanie_okresowe::dodajTypBadania() {
	return typBadania;
	
};
string Modu�_gabinetu_zabiegowego::Badanie_okresowe::dodajDateBadania() {
	return dataBadania;
	
};
string Modu�_gabinetu_zabiegowego::Badanie_okresowe::dodajGodzineBadania() {

	return godzinaBadania;
};
