// Strukturen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>

using namespace std;

struct Konto {    
    string name;
    size_t nr = 1000;
    long double saldo;
};

void initKonto(Konto &k) {
    static size_t aktuelleKontoNr = 1000;
    k.name = "Rudi Ratlos";
    k.saldo = 10.0;
    k.nr = aktuelleKontoNr++;
}

void displayKonto(Konto& konto) {
    cout << "Dies ist das Konto mit der Nummer: " << konto.nr << endl;
    cout << "Besitzer ist: " << konto.name << endl;
    cout << "Aktueller Kontostand ist: " << konto.saldo << " Euro" << endl;
}

int main()
{
    Konto meinKonto;    
    cout << sizeof(Konto) << endl;  
    initKonto(meinKonto);
    Konto k2;   
    initKonto(k2);    
    displayKonto(meinKonto);
    displayKonto(k2);
}

