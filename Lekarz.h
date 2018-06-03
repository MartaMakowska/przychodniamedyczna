#include "stdafx.h"
#include "Dokument.h"
#include "Osoba.h"
#include "Pracownik.h"

class Lekarz : public Pracownik
{
public:
	Lekarz();
	~Lekarz();

	//Dokument dodajBadanie();
	//Dokument dodajWynikBadania();
	void utworzHistorieBadan();
	virtual void menu();
	void gabinetzabiegowy();
	void setopcja(int i);
private: 
		string imiê;
		string nazwisko;
		string specjalizacja;
};

