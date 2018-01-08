#include "Uslugi.h"

Uslugi::Uslugi(char n, int c)
{
	nUslugi = n;
	cUslugi = c;
}

Uslugi::~Uslugi()
{
}

int Uslugi::wyswietl_cene(){
	return cUslugi;
}

char Uslugi::wyswietl_nazwe(){
	return nUslugi;
}

void Uslugi::zmien_cene(int c){
	cUslugi = c;
}

void Uslugi::zmien_nazwe(char n){
	nUslugi = n;
}
