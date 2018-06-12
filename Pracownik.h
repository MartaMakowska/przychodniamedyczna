#pragma once
#include "stdafx.h"
#include "Osoba.h"



namespace Modu³_gabinetu_zabiegowego {
	class Pracownik abstract :public Osoba
	{
	public:
		Pracownik();
		~Pracownik();
		Dokument *dodajBadanie(string imie, string nazwisko,long int pesel);
		Dokument *dodajWynikBadania(string imie, string nazwisko,long int pesel);
		void dodajTypBadania();
		void dodajTerminBadania();
		void dodajPacjenta();
		void dodajKomentarz();
	};
}
