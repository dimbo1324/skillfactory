// Задание 2.6.1
// Используя оператор switch напишите программу, которая принимает от пользователя день недели и выводит этот день на консоль, и не забудьте поддержать (учесть) случай, если число не от 1 до 7.

#include <Windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);

    unsigned short number;
    cout << "Введите число, соответсвующее дню недели (от 1 до 7): " << endl;
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "Сегодня понедельник" << endl;
        break;
    case 2:
        cout << "Сегодня вторник" << endl;
        break;
    case 3:
        cout << "Сегодня среда" << endl;
        break;
    case 4:
        cout << "Сегодня четверг" << endl;
        break;
    case 5:
        cout << "Сегодня пятница" << endl;
        break;
    case 6:
        cout << "Сегодня суббота" << endl;
        break;
    case 7:
        cout << "Сегодня воскресенье" << endl;
        break;

    default:
        cout << "ОШИБКА! ВЫ ВВЕЛИ ЧИСЛО НЕ СООТВЕТСВУЮЩЕЕ КАКОМУ-ЛИБО ДНЮ НЕДЕЛИ!" << endl;
        break;
    }
    return 0;
}