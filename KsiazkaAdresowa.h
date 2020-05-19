#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "PlikZUzytkownikami.h"
#include "AdresatMenager.h"


using namespace std;

class KsiazkaAdresowa{
    UzytkownikManager managerUzytkownika;
    AdresatMenager menagerAdresata;

public:
    KsiazkaAdresowa(string plikTxtZUzytkownikami): managerUzytkownika(plikTxtZUzytkownikami){
        managerUzytkownika.wczytajUzytkownikowZPliku();
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmienHasloZalogowanegoUzytkownika();
    void dodajAdresata();
};

#endif
