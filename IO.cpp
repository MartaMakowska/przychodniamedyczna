

#include "stdafx.h"
#include "Pacjent.h"
#include "Lekarz.h"
#include "poliomorfizmmenu.h"



int main()
{
	//mechanizm logowania
	int liczbaprob = 0;
	string login;
	string haslo;
	int typuzytkownika = 0;
	//pentla logowanie liczba prob 3


	string tab,tab1,tab2,tab3;
	tab = "jan";
	tab1 = "123";
	tab2 = "Mark";
	tab3 = "123";

	cout << "Logowanie" << endl;
	while (3>liczbaprob) {
		cout << "Wpisz login :";
		cin >> login;
		cout << "Wpisz has\210o :";
		cin >> haslo;

		//test sprawdzenie logowania 
		if((login==tab)&&(haslo==tab1)){
			typuzytkownika = 1;
		}
		else if ((login == tab2) && (haslo == tab3)) {
			typuzytkownika = 2;

		}
		else {
			typuzytkownika = 0;
		}
		
		//menu każdy ma wlasne 
		//polimorfizm ukryty  
		
		if (typuzytkownika == 1) {
			//dane osobowe pacjenta
			Pacjent *nowypacjent=new Pacjent("Adam","Nowak");

			polimorfizm::menuglowne(nowypacjent);
			delete (nowypacjent);
			return 0;
		}
		else if (typuzytkownika == 2) {//Lekarz
			
			Lekarz *nowylekarz= new Lekarz();
			//uzupełnienie danych 
			polimorfizm::menuglowne(nowylekarz);
			delete (nowylekarz);
			return 0;
			
		}
		else if (typuzytkownika == 3) {//rejestrator
		}
		else if (typuzytkownika == 4) {//dyrektor
		}
		else {
			cout << "B\210ędne dane" << endl;
		}
		liczbaprob++;
	}
	//wyswietlanie 1
	//dodawanie 1
	//wyswietlanie 2
	//dodawanie 2
	system("pause");
	return 0;
}