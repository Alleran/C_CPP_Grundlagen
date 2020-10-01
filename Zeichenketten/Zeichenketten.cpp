// Zeichenketten.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    char text[] = "Packe Kid";
    char willkommen[100];
    strcpy_s(willkommen, 99, "Das geht aber nicht");    
    char* dynText;
    dynText = willkommen;
    string hallo;
    cout << dynText << endl;
}

