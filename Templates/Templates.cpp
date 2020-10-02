// Templates.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

//Prototype eines Inline Function Templates
template <typename T> inline T swap(T *a, T *b);
template <typename T> extern T swapPtr(T* a, T* b);
template <typename T> static T swapRef(T& a, T& b);

template <class T> T swapPtr(T* x, T* y) {
    T temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}

// Aufgabe schreiben eines Funktionstemplates, dass als Parameter
// ein Array und die größe dessen übergeben bekommt. 
// Der Return Wert enthält den Wert des kleinsten Elementes !
template <class T> T minimum(T feld[], size_t anzahl);

template <class T> T minimum(T feld[], size_t anzahl) {
    T temp = feld[0];
    for (size_t i = 1; i < anzahl; i++)
    {
        if (feld[i] < temp)
        {
            temp = feld[i];
        }
    }
    return temp;
}

int main()
{
    float k = 34.8, l = 123.08;
    int zahlen[] = { 5, 3, 6, 2, 1, 4 };
    int anzahl = sizeof(zahlen) / sizeof(zahlen[0]);

    cout << "Vor " << k << " " << l << endl;
    swapPtr(&k, &l);
    cout << "Nach " << k << " " << l << endl;
    cout << "Der kleinste Wert ist: " << minimum(zahlen, anzahl) << endl;
}