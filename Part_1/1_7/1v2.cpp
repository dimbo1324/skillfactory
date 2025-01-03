#include <Windows.h>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    SetConsoleOutputCP(65001);

    std::cout << "Введите натуральное число для преобразования в двоичную форму: ";
    int num;
    std::cin >> num;

    if (num < 0)
    {
        std::cerr << "Число должно быть натуральным!" << std::endl;
        return 1;
    }

    std::vector<int> binary_representation;
    while (num > 0)
    {
        binary_representation.push_back(num % 2);
        num /= 2;
    }

    std::reverse(binary_representation.begin(), binary_representation.end());

    std::string binary_string;
    for (int digit : binary_representation)
    {
        binary_string += std::to_string(digit);
    }

    std::cout << "Результат: '" << binary_string << "'" << std::endl;

    return 0;
}
