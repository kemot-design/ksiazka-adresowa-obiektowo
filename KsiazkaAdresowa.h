#ifndef KSIAZKAADRESOWA_H
#define KSIAZKAADRESOWA_H

#include <iostream>
#include "UzytkownikManager.h"

using namespace std;

class KsiazkaAdresowa{
    UzytkownikManager managerUzytkownika;

public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszystkichUzytkownikow();
};

#endif
