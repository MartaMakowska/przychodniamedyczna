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
		cout << "Jesli chcesz wybrac Modu� gabinetu dyrektora przychodni wci�nij 1" << endl;
		cout << "Jesli chcesz wybrac Modu� gabinetu lekarskiego wci�nij 2" << endl;
		cout << "Jesli chcesz wybrac Modu� gabinetu specjalistycznego wci�nij 3" << endl;
		cout << "Jesli chcesz wybrac Modu� gabinetu zabiegowego wci�nij 4" << endl;
		cout << "Jesli chcesz wybracModu� rejestracji wci�nij 5" << endl;
		cout << "Aby zako�czy� wybierz 0" << endl;

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
		 cout << "Wy�wietl histori� bada� okresowych wci�nij 1" << endl;
		 cout << "Wy�wietl wynik badania okresowego wci�nij 2" << endl;
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
 void Pacjent::wyswietlWynikBadania() { //wyswietl wybra� co ma zobaczy� 
 
	 cout << imie <<" "<< nazwisko<< " " << "wynik"<<endl;
	 system("pause");
	 cout << endl;
 };

 void  Pacjent::wyswietlHistorieBadan() {
 
 
	 cout << imie << " " << nazwisko << " " << "historia" << endl;
	 system("pause");
	 cout << endl;
 
 };
