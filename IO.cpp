

#include "stdafx.h"
#include "Pacjent.h"
#include "Lekarz.h"
#include "poliomorfizmmenu.h"
struct dane {
	string login;
	string haslo;
};
enum uzytkownicy {
	pacjent,lekarz,rejestrator,dyrektor
};

int main()
{
	//mechanizm logowania
	int liczbaprob = 0;
	string login;
	string haslo;
	int typuzytkownika = 0;
	//petla logowanie liczba prob 3
	struct dane osoba1 = { "jnowacki" ,"123" };
	struct dane osoba2 = { "akowalska" ,"123" };


	cout << "Logowanie" << endl;
	while (3>liczbaprob) {
		cout << "Wpisz login :";
		cin >> login;
		cout << "Wpisz has\210o :";
		cin >> haslo;

		//test sprawdzenie logowania 
		if((login==osoba1.login)&&(haslo==osoba1.haslo)){
			typuzytkownika = pacjent;
		}
		else if ((login ==osoba2.login) && (haslo == osoba2.haslo)) {
			typuzytkownika = lekarz;

		}
		else {
			typuzytkownika = rejestrator;
		}
		
		//menu każdy ma wlasne 
		//polimorfizm ukryty  
		
		if (typuzytkownika == pacjent) {
			//dane osobowe pacjenta
			Pacjent *nowypacjent=new Pacjent("Adam","Nowak");

			polimorfizm::menuglowne(nowypacjent);
			delete (nowypacjent);
			return 0;
		}
		else if (typuzytkownika == lekarz) {//Lekarz
			
			Lekarz *nowylekarz= new Lekarz();
			//uzupełnienie danych 
			polimorfizm::menuglowne(nowylekarz);
			delete (nowylekarz);
			return 0;
			
		}
		else if (typuzytkownika == rejestrator) {//rejestrator
		}
		else if (typuzytkownika == dyrektor) {//dyrektor
		}
		else {
			cout << "B\210\251dne dane" << endl;
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