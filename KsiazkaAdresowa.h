#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>
#include "Uzytkownik.h"

using namespace std;

class KsiazkaAdresowa{
    int idZalogowanegoUzytkownika;
    int idOstatniegoAdresata;
    int idUsunietegoAdresata;
    vector <Uzytkownik> uzytkownicy;
    string nazwaPlikuZUzytkownikami;

    Uzytkownik podajDaneNowegoUzytkownika();
    int pobierzIdNowegoUzytkownika();
    string wczytajLinie();
    bool czyIstniejeLogin(string login);
    void dopiszUzytkownikaDoPliku(Uzytkownik uzytkownik);
    string zamienDaneUzytkownikaNaLinieZDanymiOddzielonaPionowymiKreskami(Uzytkownik uzytkownik);
    string konwerjsaIntNaString(int liczba);
    bool czyPlikJestPusty(fstream &plikTekstowy);
public:
    KsiazkaAdresowa();
    void rejestracjaUzytkownika();
    void wypiszWszytkichUzytkownikow();

};
