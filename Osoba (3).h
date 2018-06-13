/*
 * Osoba.h
 *
 *  Created on: 13 cze 2018
 *      Author: ja
 */
#include <mysql/mysql.h>

#ifndef OSOBA_H_
#define OSOBA_H_
#include "Dokument.h"
#include <sstream>

extern  MYSQL mysql;

enum operacje{
		Brak = 0,
		maxprob = 3,
		pacjent = 1,
		lekarz = 2,
		rejestrator = 3,
		dyrektor = 4,
		zostan = 9,
		badanie = 1,
		wynik = 2,
		gabinetzabiegowy=4,
};
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
	class Osoba
	{
	public:
		Osoba();
		~Osoba();
		virtual void gabinetzabiegowy() = 0;
	protected:
		Dokument * implementation;
	};
}

#endif /* OSOBA_H_ */
