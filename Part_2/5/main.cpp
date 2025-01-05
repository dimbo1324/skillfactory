// Напишите программу, которая считает количество элементов в массиве, кратных числу, которое вводится с консоли.

#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    int array[7] = {2, 3, 4, 5, 2, 8, 10};
    int myNumber = 2;
    int count = 0;
    for (size_t i = 0; i < 7; i++)
    {
        if (array[i] % myNumber == 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}