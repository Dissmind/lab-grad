#ifndef BIRD_H
#define BIRD_H

#include "animal.h"

class Bird : public Animal
{
public:
    Bird();

    virtual void displayInfo();


    // Get
//    std::wstring getFlyingStr() {
//        if (this->flying) return L"Летающая";
//        else return L"Не летающая";
//    }

    bool getFlying() {
        return this->flying;
    }

    bool getPredator() {
        return this->flying;
    }

    // Set
    void setFlying(bool value) {
        this->flying = value;
    }

    void setPredator(bool value) {
        this->predator = value;
    }

private:
    bool flying;
    bool predator;
};

#endif // BIRD_H
