#include "struct.h"

Struct::Struct()
{

}


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

    std::wcout << std::endl;
    this->display(index);
}


/*
    Создание новой записи
*/
void Struct::createNewElement() {
    this->saveElement(this->writeNewElement());
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

    for (Animal el : this->vector) {
        std::wcout << i << L". " << el.getName() << std::endl;

        i++;
    }

    return 0;
}

/*
    Вывод записи на экран по индексу
*/
void Struct::display(int index) {
    Animal el = this->vector.at(index - 1);

    std::wcout << L"Имя: " << el.getName() << std::endl;
    if (el.getSex()) std::wcout << L"Пол: " << L"Мужской" << std::endl;
        else std::wcout << L"Пол: " << L"Женский"  << std::endl;
    std::wcout << L"Mamls: " << el.getMamls() << std::endl;
    std::wcout << L"Amphibians: " << el.getAmphibians() << std::endl;
}


/*
    Создание объекта (записи)
*/
Animal Struct::writeNewElement() {
    Animal el;

    std::wcout << L"Name: " << L"\n";
    std::wstring name;
    // TODO: проверить
    std::wcin >> name;
    el.setName(name);

    while (true) {
        std::wcout << L"Пол: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"м" ||
             value == L"М" ||
             value == L"ж" ||
             value == L"Ж" ) {
            el.setSex(value == L"м" || value == L"М");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }

    std::wcout << L"mamals: " << L"\n";
    std::wstring value;
    std::wcin >> value;
    el.setMamls(value);

    std::wcout << L"amphibians: " << L"\n";
    std::wcin >> value;
    el.setAmphibians(value);

    return el;
}

/*
    Сохранение записи
*/
void Struct::saveElement(Animal el) {
    this->vector.push_back(el);
}




