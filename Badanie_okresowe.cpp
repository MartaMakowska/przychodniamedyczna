#include "stdafx.h"
#include "Badanie_okresowe.h"


Modu³_gabinetu_zabiegowego::Badanie_okresowe::Badanie_okresowe(string imie, string nazwisko)
{

	imiePacjenta=imie;
	nazwiskoPacjenta=nazwisko;
	typBadania = "Spirometria";
	dataBadania = "12.01.2018";
	godzinaBadania = "13:00";
}


Modu³_gabinetu_zabiegowego::Badanie_okresowe::~Badanie_okresowe()
{
}
string Modu³_gabinetu_zabiegowego::Badanie_okresowe::dodajTypBadania() {
	return typBadania;
	
};
string Modu³_gabinetu_zabiegowego::Badanie_okresowe::dodajDateBadania() {
	return dataBadania;
	
};
string Modu³_gabinetu_zabiegowego::Badanie_okresowe::dodajGodzineBadania() {

	return godzinaBadania;
};
