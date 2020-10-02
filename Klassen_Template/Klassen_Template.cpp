// Klassen_Template.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include "Stack.cpp"

using namespace std;

int main()
{
    Stack<short, 5u> stack;    
    stack.push(4711);
    stack.push(42);
    short res = stack.pop();
    short resef;
    stack.pop(resef);  
    res = stack.pop();
}