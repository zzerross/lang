#include <iostream>
#include <array>

using namespace std;

auto main() -> int {
    constexpr int n = 3;
    constexpr int size = n * 2;

    array<int, size> array1;
    cout << array1.size() << endl;

#if 0 // error: uninitialized const ‘array2’ [-fpermissive]
    constexpr array<int, size> array2;
#else
    constexpr array<int, size> array2 = { 1, };
#endif
    cout << array2.size() << endl;

    for (auto i : array2)
        cout << i << " ";

    cout << endl;

    return 0;
}
