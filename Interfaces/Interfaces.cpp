// Interfaces.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <string>
using namespace std;

class Mitarbeiter {
protected:
    string name;
public:
    Mitarbeiter() {
        this->name = "Nobody";
    }
    Mitarbeiter(string name) {
        this->name = name;
    }
    inline string getName() { return this->name; }
};

class Chef : public Mitarbeiter {
protected:
    double boni;
};

int main()
{
    Mitarbeiter mObj("Rudi");
    cout << mObj.getName() << endl;    
}