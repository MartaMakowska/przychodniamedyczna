#include "stdafx.h"
#include "Dokument.h"
#include "Osoba.h"
#include "Pracownik.h"
namespace Modu³_gabinetu_zabiegowego {
	class Lekarz : public Pracownik
	{
	public:
		Lekarz(string login,string haslo);
		~Lekarz();

		void utworzHistorieBadan();
		virtual void gabinetzabiegowy();
		void setopcja(int funkcjonalosc);
		void czysc();
	private:
		string imiê;
		string nazwisko;
		string specjalizacja;
	};
}
