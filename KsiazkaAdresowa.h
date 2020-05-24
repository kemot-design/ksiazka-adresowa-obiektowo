#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"
#include "PlikZUzytkownikami.h"
#include "AdresatMenager.h"


using namespace std;

class KsiazkaAdresowa{
    UzytkownikManager managerUzytkownika;
    AdresatMenager* menagerAdresata;
    const string NAZWA_PLIKU_Z_ADRESATAMI;

public:
    KsiazkaAdresowa(string nazwaPlikuZUzytkownikami, string nazwaPlikuZAdresatami)
    : managerUzytkownika(nazwaPlikuZUzytkownikami), NAZWA_PLIKU_Z_ADRESATAMI(nazwaPlikuZAdresatami){
        menagerAdresata = NULL;
    }
    ~KsiazkaAdresowa(){
        delete menagerAdresata;
        menagerAdresata = NULL;
    }
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
    void logowanieUzytkownika();
    void wylogujUzytkownika();
    void zmienHasloZalogowanegoUzytkownika();
    void dodajAdresata();
    void wyswietlWszystkichAdresatowUzytkownika();
    bool czyUzytkownikJestZalogowany();
    char wybierzOpcjeZMenuGlownego();
    char wybierzOpcjeZMenuUzytkownika();
    void usunAdresata();

};

#endif
