#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    arr[2] = 42;
    std::cout << "Элемент с индексом 2: " << arr[2] << std::endl;
    return 0;
}

// Традиционные массивы — это базовый способ работы с массивами. Хотя они просты, они менее гибки и безопасны по сравнению с контейнерами STL.
// Ограничения:
// Нет встроенного метода для определения длины массива.
// Нет встроенной безопасности при выходе за границы массива.