#include "PlikTekstowy.h"
#include <fstream>

using namespace std;

string PlikTekstowy::pobierzNazwePliku(){
    return NAZWA_PLIKU;
}

bool PlikTekstowy::czyPlikJestPusty()
{
    bool czyPusty = true;
    fstream plikTekstowy;

    plikTekstowy.open(pobierzNazwePliku().c_str(), ios::in);
    if(plikTekstowy.good()){
        plikTekstowy.seekg(0, ios::end);
        if (plikTekstowy.tellg() != 0)
            czyPusty = false;
    }
    return czyPusty;
}
