#pragma once
#include "stdafx.h"
#include "Osoba.h"

using namespace std;
namespace Modu³_gabinetu_zabiegowego {
	class Pacjent :public Osoba
	{
	public:
		Pacjent(string login, string haslo);
		~Pacjent();
		void wyswietlWynikBadania();
		void wyswietlHistorieBadan();
		virtual void gabinetzabiegowy();
		void setopcja(int funkcjonalosc);

	private:
		string	imie;
		string	nazwisko;
		int		numerPesel;
	};
}
