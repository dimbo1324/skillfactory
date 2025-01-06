#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    std::vector<int> vec = {500, 1001, 4003, 2004, 300};

    // Сортировка
    std::sort(vec.begin(), vec.end());

    // Поиск
    auto it = std::find(vec.begin(), vec.end(), 500);
    if (it != vec.end())
    {
        std::cout << "Найден элемент: " << *it << std::endl;
    }
    else
    {
        std::cout << "Элемент не найден." << std::endl;
    }

    // Реверс
    std::reverse(vec.begin(), vec.end());

    // Вывод
    for (int elem : vec)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}