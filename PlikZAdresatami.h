#ifndef PLIKZADRESATAMI_H
#define PLIKZADRESATAMI_H

#include <iostream>

using namespace std;

class PlikZAdresatami{
    string nazwaPlikuZAdresatami;

public:
    void dopiszAdresataDoPliku();
    void wczytajAdresatowZalogowanegoUzytkownikaZPliku();
};

#endif // PLIKZADRESATAMI_H
