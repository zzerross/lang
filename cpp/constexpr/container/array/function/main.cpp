#include <iostream>
#include <array>

using namespace std;

constexpr int size(int n) {
    return n * 2;
}

auto main() -> int {
    array<int, size(2)> array;

    cout << array.size() << endl;

    return 0;
}
