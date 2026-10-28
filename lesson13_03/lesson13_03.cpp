// lesson13_03.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include <string>

struct adress
{
    std::string City;
    std::string Street;
    unsigned int House;
    unsigned int Apartment;
    unsigned int Index;
};

void AdressPrint(adress* adr);

int main()
{
    setlocale(LC_ALL, "RUS");
    SetConsoleCP(1251);

    adress Adress1 = {
        .City = "Москва",
        .Street = "Арбат",
        .House = 12,
        .Apartment = 8,
        .Index = 123456
    };

    adress Adress2 = {
        .City = "Ижевск",
        .Street = "Пушкина",
        .House = 59,
        .Apartment = 143,
        .Index = 953769
    };


    AdressPrint(&Adress1);
    std::cout << std::endl;
    AdressPrint(&Adress2);
}

void AdressPrint(adress* adr)
{
    std::cout << "Город: " << adr->City << std::endl;
    std::cout << "Улица: " << adr->Street << std::endl;
    std::cout << "Номер дома: " << adr->House << std::endl;
    std::cout << "Номер квартиры: " << adr->Apartment << std::endl;
    std::cout << "Индекс: " << adr->Index << std::endl;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
