#include "mammals.h"

Mammals::Mammals() {

    // Sex
    while (true) {
        std::wcout << L"Пол: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"м"  || value == L"М"  ||
             value == L"ж"  || value == L"Ж" ) {

            this->sex = (value == L"м" || value == L"М");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }

    // Dangerous
    while (true) {
        std::wcout << L"Опасное: " << L"\n";

        std::wstring value;
        std::wcin.clear();

        getline(std::wcin, value);

        if ( value == L"да"  || value == L"Да"  ||
             value == L"нет" || value == L"Нет" ||
             value == L"no"  || value == L"No"  ||
             value == L"yes" || value == L"Yes" ) {

            this->dangerous = (value == L"да" || value == L"Да" || value == L"yes" || value == L"Yes");

            break;
        }

        std::wcout << L"Не верный ввод. Попроуйте снова.\n";
    }
}


void Mammals::displayInfo() {
    std::wcout << "=====================" << std::endl;
    std::wcout << L"Имя: " << this->getName() << std::endl;
    std::wcout << L"Цена: " << this->getPrice() << std::endl;

    std::wstring sexValue = (this->sex)? L"Мужской": L"Женский";

    std::wstring dangerousValue = (this->dangerous)? L"Да": L"Нет";

    std::wcout << L"Пол: " << sexValue << std::endl;
    std::wcout << L"Опасно: " << dangerousValue << std::endl;
    std::wcout << "=====================" << std::endl;
}
