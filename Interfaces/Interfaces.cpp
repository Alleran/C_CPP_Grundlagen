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
    string getName() { return this->name; }
    virtual void setName(string name) { this->name = name; }
};

class Chef : public Mitarbeiter {
protected:
    double boni;
public:
    string toString() { return name; }
};

int main()
{
    Mitarbeiter mObj("Susi");
    cout << mObj.getName() << endl;   

    Chef c1;
    c1.setName("Max");
    cout << c1.toString() << endl;
}