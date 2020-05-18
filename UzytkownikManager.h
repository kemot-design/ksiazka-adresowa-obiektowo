#ifndef URZYTKOWNIKMANAGER_H
#define URZYTKOWNIKMANAGER_H

#include <iostream>
#include <vector>
#include "Uzytkownik.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class UzytkownikManager{
    int idZalogowanegoUzytkownika;
    vector <Uzytkownik> uzytkownicy;
    PlikZUzytkownikami plikZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    bool czyIstniejeLogin(string login);
public:
    UzytkownikManager(string plikTxtZUzytkownikami): plikZUzytkownikami(plikTxtZUzytkownikami){};
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void wczytajUzytkownikowZPliku();
    void logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmienHasloZalogowanegoUzytkownika();
};

#endif // URZYTKOWNIKMANAGER_H
