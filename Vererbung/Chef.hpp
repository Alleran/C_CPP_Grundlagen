#pragma once
#include "Mitarbeiter.hpp"

class Chef:public Mitarbeiter
{
public:
	Chef(string name):Chef(name, 0.0) {
		
	}
	Chef(string name, double gehalt):Mitarbeiter(name, gehalt) {
		
	}

	string toString() override {
		return this->name + " erhaelt " + to_string(this->gehalt) + " Euro";
	}
	void gehaltserhoehung() override{
		this->gehalt *= 1.2;
	}
};

