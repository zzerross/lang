#include <algorithm>
#include <array>
#include <functional>
#include <iostream>

using namespace std;

auto main() -> int {
    int denominators[] = { 10, 200, 3000 };
    int numerators[]   = {  1,   2,    3 };
    int shared[3];

    transform(denominators, denominators + 3, numerators, shared, divides<int>());

    for (auto n : shared)
        cout << n << " ";

    return 0;
}
