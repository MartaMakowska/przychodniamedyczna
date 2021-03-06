// stdafx.h: dołącz plik do standardowych systemowych plików dołączanych,
// lub specyficzne dla projektu pliki dołączane, które są często wykorzystywane, ale
// są rzadko zmieniane
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>

#include <iostream>
#include <string>
#include <exception>
#include <memory>

using namespace std;

namespace Moduł_gabinetu_zabiegowego {
	class Osoba;
	class Dokument;
	class Pacjent;
	class Pracownik;
	class Lekarz;
	class Wyniki_badania_okresowego;
	class Badanie_okresowe;
}
namespace Moduł_logowania {
	void zalogujsie(int typurzytkownika, string login, string haslo);
	void wylogujsie();

}
enum {
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
// TODO: W tym miejscu odwołaj się do dodatkowych nagłówków wymaganych przez program
