#pragma once
#include "stdafx.h"
#include "Dokument.h"
class Osoba abstract
{
public:
	Osoba();
	~Osoba();
	virtual void menu() = 0;
protected:
	Dokument *implementation;
};

