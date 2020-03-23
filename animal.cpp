#include "animal.h"

Animal::Animal() {
    // Name
    std::wcout << L"Имя: " << L"\n";
    std::wstring name;
    std::wcin >> name;

    this->name = name;


    // Price
    int enterPrice;
    std::wcout << L"Цена ""\n";

    while (!(std::cin >> enterPrice) ||
            (std::cin.peek() != '\n') ||
            (enterPrice < (1))) {
        std::cin.clear();
        while (std::cin.get() != '\n');

        std::wcout << L"Ошибка. Повторите ввод.\n";
    }

    this->price = enterPrice;
}

void Animal::displayInfo() {
    std::wcout << L"Имя: "  << this->name << std::endl;
    std::wcout << L"Цена: " << this->price << std::endl;
}
