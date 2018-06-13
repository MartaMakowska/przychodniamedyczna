/*
 * Dokument.h
 *
 *  Created on: 13 cze 2018
 *      Author: ja
 */

#ifndef DOKUMENT_H_
#define DOKUMENT_H_
#include <sstream>
#include <string>
#include <iostream>
#include <mysql/mysql.h>
extern MYSQL mysql;
using namespace std;
namespace Modul_gabinetu_zabiegowego {
	class Osoba;
	class Dokument;
	class Pacjent;
	class Pracownik;
	class Lekarz;
	class Wyniki_badania_okresowego;
	class Badanie_okresowe;
}

namespace Modul_gabinetu_zabiegowego {
	class Dokument
	{
	public:
		Dokument();
		~Dokument();
		virtual string dodajTypBadania();
		virtual string dodajDateBadania();
		virtual string dodajGodzineBadania();
		virtual string dodajKomentarz();

	};
}
#endif /* DOKUMENT_H_ */
