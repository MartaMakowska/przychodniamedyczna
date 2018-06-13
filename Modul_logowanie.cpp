/*
 * Moduł-logowania.cpp
 *
 *  Created on: 13 cze 2018
 *      Author: ja
 */
#include <stdio.h>
#include <iostream>
#include <sstream>
using namespace std;
#include "Pacjent.h"
#include "Lekarz.h"
#include <mysql/mysql.h>
static char *user ="root";
static char *pass="";
static char *dname="przychodniamedyczna";
unsigned int port=3307;
unsigned int flag=0;
MYSQL mysql;
namespace Modul_logowania{
	class logowanie{
		public:
			static void wylogujsie();
			static void zalogujsie(int typuzytkownika, string login, string haslo);
			static void  menuglowne(Modul_gabinetu_zabiegowego::Osoba *wskaznik) {

					wskaznik->gabinetzabiegowy();
				}

	};
}


int main(){


	mysql_init(&mysql);
	if(mysql_real_connect(&mysql, "127.0.0.1", user, pass, dname, port, NULL, 0))
		cout<<"Połączenie z bazą danych MySQL nawiązano poprawnie!"<<endl;
	else{
		cout<<"Błąd połączenia z bazą MySQL: "<< mysql_errno(&mysql)<<" "<<mysql_error(&mysql)<<endl;
		mysql_close(&mysql);
		return -1;
	}
	MYSQL_RES *idZapytania;
	MYSQL_ROW  wiersz;
	mysql_select_db(&mysql, dname);

	int liczbaprob = Brak;
		string login;
		string haslo;
		int typuzytkownika = Brak;
		//petla logowanie liczba prob 3


		cout << "Logowanie" << endl;
		while (3>liczbaprob) {
			cout << "Wpisz login :";
			cin >> login;
			cout << "Wpisz hasło :";
			cin >> haslo;

			ostringstream strstr;
			strstr<<"SELECT Typuzytkownia FROM `logowanie` WHERE `Login` LIKE '"<<login <<"' AND `Haslo` LIKE '"<<haslo <<"' ";
			string str=strstr.str();
				mysql_query(&mysql,str.c_str());
				idZapytania = mysql_store_result(&mysql);
				wiersz = mysql_fetch_row(idZapytania);
				typuzytkownika=strtol(wiersz[0],0,10);

			if (typuzytkownika != Brak) {

				Modul_logowania::logowanie::zalogujsie(typuzytkownika,login,haslo);

			}
			else {
				cout << "B\210\251dne dane" << endl;
			}
			liczbaprob++;
		}

	//mysql_close(&mysql);
	return 0;
}


void Modul_logowania::logowanie::zalogujsie(int typuzytkownika, string login, string haslo) {
	int stan = zostan;
	cout << endl << endl;
	cout << "Menu" << endl;
	while (stan != Brak) {
		cout << "Jeśli chcesz wybrać Moduł gabinetu dyrektora przychodni wciśnij 1" << endl;
		if (typuzytkownika == lekarz || typuzytkownika == pacjent) {
			cout << "Jeśli chcesz wybrać Moduł gabinetu lekarskiego wciśnij 2" << endl;
			cout << "Jeśli chcesz wybrać Moduł gabinetu specjalistycznego wciśnij 3" << endl;
			cout << "Jeśli chcesz wybrać Moduł gabinetu zabiegowego wciśnij 4" << endl;
		}
		if (typuzytkownika == pacjent || typuzytkownika == rejestrator) {
			cout << "Jeśli chcesz wybrać Moduł rejestracji wciśnij 5" << endl;
		}
		cout << "Aby zakończyć wybierz 0" << endl;
		cin >> stan;

		if (stan == gabinetzabiegowy && (typuzytkownika == lekarz || typuzytkownika == pacjent)) {
			if (typuzytkownika == lekarz) {
				Modul_gabinetu_zabiegowego::Lekarz *uzytkownik = new Modul_gabinetu_zabiegowego::Lekarz(login,haslo);
				Modul_logowania::logowanie::menuglowne(uzytkownik);
				delete (uzytkownik);
			}
			else {
				Modul_gabinetu_zabiegowego::Pacjent *uzytkownik = new Modul_gabinetu_zabiegowego::Pacjent(login, haslo);
				Modul_logowania::logowanie::menuglowne(uzytkownik);
				delete (uzytkownik);
			}
		}
	}
	wylogujsie();
};
void Modul_logowania::logowanie::wylogujsie() {
	cout << "wylogowanie" << endl;
	//mysql_close(&mysql);
	exit(0);
}
