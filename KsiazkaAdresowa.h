#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"

using namespace std;

class KsiazkaAdresowa{
    UzytkownikManager menagerUzytkownika;

public:
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
