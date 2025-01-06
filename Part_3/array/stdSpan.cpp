#include <iostream>
#include <span>
#include <vector>

void print_span(std::span<int> sp)
{
    for (int elem : sp)
    {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    print_span(vec);

    int arr[] = {6, 7, 8, 9, 10};
    print_span(arr);

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <ranges>

// int main() {
//     std::vector<int> vec = {1, 2, 3, 4, 5};

//     // Фильтрация (оставляем только четные числа)
//     auto even = vec | std::ranges::views::filter([](int x) { return x % 2 == 0; });

//     // Вывод результата
//     for (int elem : even) {
//         std::cout << elem << " ";
//     }
//     std::cout << std::endl;

//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main()
// {
//     std::vector<int> vec1 = {1, 2, 3};
//     std::vector<int> vec2 = {1, 2, 3};

//     if (std::equal(vec1.begin(), vec1.end(), vec2.begin()))
//     {
//         std::cout << "Массивы равны." << std::endl;
//     }

//     return 0;
// }
