#ifndef ADRESATMANAGER_H
#define ADRESATMANAGER_H

#include <iostream>
#include <vector>

#include "Adresat.h"
#include "PlikZAdresatami.h"

using namespace std;

class AdresatMenager{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    vector <Adresat> adresaci;
    PlikZAdresatami plikZAdresatami;
    Adresat podajDaneNowegoAdresata();
    string zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst);

public:
    AdresatMenager(): idZalogowanegoUzytkownika(0), idOstatniegoAdresata(0){}
    void dodajAdresata();
    void wyswietlWszystkichAdresatow();
    void ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika);
};

#endif // ADRESATMANAGER_H

