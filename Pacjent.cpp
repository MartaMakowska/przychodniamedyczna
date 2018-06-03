#include "stdafx.h"
#include "Pacjent.h"
#include "Wyniki_badania_okresowego.h"
#include "Badanie_okresowe.h"
#include "poliomorfizmmenu.h"

Pacjent::Pacjent(string imiewejsciowe, string nazwiskowejsciowe)
{
		imie=imiewejsciowe;
		nazwisko=nazwiskowejsciowe;
		implementation = 0;
}


Pacjent::~Pacjent()
{
	if (implementation != 0) {

		delete(implementation);
	}
}
 void Pacjent::menu() {
	int wyjscie = 9;
	cout << endl << endl;
	cout << "Menu" << endl;
	while (wyjscie != 0) {
		cout << "Jesli chcesz wybrac Modu³ gabinetu dyrektora przychodni wciœnij 1" << endl;
		cout << "Jesli chcesz wybrac Modu³ gabinetu lekarskiego wciœnij 2" << endl;
		cout << "Jesli chcesz wybrac Modu³ gabinetu specjalistycznego wciœnij 3" << endl;
		cout << "Jesli chcesz wybrac Modu³ gabinetu zabiegowego wciœnij 4" << endl;
		cout << "Jesli chcesz wybracModu³ rejestracji wciœnij 5" << endl;
		cout << "Aby zakoñczyæ wybierz 0" << endl;

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

 void Pacjent::gabinetzabiegowy() {
	 int wyjscie = 9;
	 cout << endl << endl;
	 cout << "Gabinetzabiegowy" << endl;
	 while (wyjscie != 0) {
		 cout << "Wyœwietl historiê badañ okresowych wciœnij 1" << endl;
		 cout << "Wyœwietl wynik badania okresowego wciœnij 2" << endl;
		 cout << "Aby cofnij wybierz 0" << endl;

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


 ////////////////////////////////////////////////////////////////////////
 void Pacjent::setopcja(int i) { 
	 //uzupelnij obiekty  (implementation)

	 if (i == 1) {
		 implementation  = new Badanie_okresowe(imie, nazwisko);
		 wyswietlHistorieBadan();
	 }
	 else if (i== 2) {
		 implementation = new Wyniki_badania_okresowego(imie,nazwisko);
		
		 wyswietlWynikBadania();
	 }
 }
 void Pacjent::wyswietlWynikBadania() { //wyswietl wybraæ co ma zobaczyæ 
 
	 cout << imie <<" "<< nazwisko<< " " << "wynik"<<endl;
	 system("pause");
	 cout << endl;
 };

 void  Pacjent::wyswietlHistorieBadan() {
 
 
	 cout << imie << " " << nazwisko << " " << "historia" << endl;
	 system("pause");
	 cout << endl;
 
 };
