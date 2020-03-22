#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <vector>


class Animal {
private:
    std::wstring name;
    bool sex;
    std::wstring mamals;
    std::wstring amphibians;


public:
    Animal();

    // Set
    void setName(std::wstring value) {this->name = value;}
    void setSex(bool value) {this->sex = value;}
    void setMamls(std::wstring value) {this->mamals = value;}
    void setAmphibians(std::wstring value) {this->amphibians = value;}

    // Get
    std::wstring getName() {return this->name;}
    bool getSex() {return this->sex;}
    std::wstring getMamls() {return this->mamals;}
    std::wstring getAmphibians() {return this->amphibians;}
};

#endif // ANIMAL_H
