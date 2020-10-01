// Funktionen.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include "IADLib.hpp"

int main()
{
    int k = 5, l = 8;
    int arr[] = { k,l };
    cout << "Vor dem Tausch k = " << arr[0] << " und l = " << arr[1] << endl;
    int *newArr = tauscheVal(arr);
    cout << "Nach dem Tausch k = " << arr[0] << " und l = " << arr[1] << endl;    
    cout << "Nach dem Tausch k = " << newArr[0] << " und l = " << newArr[1] << endl;
}