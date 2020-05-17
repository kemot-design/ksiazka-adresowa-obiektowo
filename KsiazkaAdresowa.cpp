#include "KsiazkaAdresowa.h"
#include <windows.h>

using namespace std;

KsiazkaAdresowa::KsiazkaAdresowa(){
    managerUzytkownika.wczytajUzytkownikowZPliku();
}

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    managerUzytkownika.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    managerUzytkownika.wypiszWszystkichUzytkownikow();
}
