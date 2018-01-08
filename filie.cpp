
#include <iostream>
#include "filie.h"

using namespace std;

filie::filie(char n)
{
	nazwa = n;
	licznikPracownikow = 0;
	licznikUslug = 0;
}

filie::~filie()
{
}

void filie::wyswietl_nazwe(){
	cout << nazwa;
}

void filie::wpisz_nazwe(){
	cout << "Podaj nazwe: ";
	cin >> nazwa;
}


void filie::dodaj_pracownika(char i, char k){
	Pracownicy *wPracownicy = new Pracownicy(i, k);
	iloscPracownikow[licznikPracownikow] = wPracownicy;
	licznikPracownikow++;
};

void filie::wyswietl_pracownikow(){
	//Pracownicy *wskaznikP;	
	for(int i=0; i<licznikPracownikow;i++ ){
		//wskaznikP = &iloscPracownikow[i];
		cout << i+1 << ". ";
		cout << "Imie: " << iloscPracownikow[i] -> wyswietl_imie();
		cout << ", Kwalifikacje: " << iloscPracownikow[i] -> wyswietl_kwalifikacje();
		cout << endl;
	}
};

void filie::usun_pracownika(int d){
	delete iloscPracownikow[d-1];
	for(int i=0; i<licznikPracownikow - (d-1); i++){
		iloscPracownikow[d-1+i] = iloscPracownikow[d+i];
	}
	licznikPracownikow--;
}

void filie::dodaj_usluge(char n, int c){
	Uslugi *wUslugi = new Uslugi(n,c);
	iloscUslug[licznikUslug] = wUslugi;
	licznikUslug++;
}

void filie::wyswietl_uslugi(){
	//Uslugi *wskaznikU;
	for(int i=0; i<licznikUslug;i++ ){
		//wskaznikU = &iloscUslug[i];
		cout << i+1 << ". ";
		cout << "Nazwa: " << iloscUslug[i] -> wyswietl_nazwe();
		cout << ", Cena: " << iloscUslug[i] -> wyswietl_cene();
		cout << endl;
	}
}

void filie::usun_usluge(int d){
	delete iloscUslug[d-1];
	for(int i=0; i<licznikUslug - (d-1); i++){
		iloscUslug[d-1+i] = iloscUslug[d+i];
	}
	licznikUslug--;
}


