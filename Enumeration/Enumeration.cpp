// Enumeration.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
using namespace std;

enum Spielzug {
	Schere = 1, Stein = 2, Papier = 3, Echse = 4, Spock = 5, ungueltig
};
Spielzug wandleEingabe(int eingabe) {
	switch (eingabe)
	{
	case 1: return Schere; break;
	case 2: return Stein; break;
	case 3: return Papier; break;
	case 4: return Echse; break;
	case 5: return Spock; break;
	default: return ungueltig;
		break;
	}
}

int main(int anz, char params[]) 
{
	int eingabe = 0;
	Spielzug spielzug;
	cout << "Spielzug (Schere - 1), (Stein..."<<endl;
	
	cin >> eingabe;
	spielzug = wandleEingabe(eingabe);

	if (spielzug == Schere)
	{
		cout << "Sag ich doch - Schere";
	}
}