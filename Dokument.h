#pragma once
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

