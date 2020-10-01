// HeapSpeicher.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <array>

using namespace std;

struct Person {
    string name;
    size_t alter;
};

Person* erzeugeObjekte() {
    
    Person* personen = (Person*) calloc(500000, sizeof(Person));
    for (size_t i = 0; i < 500000; i++)
    {
        personen[i].name = "Rudi";        
        personen[i].alter = 21 + i;
    }
    return personen;
}

void benutzeObjekte(Person * pers) {
    pers += 400000;
    cout << pers->name << " ist " << pers->alter << " Jahre alt!" << endl;
}

int main()
{
    //Bootstrapping einer Anwendung  
    Person* pers = erzeugeObjekte();   
    benutzeObjekte(pers);
}