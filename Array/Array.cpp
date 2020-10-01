// Array.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>
using namespace std;

int main()
{
    int zahlenHotel[10000];
    array <int,40> zahlen;
    
    for (int i = 0; i < zahlen.size() ; i++)
    {
        zahlen[i] = i + 11;
        if (zahlen[i] % 2 == 0)
        {
            cout << zahlen[i] << endl;
        }               
    }
}
