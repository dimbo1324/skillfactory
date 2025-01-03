// Задание 1.9.1
// Из курса математики мы знаем, что длина окружности равна:
//  C = 2 * Pi * r
// Где C — длина окружности, Pi — число {\displaystyle {\boldsymbol {\pi }}} (математическая константа, которая выражает отношение длины окружности к её диаметру, равная примерно 3,14159), r — радиус окружности.
// Поскольку число {\displaystyle {\boldsymbol {\pi }}}  — математическая константа, мы не хотим, чтобы кто-то в программе мог изменять её значение. Напишите программу, вычисляющую длину окружности с использование константы {\displaystyle {\boldsymbol {\pi }}}.

#include <iostream>
#include <Windows.h>

using std::cin;
using std::cout;
using std::endl;
const double pi = 3.1428;

int main()
{
    SetConsoleOutputCP(65001);
    int r = 54;

    cout << "Длина окружности" << 2 * pi * r << endl;

    return 0;
}
