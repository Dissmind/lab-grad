#include "bird.h"


Bird::Bird() {
    // Flying
    while (true) {
        std::wcout << L"Летающие: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"да"  || value == L"Да"  ||
             value == L"нет" || value == L"Нет" ||
             value == L"no"  || value == L"No"  ||
             value == L"yes" || value == L"Yes" ) {

            this->flying = (value == L"да" || value == L"Да" || value == L"yes" || value == L"Yes");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }

    // Predator
    while (true) {
        std::wcout << L"Хищник: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"да"  || value == L"Да"  ||
             value == L"нет" || value == L"Нет" ||
             value == L"no"  || value == L"No"  ||
             value == L"yes" || value == L"Yes" ) {

            this->predator = (value == L"да" || value == L"Да" || value == L"yes" || value == L"Yes");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }
}

void Bird::displayInfo() {
    std::wcout << "=====================" << std::endl;
    std::wcout << L"Имя: " << this->getName() << std::endl;;
    std::wcout << L"Цена: " << this->getPrice() << std::endl;;

    std::wstring predatorValue = (this->predator)? L"Да": L"Нет";

    std::wstring flyingValue = (this->flying)? L"Да": L"Нет";

    std::wcout << L"Может летать: "  << flyingValue << std::endl;
    std::wcout << L"Хищник: "  << predatorValue << std::endl;
    std::wcout << "=====================" << std::endl;
}
