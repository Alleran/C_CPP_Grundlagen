// Vererbung.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <iostream>
#include <vector>
#include "Chef.hpp"
#include "Azubi.hpp"

int main()
{
	vector<Mitarbeiter> iad;
	Chef rudi("Rudi",1000);	
	iad.push_back(rudi);	
	iad.push_back(Azubi("Max",200));
	
	for (auto& ma : iad)
	{
		cout << ma.toString() << endl;
		ma.gehaltserhoehung();
		cout << ma.toString() << endl;
	}	
}

