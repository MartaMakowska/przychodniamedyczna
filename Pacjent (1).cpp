#include "stdafx.h"
#include "Pacjent.h"
#include "Wyniki_badania_okresowego.h"
#include "Badanie_okresowe.h"
#include "poliomorfizmmenu.h"

Modu³_gabinetu_zabiegowego::Pacjent::Pacjent(string login, string haslo)
{
		imie="Adam";
		nazwisko="Nowak";
		implementation = 0;
		numerPesel=1253134;
}


Modu³_gabinetu_zabiegowego::Pacjent::~Pacjent()
{
	if (implementation != 0) {

		delete(implementation);
	}
}
 

 void Modu³_gabinetu_zabiegowego::Pacjent::gabinetzabiegowy() {
	 int stan = zostan;
	 cout << endl << endl;
	 cout << "Gabinet zabiegowy" << endl;
	 while (stan != Brak) {
		 cout << "Wy\230wietl histori\251 bada\344 okresowych wci\230nij 1" << endl;
		 cout << "Wy\230wietl wynik badania okresowego wci\230nij 2" << endl;
		 cout << "Aby cofnij wybierz 0" << endl;

		 cin >> stan;
		 switch (stan) {
		 case 0: return;
			 break;
		 case 1: setopcja(badanie);
			 break;
		 case 2: setopcja(wynik);
			 break;
		 default:
			 break;
		 }
	 }
 };

 void Modu³_gabinetu_zabiegowego::Pacjent::setopcja(int funkcjonalosc) {

	 if (funkcjonalosc == badanie) {
		 implementation  = new Badanie_okresowe(imie, nazwisko);
		 wyswietlHistorieBadan();
	 }
	 else if (funkcjonalosc == wynik) {
		 implementation = new Wyniki_badania_okresowego(imie,nazwisko);
		
		 wyswietlWynikBadania();
	 }
 }
 void Modu³_gabinetu_zabiegowego::Pacjent::wyswietlWynikBadania() { //wyswietl wybraæ co ma zobaczyæ 
	
	 cout << "Typ badania: " << implementation->dodajTypBadania()<<endl;
	 cout << "Data badania: " << implementation->dodajDateBadania() << endl;
	 cout << "Godzina badania: " << implementation->dodajGodzineBadania() << endl;
	 cout<<"Komentarz lekarza do badania: "<< implementation->dodajKomentarz() << endl;
	 system("pause");
	 cout << endl;
 };

 void  Modu³_gabinetu_zabiegowego::Pacjent::wyswietlHistorieBadan() {
 
	
	 cout << "Typ badania: " << implementation->dodajTypBadania() << endl;
	 cout << "Data badania: " << implementation->dodajDateBadania() << endl;
	 cout << "Godzina badania: " << implementation->dodajGodzineBadania() << endl;
	 system("pause");
	 cout << endl;
 
 };
