#include "stdafx.h"
#include "Badanie_okresowe.h"


Badanie_okresowe::Badanie_okresowe(string imie, string nazwisko)
{

	imiePacjenta=imie;
	nazwiskoPacjenta=nazwisko;
	typBadania = "Spirometria";
	dataBadania = "12.01.2018";
	godzinaBadania = "13:00";
}


Badanie_okresowe::~Badanie_okresowe()
{
}
string Badanie_okresowe::dodajTypBadania() { //dodac do diagramu 	dodaj czy get??		
	return typBadania;
	
};
string Badanie_okresowe::dodajDateBadania() {
	return dataBadania;
	
};
string Badanie_okresowe::dodajGodzineBadania() {

//	cout << "Podaj godzine badania: ";
	//cin >> godzinaBadania;
	return godzinaBadania;
};
