#include "fish.h"

Fish::Fish() {
    // Rare
    while (true) {
        std::wcout << L"Редкая: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"да"  || value == L"Да"  ||
             value == L"нет" || value == L"Нет" ||
             value == L"no"  || value == L"No"  ||
             value == L"yes" || value == L"Yes" ) {

            this->rare = (value == L"да" || value == L"Да" || value == L"yes" || value == L"Yes");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }

    // Edible
    while (true) {
        std::wcout << L"Съедобная: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"да"  || value == L"Да"  ||
             value == L"нет" || value == L"Нет" ||
             value == L"no"  || value == L"No"  ||
             value == L"yes" || value == L"Yes" ) {

            this->edible = (value == L"да" || value == L"Да" || value == L"yes" || value == L"Yes");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }
}

void Fish::displayInfo() {
    std::wcout << "=====================" << std::endl;
    std::wcout << L"Имя: " << this->getName() << std::endl;;
    std::wcout << L"Цена: " << this->getPrice() << std::endl;;

    std::wstring rareValue = (this->rare)? L"Да": L"Нет";

    std::wstring edibleValue = (this->edible)? L"Да": L"Нет";

    std::wcout << L"Редкая : " << rareValue << std::endl;
    std::wcout << L"Cъедобная: "  << edibleValue << std::endl;
    std::wcout << "=====================" << std::endl;
}
