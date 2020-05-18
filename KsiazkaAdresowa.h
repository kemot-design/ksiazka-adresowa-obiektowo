#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "PlikZUzytkownikami.h"

using namespace std;

class KsiazkaAdresowa{
    UzytkownikManager managerUzytkownika;

public:
    KsiazkaAdresowa(string plikTxtZUzytkownikami): managerUzytkownika(plikTxtZUzytkownikami){
        managerUzytkownika.wczytajUzytkownikowZPliku();
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmienHasloZalogowanegoUzytkownika();
};

#endif
