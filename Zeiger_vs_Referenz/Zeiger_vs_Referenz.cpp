// Zeiger_vs_Referenz.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int zahl;
    int* p_zahl;
    //int& r_zahl; // Geht nicht
    zahl = 354;
    p_zahl = NULL;
    int& r_zahl = zahl;
    r_zahl = NULL;

    float geh = 4.8;
    float* p_geh = &geh;
    float& ref_geh = geh;

    //Verwendung
    geh = 1234.6;
    *p_geh -= 1000;
    ref_geh *= 2;
    cout << ref_geh << endl;

    /* Arrays*/
    short werte[5];
    short weitere[] = { 1,2,4 };
    short nochEins[10] = { 1,2,0 };

    werte[0] = 234;

    //Zeiger auf Array
    short* ps_arr = werte;
    ps_arr+=2; //Setze Zeiger auf Index 2 - Also 3. Element
    *ps_arr = 42;

    cout << werte[2] << endl;
    short& ref_werte = werte[2];
    cout << (ref_werte -=2) << endl;

    //Eigene Datentypen Teil 1 Struktur
    struct konto {
        unsigned short nr;
        string name;
        float saldo;
    }Konto, Konto2; // hier 2 Instanzen vom Typ konto

    konto susisKonto;
    susisKonto.nr = 45;

    konto* p_konto = &Konto;
    (*p_konto).nr = 234;
    p_konto->saldo = 234.7;

    //Referenz
    konto& ref_konto2 = Konto2;
    ref_konto2.nr = 0;

    struct _Adresse {
        string plz;
        string ort;
    };
    struct _Person {
        size_t alter = 0;
        string name;
        struct _Adresse adresse;
    };
    struct _Person personen[10];
    personen[9].adresse.ort = "Leipzig";
    _Person& ref_person = personen[9];    

    cout << ref_person.adresse.ort << endl;
 }