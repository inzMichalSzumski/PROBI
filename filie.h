#ifndef FILIE_H
#define FILIE_H
#include <iostream>
#include <string>
#include "Pracownicy.h"
#include "Uslugi.h"
using namespace std;

class filie
{
	private:
		
		char nazwa;
		Pracownicy *iloscPracownikow[100];
		Uslugi *iloscUslug[100];
	
	public:
		int licznikPracownikow, licznikUslug;
		filie(char = 'x');
		~filie();
		
				
		void wyswietl_pracownikow();
		void wyswietl_uslugi();
		void wyswietl_nazwe();
		void dodaj_pracownika(char, char);
		void usun_pracownika(int);
		void dodaj_usluge(char, int);
		void usun_usluge(int);
		void wpisz_nazwe();
};

#endif
