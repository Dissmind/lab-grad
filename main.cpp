#include <iostream>
#include <vector>
#include <windows.h>

#include "animal.h"
#include "struct.h"

// Инициализация структуры
Struct *vector = new Struct();

void manager(int i) {
    std::wcout << std::endl << std::endl;

    switch (i) {
        case 1:
        std::wcout << L"[]Вывод записи" << std::endl;
        vector->displayElement();
        break;

        case 2:
        std::wcout << L"[]Создание новой записи" << std::endl;
        vector->createNewElement();
        break;

        case 3:
        std::wcout << L"[]Удаление записи" << std::endl;
        vector->deleteElement();
        break;
    }
}

int menu() {
    std::wcout << L"Меню" << std::endl;
    std::wcout << L"1. Вывести запись" << std::endl;
    std::wcout << L"2. Создать новую запись" << std::endl;
    std::wcout << L"3. Удалить запись" << std::endl;
    std::wcout << L"4. Выход из программы" << std::endl;
    std::wcout << L" >> ";

    int enter;
    std::wcin >> enter;

    if (enter == 4) return 1;

    manager(enter);

    return 0;
}

int main() {

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL,"Russian");

    std::wcout << L"Лабраторная работа 9 \n";
    std::wcout << L"Градусав Владислав \n";
    std::wcout << L"Группа: ИС18-УК\n";
    std::wcout << L"Вариант: 1 \n";

    std::wcout << std::endl << std::endl;

    while(true){
        if (menu() == 1) return 0;

        std::wcout << std::endl << std::endl;
    }

    return 0;
}
