#include <iostream>
#include <array>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    std::array<int, 5> arr = {10, 20, 30, 40, 50};

    for (size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr.at(i) << " ";
    }
    std::cout << std::endl;

    for (int elem : arr)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}

// std::array — это фиксированный массив из библиотеки STL, который предоставляет интерфейс контейнера.
// Основные методы:
// at(index) — безопасный доступ с проверкой границ.
// size() — возвращает размер массива.
// Итераторы для работы с элементами.