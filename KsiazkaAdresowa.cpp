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
    if(managerUzytkownika.czyUzutkownikJestZalogowany()){
        menagerAdresata = new AdresatMenager(NAZWA_PLIKU_Z_ADRESATAMI, managerUzytkownika.pobierzIdZalogowanegoUzytkownika());
    }
}

void KsiazkaAdresowa::wylogujUzytkownika(){
    managerUzytkownika.wylogujUzytkownika();
    delete menagerAdresata;
    menagerAdresata = NULL;
}

void KsiazkaAdresowa::zmienHasloZalogowanegoUzytkownika(){
    managerUzytkownika.zmienHasloZalogowanegoUzytkownika();
}

void KsiazkaAdresowa::dodajAdresata(){
    if(managerUzytkownika.czyUzutkownikJestZalogowany()){
        menagerAdresata->dodajAdresata();
    }
    else{
        cout << "Aby dodac adresata, nalezy najpierw sie zalogowac" << endl;
        system("pause");
    }
}

void KsiazkaAdresowa::wyswietlWszystkichAdresatowUzytkownika(){
    menagerAdresata->wyswietlWszystkichAdresatowUzytkownika();
}

bool KsiazkaAdresowa::czyUzytkownikJestZalogowany(){
    return managerUzytkownika.czyUzutkownikJestZalogowany();
}

char KsiazkaAdresowa::wybierzOpcjeZMenuGlownego()
{
    char wybor;

    system("cls");
    cout << "    >>> MENU  GLOWNE <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Rejestracja" << endl;
    cout << "2. Logowanie" << endl;
    cout << "9. Koniec programu" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

char KsiazkaAdresowa::wybierzOpcjeZMenuUzytkownika()
{
    char wybor;

    system("cls");
    cout << " >>> MENU UZYTKOWNIKA <<<" << endl;
    cout << "---------------------------" << endl;
    cout << "1. Dodaj adresata" << endl;
    cout << "2. Wyszukaj po imieniu" << endl;
    cout << "3. Wyszukaj po nazwisku" << endl;
    cout << "4. Wyswietl adresatow" << endl;
    cout << "5. Usun adresata" << endl;
    cout << "6. Edytuj adresata" << endl;
    cout << "---------------------------" << endl;
    cout << "7. Zmien haslo" << endl;
    cout << "8. Wyloguj sie" << endl;
    cout << "---------------------------" << endl;
    cout << "Twoj wybor: ";
    wybor = MetodyPomocnicze::wczytajZnak();

    return wybor;
}

void KsiazkaAdresowa::usunAdresata(){
    menagerAdresata -> usunAdresata();
}

void KsiazkaAdresowa::edytujAdresata(){
    menagerAdresata -> edytujAdresata();
}

void KsiazkaAdresowa::wyszukajAdresatowPoImieniu(){
    menagerAdresata -> wyszukajAdresatowPoImieniu();
}

void KsiazkaAdresowa::wyszukajAdresatowPoNazwisku(){
    menagerAdresata -> wyszukajAdresatowPoNazwisku();
}

