#include <windows.h>
#include <algorithm>

#include "AdresatMenager.h"

using namespace std;

void AdresatMenager::dodajAdresata(){
    Adresat adresat;

    system("cls");
    cout << " >>> DODAWANIE NOWEGO ADRESATA <<<" << endl << endl;
    adresat = podajDaneNowegoAdresata();

    adresaci.push_back(adresat);
    plikZAdresatami.dopiszAdresataDoPliku(adresat);

    idOstatniegoAdresata++;
}

void AdresatMenager::wyswietlWszystkichAdresatow(){

}

Adresat AdresatMenager::podajDaneNowegoAdresata(){
    Adresat adresat;

    adresat.ustawId(++idOstatniegoAdresata);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    string noweDane;
    cout << "Podaj imie: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    noweDane = zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweDane);
    adresat.ustawImie(noweDane);

    cout << "Podaj nazwisko: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    noweDane = zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweDane);
    adresat.ustawNazwisko(noweDane);

    cout << "Podaj numer telefonu: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    adresat.ustawNumerTelefonu(noweDane);

    cout << "Podaj email: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    adresat.ustawEmail(noweDane);

    cout << "Podaj adres: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    adresat.ustawAdres(noweDane);

    return adresat;
}

string AdresatMenager::zamienPierwszaLitereNaDuzaAPozostaleNaMale(string tekst){
    if (!tekst.empty())
    {
        transform(tekst.begin(), tekst.end(), tekst.begin(), ::tolower);
        tekst[0] = toupper(tekst[0]);
    }
    return tekst;
}

void AdresatMenager::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika){
    idZalogowanegoUzytkownika = noweIdZalogowanegoUzytkownika;
}

void AdresatMenager::wczytajAdresatowZalogowanegoUzytkownikaZPliku(){
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}

