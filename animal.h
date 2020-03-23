#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>


class Animal {

public:
    Animal();
    Animal(std::wstring name, int price);

    virtual void displayInfo();

    virtual ~Animal(){}

    // Get
    std::wstring getName() {
        return this->name;
    }

    int getPrice() {
        return this->price;
    }


    // Set
    void setName(std::wstring value) {
        this->name = value;
    }

    void setPrice(int value) {
        this->price = value;
    }

private:

    std::wstring name;
    int price;

    int dollarRate = 70;



 protected:

    double getDollarPrice() {return this->price * this->dollarRate;}

};

#endif // ANIMAL_H
