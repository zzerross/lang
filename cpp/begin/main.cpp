#include <iostream>

auto main() -> int {
    int a[10];

    for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
        a[i] = i;

    for (auto i = std::begin(a); i != std::end(a); i++)
        std::cout << *i << " ";

    return 0;
}
