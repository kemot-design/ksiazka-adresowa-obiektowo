#include "KsiazkaAdresowa.h"
#include <windows.h>

using namespace std;

void KsiazkaAdresowa::rejestracjaUzytkownika(){
    managerUzytkownika.rejestracjaUzytkownika();
}

void KsiazkaAdresowa::wypiszWszystkichUzytkownikow(){
    managerUzytkownika.wypiszWszystkichUzytkownikow();
}

void KsiazkaAdresowa::logowanieUzytkownika(){
    managerUzytkownika.logowanieUzytkownika();
}

void KsiazkaAdresowa::wylogujUzytkownika(){
    managerUzytkownika.wylogujUzytkownika();
}

void KsiazkaAdresowa::zmienHasloZalogowanegoUzytkownika(){
    managerUzytkownika.zmienHasloZalogowanegoUzytkownika();
}
