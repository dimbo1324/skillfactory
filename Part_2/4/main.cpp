// Задание 3.3.1
// Дан массив int array[7] = {2, 3, 4, 5, 2, 8, 10};. Выведите на консоль все его элементы.

#include <Windows.h>
#include <iostream>
using namespace std;
int main()
{
    SetConsoleOutputCP(65001);

    int array[7] = {2, 3, 4, 5, 2, 8, 10};

    for (auto &i : array)
    {
        cout << static_cast<double>(i) / (static_cast<double>(i * i)) << endl;
    }

    return 0;
}