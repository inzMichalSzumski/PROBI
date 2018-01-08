#ifndef PRACOWNICY_H
#define PRACOWNICY_H
#include <iostream>
#include <string>

using namespace std;

class Pracownicy
{
	private:
		char imie,  kwalifikacje;
		
	public:
		Pracownicy(char = 'i', char = 'k');
		~Pracownicy();
		
		char wyswietl_imie();
		char wyswietl_kwalifikacje();
		void dodaj_imie(char);
		void dodaj_kwalifikacje(char);
};

#endif
