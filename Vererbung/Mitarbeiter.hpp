#pragma once
#include <string>
using namespace std;

class Mitarbeiter
{
protected:
	string name;
	double gehalt;
public:
	Mitarbeiter(string name, double gehalt) {
		this->name = name;
		this->gehalt = gehalt;

	}
public:
	virtual string toString() {
		return this->name + " bekommt " + to_string(this->gehalt) + " Euro";
	}

	virtual void gehaltserhoehung() {
		this->gehalt += 200;
	}
};

