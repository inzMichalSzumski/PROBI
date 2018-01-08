#include "Pracownicy.h"

Pracownicy::Pracownicy(char i, char k)
{
	imie = i;
	kwalifikacje = k;
}

Pracownicy::~Pracownicy()
{
}

void Pracownicy::dodaj_imie(char i){
	imie = i;
}

void Pracownicy::dodaj_kwalifikacje(char k){
	kwalifikacje = k;
}

char Pracownicy::wyswietl_imie()
{
	return (imie);	
};

char Pracownicy::wyswietl_kwalifikacje()
{
	return (kwalifikacje);	
};
