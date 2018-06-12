#pragma once
#include "stdafx.h"
#include "Dokument.h"

namespace Modu³_gabinetu_zabiegowego {
	class Badanie_okresowe : public Dokument
	{
	public:
		Badanie_okresowe(string imie, string nazwisko);
		~Badanie_okresowe();
		virtual string dodajTypBadania();
		virtual string dodajDateBadania();
		virtual string dodajGodzineBadania();
	private:
		string typBadania;
		string dataBadania;
		string godzinaBadania;
		string imiePacjenta;
		string nazwiskoPacjenta;
	};
}
