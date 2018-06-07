#include "stdafx.h"
#include "Lekarz.h"
#include "Badanie_okresowe.h"
#include "Wyniki_badania_okresowego.h"

Lekarz::Lekarz()
{
	implementation = 0;
}


Lekarz::~Lekarz()
{
	if (implementation != 0) {

		delete(implementation);
	}
}

//////////////////////?????????????????????
void Lekarz::utworzHistorieBadan() {
	//dodajPacjenta();
	dodajTypBadania();
	dodajTerminBadania();
	//dodajGodzineBadania();

};
//////////////////////?????????????????????

void Lekarz::menu() {
	int wyjscie = 9;
	cout << endl << endl;
	cout << "Menu" << endl;
	while (wyjscie != 0) {
		cout << "Je\230li chcesz wybra\206 Modu\210 gabinetu dyrektora przychodni wci\230nij 1" << endl;
		cout << "Je\230li chcesz wybra\206 Modu\210 gabinetu lekarskiego wci\230nij 2" << endl;
		cout << "Je\230li chcesz wybra\206 Modu\210 gabinetu specjalistycznego wci\230nij 3" << endl;
		cout << "Je\230li chcesz wybra\206 Modu\210 gabinetu zabiegowego wci\230nij 4" << endl;
		cout << "Je\230li chcesz wybra\206 Modu\210 rejestracji wci\230nij 5" << endl;
		cout << "Aby zako\344czy\206 wybierz 0" << endl;

		cin >> wyjscie;
		switch (wyjscie) {
		case 0: return;
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4: gabinetzabiegowy();
			break;
		case 5:
			break;
		default:
			break;
		}
	}
};
void Lekarz::gabinetzabiegowy() {
	int wyjscie = 9;
	cout << endl << endl;
	cout << "Gabinet zabiegowy" << endl;
	while (wyjscie != 0) {
		cout << "Utw\242rz histori\251 bada\344 okresowych wci\230nij 1" << endl;
		cout << "Utw\242rz wynik badania okresowego wci\230nij 2" << endl;
		cout << "Aby zako\344czy\206 wybierz 0" << endl;

		cin >> wyjscie;
		switch (wyjscie) {
		case 0: return;
			break;
		case 1: setopcja(1);
			break;
		case 2: setopcja(2);
			break;
		default:
			break;
		}
	}
};
//////////////////////?????????????????????
void  Lekarz::setopcja(int i) {
	dodajPacjenta();
	string imie;
	string nazwisko;
	cout << "Podaj nazwisko pacjenta: ";
	cin >> nazwisko;
	cout << "Podaj imie pacjenta: ";
	cin >> imie;
	if (i == 1) {
		utworzHistorieBadan();
		implementation = dodajBadanie(imie,nazwisko);
		//utworzHistorieBadan();
	}
	else if (i == 2) {
		utworzHistorieBadan();
		dodajKomentarz();
		implementation = dodajWynikBadania(imie, nazwisko);
	}

};
//////////////////////?????????????????????





