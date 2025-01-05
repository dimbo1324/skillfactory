// Напишите программу с помощью цикла while, которая вычисляет факториал числа 10.

#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    unsigned short number = 10;
    unsigned short count = 1;
    int result = 1;

    do
    {
        result *= count++;
    } while (count <= number);
    cout << "Факториал = " << result << endl;

    return 0;
}