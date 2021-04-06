#include <iostream>

using namespace std;

auto main() -> int {
    auto n = 7;
    auto lambda = [&x = n]() { x++; };

    lambda();

    cout << n << endl;

    return 0;
}
