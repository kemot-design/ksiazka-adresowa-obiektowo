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

Adresat AdresatMenager::podajDaneNowegoAdresata(){
    Adresat adresat;

    adresat.ustawId(idOstatniegoAdresata+1);
    adresat.ustawIdUzytkownika(idZalogowanegoUzytkownika);

    string noweDane;
    cout << "Podaj imie: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    noweDane = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweDane);
    adresat.ustawImie(noweDane);

    cout << "Podaj nazwisko: ";
    noweDane = MetodyPomocnicze::wczytajLinie();
    noweDane = MetodyPomocnicze::zamienPierwszaLitereNaDuzaAPozostaleNaMale(noweDane);
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

void AdresatMenager::ustawIdZalogowanegoUzytkownika(int noweIdZalogowanegoUzytkownika){
    idZalogowanegoUzytkownika = noweIdZalogowanegoUzytkownika;
}

void AdresatMenager::wczytajAdresatowZalogowanegoUzytkownikaZPliku(){
    idOstatniegoAdresata = plikZAdresatami.wczytajAdresatowZalogowanegoUzytkownikaZPliku(adresaci, idZalogowanegoUzytkownika);
}

void AdresatMenager::wyswietlWszystkichAdresatowUzytkownika()
{
    system("cls");
    if (!adresaci.empty())
    {
        cout << "             >>> ADRESACI <<<" << endl;
        cout << "-----------------------------------------------" << endl;
        for (vector <Adresat> :: iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
        {
            wyswietlDaneAdresata(*itr);
        }
        cout << endl;
    }
    else
    {
        cout << endl << "Ksiazka adresowa jest pusta." << endl << endl;
    }
    system("pause");
}

void AdresatMenager::wyswietlDaneAdresata(Adresat adresat)
{
    cout << endl << "Id:                 " << adresat.pobierzId() << endl;
    cout << "Imie:               " << adresat.pobierzImie() << endl;
    cout << "Nazwisko:           " << adresat.pobierzNazwisko() << endl;
    cout << "Numer telefonu:     " << adresat.pobierzNumerTelefonu() << endl;
    cout << "Email:              " << adresat.pobierzEmail() << endl;
    cout << "Adres:              " << adresat.pobierzAdres() << endl;
}
