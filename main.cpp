#include <iostream>
#include <windows.h>
#include "KsiazkaAdresowa.h"

using namespace std;

int main()
{
    KsiazkaAdresowa ksiazkaAdresowa ("Uzytkownicy.txt");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    system("pause");
    system("cls");
    ksiazkaAdresowa.logowanieUzytkownika();
    ksiazkaAdresowa.zmienHasloZalogowanegoUzytkownika();
    system("cls");
    ksiazkaAdresowa.wypiszWszystkichUzytkownikow();
    system("pause");
    system("cls");
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.dodajAdresata();
    ksiazkaAdresowa.wyswietlWszystkichAdresatowUzytkownika();

    return 0;
}
