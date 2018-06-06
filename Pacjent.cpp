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

 void Pacjent::gabinetzabiegowy() {
	 int wyjscie = 9;
	 cout << endl << endl;
	 cout << "Gabinet zabiegowy" << endl;
	 while (wyjscie != 0) {
		 cout << "Wy\230wietl histori\251 bada\344 okresowych wci\230nij 1" << endl;
		 cout << "Wy\230wietl wynik badania okresowego wci\230nij 2" << endl;
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
	 int i = 3;
	 //cout << "Typ badania";
	 if (implementation->dodajTypBadania() == "okresowe") {
		 i +=7 ;
	 }
	 cout << "Typ badania: " << implementation->dodajTypBadania()<<endl;
	 cout << "Data badania: " << implementation->dodajDateBadania() << endl;
	 cout << "Godzina badania: " << implementation->dodajGodzineBadania() << endl;
	 cout<<"Komentarz lekarza do badania: "<< implementation->dodajKomentarz() << endl;
	 /*for (int j = 0; j < i; j++) {
		 cout << " ";
	 }*/
	 system("pause");
	 cout << endl;
 };

 void  Pacjent::wyswietlHistorieBadan() {
 
	 int i = 3;
	 if (implementation->dodajTypBadania() == "okresowe") {
		 i += 7;
	 }
	 cout << "Typ badania: " << implementation->dodajTypBadania() << endl;
	 cout << "Data badania: " << implementation->dodajDateBadania() << endl;
	 cout << "Godzina badania: " << implementation->dodajGodzineBadania() << endl;
	/* for (int j = 0; j < i; j++) {
	 cout << " ";
	 }*/


	/*cout<< "Data" << "       " << "Godzina" << endl;
	 cout << implementation->dodajTypBadania() << "      " << implementation->dodajDateBadania() << "      " << implementation->dodajGodzineBadania() << endl;*/
	 system("pause");
	 cout << endl;
 
 };
