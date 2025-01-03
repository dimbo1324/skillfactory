// Перевод десятичных чисел в двоичную систему
// Для перевода целого десятичного числа в двоичную систему счисления необходимо последовательно выполнять деление данного числа и получаемых целых частных на 2 до тех пор, пока мы не получим частное, равное нулю. Исходное число в двоичной системе счисления составляется последовательной записью полученных остатков, начиная с последнего.
// Задание 1.7.1
// Преобразуйте число 235 в двоичную систему.

#include <iostream>
#include <Windows.h>
#include <algorithm>
#include <string>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    SetConsoleOutputCP(65001);

    int num;
    cout << "Введите натуральное число для преобразования в двоичную форму" << endl;
    cin >> num;

    int bin = 2;
    int result1 = num;
    int SIZE = 0;
    while (result1 > 0)
    {
        result1 = result1 / bin;
        SIZE++;
    }
    int array[SIZE]{};
    int result2 = num;
    for (int i = 0; i < SIZE; i++)
    {
        array[i] = (result2 % bin);
        result2 = result2 / bin;
    };
    std::reverse(array, array + SIZE);
    std::string result;
    for (const int &value : array)
    {
        result += std::to_string(value);
    }
    cout << "Результат: '" << result << "'" << endl;
    return 0;
}
