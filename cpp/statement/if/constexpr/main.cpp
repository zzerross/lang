#include <iostream>
#include <array>

using namespace std;

auto main() -> int {
    struct {
        int a;
    } a;

    struct {
        char c0;
        char c1;
        char c2;
        char c3;
    } b;

    if constexpr (sizeof(a) == sizeof(b))
        cout << "a and b same size" << endl;

    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;

    return 0;
}
