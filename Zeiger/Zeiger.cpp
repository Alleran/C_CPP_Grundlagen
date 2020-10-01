// Zeiger.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

int main()
{
    //Zeigervariable definieren
    int z;
    int zahlen[] = { 1,2,3,4,5 };

    cout << &z << endl;
    cout << zahlen << " " << &zahlen[0] << " " << &zahlen[1] << endl;

    //Ein Zeiger ist eine Adressvariable
    int* p_int = NULL; //Deklaration

    p_int = &z;
    *p_int = 4711;
    cout << &p_int << " Inhalt eines Zeigers " << p_int << endl;
    cout << z << endl;

    p_int = zahlen;

    cout << zahlen[0] << endl;
    *p_int = 42;
    cout << zahlen[0] << endl;
    *(++p_int) = 4712;
    cout << zahlen[1] << endl;

    p_int = &zahlen[4];
    int** p2_int = &p_int;
    int*** p3_int = &p2_int;

    ***p3_int = 7777;
    cout << zahlen[4] << endl;
}


