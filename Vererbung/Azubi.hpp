#pragma once
#include "Mitarbeiter.hpp"
class Azubi :
    public Mitarbeiter
{
public:
    Azubi(string name) :Azubi(name, 0) {

    }
    Azubi(string name, double gehalt) :Mitarbeiter(name, gehalt) {

    }
    void gehaltserhoehung() override {
        this->gehalt += 200;
    }
};

