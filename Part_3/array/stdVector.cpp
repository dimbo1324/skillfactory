#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    std::vector<int> vec = {10, 20, 30, 40, 50};
    vec.push_back(6);
    vec.pop_back();
    for (size_t i = 0; i < vec.size(); ++i)
    {
        std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;
    for (int elem : vec)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
    return 0;
}
