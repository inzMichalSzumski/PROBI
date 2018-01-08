#ifndef USLUGI_H
#define USLUGI_H

class Uslugi
{
	private:
		char nUslugi;
		int cUslugi;
		
	public:
		Uslugi(char = 'a', int = 0);
		~Uslugi();
		char wyswietl_nazwe();
		int wyswietl_cene();
		void zmien_nazwe(char);
		void zmien_cene(int);
};

#endif
