#ifndef STRUCT_H
#define STRUCT_H

#include <vector>

#include "animal.h"



class Struct {
public:
    Struct();

    void displayElement();
    void createNewElement();
    void deleteElement();

private:
    std::vector<Animal*> vector;

    // Вывод списка всех елементов
    int getListAllElements();
    void display(int index);

    void saveNewElement();
    void saveElement(Animal * el);
};

#endif // STRUCT_H
