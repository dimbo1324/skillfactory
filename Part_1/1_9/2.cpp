// Задание 1.9.2
// Напишите программу, которая вычисляет с помощью макроса куб числа 10 — cubeof(X).

#include <iostream>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;

#define cubeof(X) X *X *X
int main()
{
    SetConsoleOutputCP(65001);

    int a = cubeof(10);
    cout << a << endl;
    return 0;
}
