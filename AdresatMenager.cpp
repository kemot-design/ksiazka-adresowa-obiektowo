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
    if(plikZAdresatami.dopiszAdresataDoPliku(adresat)){
        cout << "Nowy adresat zostal dodany" << endl;
    }
    else {
        cout << "Blad. Nie udalo sie dodac nowego adresata do pliku." << endl;
    }
    system("pause");
}

Adresat AdresatMenager::podajDaneNowegoAdresata(){
    Adresat adresat;

    adresat.ustawId(plikZAdresatami.pobierzIdOstatniegoAdresata() + 1);
    adresat.ustawIdUzytkownika(ID_ZALOGOWANEGO_UZYTKOWNIKA);

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

void AdresatMenager::usunAdresata()
{
    int idUsuwanegoAdresata = 0;

    system("cls");
    cout << ">>> USUWANIE WYBRANEGO ADRESATA <<<" << endl << endl;
    idUsuwanegoAdresata = podajIdWybranegoAdresata();

    char znak;
    bool czyIstniejeAdresat = false;

    for (vector <Adresat>::iterator itr = adresaci.begin(); itr != adresaci.end(); itr++)
    {
        if (itr -> pobierzId() == idUsuwanegoAdresata)
        {
            czyIstniejeAdresat = true;
            cout << endl << "Potwierdz naciskajac klawisz 't': ";
            znak = MetodyPomocnicze::wczytajZnak();
            if (znak == 't')
            {
                plikZAdresatami.usunWybranegoAdresataWPliku(idUsuwanegoAdresata);
                adresaci.erase(itr);
                cout << endl << endl << "Szukany adresat zostal USUNIETY" << endl << endl;
                system("pause");
                return;
            }
            else
            {
                cout << endl << endl << "Wybrany adresat NIE zostal usuniety" << endl << endl;
                system("pause");
            }
        }
    }
    if (czyIstniejeAdresat == false)
    {
        cout << endl << "Nie ma takiego adresata w ksiazce adresowej" << endl << endl;
        system("pause");
    }
}

int AdresatMenager::podajIdWybranegoAdresata()
{
    int idWybranegoAdresata = 0;
    cout << "Podaj numer ID Adresata: ";
    idWybranegoAdresata  = MetodyPomocnicze::wczytajLiczbeCalkowita();
    return idWybranegoAdresata;
}

