#include <iostream>

using namespace std;

auto main() -> int {
    auto min = [](auto a, auto b) { return a < b ? a : b; };

    cout << min(3, 4) << endl;

    return 0;
}
