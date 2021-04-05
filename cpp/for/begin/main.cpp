#include <iostream>

auto main() -> int {
    int a[10];

    for (auto i = std::begin(a); i != std::end(a); i++)
        *i = i - a;

    for (auto i : a)
        std::cout << i << " ";

    return 0;
}
