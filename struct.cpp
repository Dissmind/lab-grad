#include "bird.h"
#include "fish.h"
#include "mammals.h"
#include "struct.h"

Struct::Struct() {}


    // ********
    // *Public*
    // ********


/*
    Вывбор и вывод нужной записи на экран
*/
void Struct::displayElement() {
    if (this->getListAllElements()) {
        return;
    }

    int index;
    std::wcout << L" >> ";
    std::wcin >> index;
    // TODO: проверка

    std::wcout << std::endl;

//    this->display(index);

//    Animal &el = this->vector.at(index - 1);

    this->vector[index - 1]->displayInfo();
}


/*
    Создание новой записи
*/
void Struct::createNewElement() {
//    this->saveElement(this->writeNewElement());
    this->saveNewElement();
}


/*
    Удаление записи
*/
void Struct::deleteElement() {
    if (this->getListAllElements()) {
        return;
    }

    int index;

    std::wcout << L" >> ";
    while ( !(std::cin >> index) ||
             (std::cin.peek() != '\n') ||
             (index > this->vector.size()) ||
             (index < 1 )) {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::wcout << L"Ошибка. Повторите ввод.\n";
        std::wcout << L" >> ";
    }

    this->vector.erase(this->vector.begin() + (index - 1));
    std::wcout << L"Елемент успешно удален";
}



    // *********
    // *Private*
    // *********


/*
    Вывод списка имен всех записей на экран
*/
int Struct::getListAllElements() {
    if (this->vector.empty()) {
         std::wcout << std::endl << L"Ни одной записи не существует" << std::endl;
         return 1;
    }

    int i = 1;

    for (Animal *el : this->vector) {
        std::wcout << i << L". " << el->getName() << std::endl;

        i++;
    }

    return 0;
}

/*
    Вывод записи на экран по индексу
*/
//void Struct::display(int index) {
//    Animal el = this->vector.at(index - 1);

//    std::wcout << L"Имя: " << el.getName() << std::endl;
//    if (el.getSex()) std::wcout << L"Пол: " << L"Мужской" << std::endl;
//        else std::wcout << L"Пол: " << L"Женский"  << std::endl;
//    std::wcout << L"Mamls: " << el.getMamls() << std::endl;
//    std::wcout << L"Amphibians: " << el.getAmphibians() << std::endl;
//}


/*
    Создание объекта (записи)
*/
void Struct::saveNewElement() {
    Animal * el;

    std::wcout << L"1. Рыба" << std::endl;
    std::wcout << L"2. Птица" << std::endl;
    std::wcout << L"3. Млекопитающие" << std::endl;

    int enter;

    while ( !(std::cin >> enter) ||
             (std::cin.peek() != '\n') ||
             (enter < 1 ) ||
             (enter > 3)) {
        std::cin.clear();
        while (std::cin.get() != '\n');
        std::wcout << L"Ошибка. Повторите ввод.\n";
        std::wcout << L" >> ";
    }

    switch (enter) {
        case 1:
        el = new Fish();
        break;

        case 2:
        el = new Bird();
        break;

        case 3:
        el = new Mammals();
        break;
    }


//    this->vector.push_back(el);
    this->vector.insert(this->vector.end(), el);
//    return Animal();
}

/*
    Сохранение записи
*/
//void Struct::saveElement(Animal *el) {
//    this->vector.push_back(el);
//}




