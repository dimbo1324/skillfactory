#include <Windows.h>
#include <iostream>

int main()
{
    SetConsoleOutputCP(65001);

    std::cout << "Добро пожаловать в нашу программу на C++!" << std::endl;
    // Пример с continue и break в цикле for
    std::cout << "Пример цикла for:" << std::endl;

    for (int i = 1; i <= 10; ++i)
    {
        if (i % 2 == 0)
        {
            continue; // Пропускаем текущую итерацию, если i четное
        }
        if (i > 7)
        {
            break; // Выходим из цикла, если i больше 7
        }
        std::cout << "i = " << i << std::endl;
    }

    std::cout << "\nПример цикла while:" << std::endl;

    // Пример с continue и break в цикле while
    int count = 0;
    while (count < 10)
    {
        ++count;
        if (count == 5)
        {
            continue; // Пропускаем итерацию, если count равно 5
        }
        if (count > 8)
        {
            break; // Выходим из цикла, если count больше 8
        }
        std::cout << "count = " << count << std::endl;
    }

    std::cout << "\nЦиклы завершены." << std::endl;
    return 0;
}
