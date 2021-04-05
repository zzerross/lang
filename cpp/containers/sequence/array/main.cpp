#include <array>
#include <iostream>

auto main() -> int {
    std::array<int, 5> a = { 0, 9, 2, 3 ,4, };

    a[1] = 1;

    for (int i : a)
        std::cout << i << " ";

    return 0;
}
