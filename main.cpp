#include <iostream>
#include <conio.h>
#include <string>
#include "filie.h"

using namespace std;

int main()
{    
    char litera1;
    char litera2;
	int liczba1;
	int rozmiar_tablicy;
    char c;
    
    cout << "Podaj ilosc filii: ";
    cin >> rozmiar_tablicy;
    
	filie *tablica_filii[rozmiar_tablicy];
	
    for(int i=0; i<rozmiar_tablicy; i++){
	    filie *wfilie = new filie;
	    tablica_filii[i] = wfilie;
	    tablica_filii[i] -> wpisz_nazwe();
	}
	    
    int filia1 = -1;
    int filia2 = -1;
    int filia3 = -1;
    do{
    	
	    system( "cls" );
	    
	    cout << "Interaktywny program menu tekstowego PROBI"<< endl;
	    cout << "" << endl;
	    
	    cout << "Menu glowne - wybor filii:"<< endl;
	    
	    for(int i=0; i<rozmiar_tablicy; i++){
	    	cout << i+1 <<". Filia "; tablica_filii[i] -> wyswietl_nazwe(); cout << endl;
		}
		cout << rozmiar_tablicy + 1 << ". kasowanie filii" << endl;
	    cout << "0. wyjscie z programu"<< endl;
	    cout << "" << endl;
	    cout << "Wybierz: ";	   

	    cin >> filia1;
	    if (filia1 == 0 ){
	    	break;
		} else if (filia1 == rozmiar_tablicy + 1){
			
			int kasuj;
			cout << "Wyberz filie do skasowania: ";
			cout << endl;
			cin >> kasuj;
			for(int i=0; i<tablica_filii[kasuj-1] -> licznikUslug;i++){			
				tablica_filii[kasuj-1] -> usun_usluge(i);
			}
			for(int i=0; i<tablica_filii[kasuj-1] -> licznikPracownikow;i++){	
				tablica_filii[kasuj-1] -> usun_pracownika(i);
			}
			delete tablica_filii[kasuj-1];
			for(int i=0; i<rozmiar_tablicy - (kasuj-1); i++){
				tablica_filii[kasuj-1+i] = tablica_filii[kasuj+i];
			}
			rozmiar_tablicy--;
			filia1 = -1;
		} else {		
		    	do {
			    	system( "cls" );
			    	
			        cout << "Filia "; tablica_filii[filia1-1] -> wyswietl_nazwe(); cout <<" - menu:"<< endl;
			        cout << "1. Uslugi"<< endl;
			        cout << "2. Pracownicy"<< endl;
			        cout << "0. cofnij"<< endl;
			        cout << "" << endl;
			    	cout << "Wybierz: ";
			        
			        cin >> filia2;
			        
			        switch(filia2)
			    	{
				    	case 1:
				    		do {
								system( "cls" );
					    		cout << "Filia "; tablica_filii[filia1-1] -> wyswietl_nazwe(); cout << endl;
					    		cout << "Uslugi - menu:"<< endl;
					    		cout << "1. Przegladaj"<< endl;
					    		cout << "2. Dodaj"<< endl;
					    		cout << "3. Usun" << endl;
					    		cout << "0. cofnij"<< endl;
					    		cout << "" << endl;
					    		cout << "Wybierz: ";
					    		
					    		cin >> filia3;
					    		
					    		switch(filia3)
								{
									case 1:
										system( "cls" );
										cout << "Lista uslug:" << endl;
										tablica_filii[filia1-1] -> wyswietl_uslugi();

										    cout << endl << "Nacisnij ESC aby powrocic."<<endl;
										    while(true)
										    {
										        c=getch();
										        if (c==27)
										          break;
										    }
										break;
									case 2:
										system( "cls" );
										cout << "Dodawanie uslugi." << endl;
										cout << endl << "Podaj nazwe uslugi:";
										cin >> litera1;
										cout << endl << "Podaj cene uslugi:";
										cin >> liczba1;
										tablica_filii[filia1-1] -> dodaj_usluge(litera1, liczba1);
										cout << endl << "Dodano usluge o nazwie: " << litera1 << ", oraz cenie: " << liczba1 << endl;										    
										    cout << endl << "Nacisnij ESC aby powrocic."<<endl;
										    while(true)
										    {
										        c=getch();
										        if (c==27)
										          break;
										    }
										break;
									case 3:
										system( "cls" );
										cout << "Usuwanie uslugi." << endl;
										cout << "Lista uslug:" << endl;
										tablica_filii[filia1-1] -> wyswietl_uslugi();
										cout << endl << "Podaj numer uslugi do usuniecia: ";
										cin >> liczba1;
										tablica_filii[filia1-1] -> usun_usluge(liczba1);
										break;
									case 0:
										continue;
										break;
									default:
										cout << "Brak takiej opcji1" << endl;
				    					break;
								}
					    		
					    	} while (filia3 != 0);
				        break;
				        case 2:
				        	do {
					        	system( "cls" );
					        	cout << "Filia "; tablica_filii[filia1-1] -> wyswietl_nazwe(); cout << endl;
					        	cout << "Pracownicy - menu:"<< endl;
					    		cout << "1. Przegladaj"<< endl;
					    		cout << "2. Dodaj"<< endl;
					    		cout << "3. Usun" << endl;
					    		cout << "0. cofnij"<< endl;
					        	cout << "" << endl;
					    		cout << "Wybierz: ";
					    		
					        	cin >> filia3;
					        	
					        	switch(filia3)
								{
									case 1:
										system( "cls" );
										cout << "Lista pracownikow:" << endl;
										tablica_filii[filia1-1] -> wyswietl_pracownikow();

										    cout << endl << "Nacisnij ESC aby powrocic."<<endl;
										    while(true)
										    {
										        c=getch();
										        if (c==27)
										          break;
										    }
										break;
									case 2:
										system( "cls" );
										cout << "Dodawanie pracownika." << endl;

										cout << endl << "Podaj imie pracownika:";
										cin >> litera1;
										cout << endl << "Podaj kwalifikacje pracownika:";
										cin >> litera2;
										tablica_filii[filia1-1] -> dodaj_pracownika(litera1, litera2);
										cout << endl << "Dodano pracownika o imieniu: " << litera1 << ", oraz kwalifikacjach: " << litera2 << endl;										    
										    cout << endl << "Nacisnij ESC aby powrocic."<<endl;
										    while(true)
										    {
										        c=getch();
										        if (c==27)
										          break;
										    }
										break;
									case 3:
										system( "cls" );
										cout << "Usuwanie pracownika." << endl;
										cout << "Lista pracownikow:" << endl;
										tablica_filii[filia1-1] -> wyswietl_pracownikow();
										cout << endl << "Podaj numer pracownika do usuniecia: ";
										cin >> liczba1;
										tablica_filii[filia1-1] -> usun_pracownika(liczba1);
										break;
									case 0:
										continue;
										break;
									default:
										cout << "Brak takiej opcji2" << endl;
				    					break;
								}
					        	
					        } while (filia3 != 0);
				        break;
				        case 0:
				        	system( "cls" );				        	
				        	
				        default:
				    		cout << "Brak takiej opcji3" << endl;				    		
			    	}
			    	
		    	} while (filia2 != 0);
			}
	    
	}while(filia1 != 0);
	cout << filia1 << endl;
	cout << filia2 << endl;
	cout << filia3 << endl;
	cout << "Koniec programu" << endl;
    
    getch();
    return( 0 );
}
//-------------------------------------
