// Makro_vs_Inline.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
using namespace std;

#define Quad(a) (a*a)
inline float quadf(float a) {
    return a * a;
}
inline void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int b = 4, k = 9;
    string test = "Hi";
    cout << Quad(++b) << endl;
    cout << b << endl;
    //cout << Quad(test) << endl; //Kann keine STrings miteinander multiplizieren
    cout << quadf(4711.0815) << endl;
    cout << "Vor dem Tausch " << b << " " << k << endl;
    swap(&b, &k);
    cout << "Nach dem Tausch " << b << " " << k << endl;
}