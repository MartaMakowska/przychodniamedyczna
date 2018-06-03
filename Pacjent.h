#pragma once
#include "stdafx.h"
#include "Osoba.h"

using namespace std;

class Pacjent :public Osoba
{
public:
	Pacjent(string imiewejsciowe,string nazwiskowejsciowe);
	~Pacjent();
	void wyswietlWynikBadania();
	void wyswietlHistorieBadan();
	virtual void menu();
	void gabinetzabiegowy();
	void setopcja(int i);
private: 
	
		string	imie;
		string	nazwisko;
		int		numerPesel;
		string	login;
		string	has³o;

};

