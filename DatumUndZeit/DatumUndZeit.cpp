// DatumUndZeit.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main()
{
    //Bei C Programmierung
    time_t timestr;
    timestr = time(&timestr);

    // Bei Windows Programmierung
    SYSTEMTIME lt ;

    GetLocalTime(&lt);

    wprintf(L"Heute ist der %02i.%02i.%4i \n", lt.wDay, lt.wMonth, lt.wYear); 
    wprintf(L"Es ist %02i:%02i:%02i \n", lt.wHour, lt.wSecond, lt.wMilliseconds);

    GetSystemTime(&lt);

    wprintf(L"Heute ist der %02i.%02i.%4i \n", lt.wDay, lt.wMonth, lt.wYear);
    wprintf(L"Es ist %02i:%02i:%02i \n", lt.wHour, lt.wSecond, lt.wMilliseconds);

    cout << "Berechnen von Zeit " << lt.wYear + 1;
    
}