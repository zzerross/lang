#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

auto main() -> int {
    array<int, 5> a = { 0, 1, 2, 3, 4 };
    int n = 2;

    for_each(begin(a), end(a), [n](int e) { cout << n * e << " "; });

#if 0 // error: increment of read-only variable ‘n’
    for_each(begin(a), end(a), [n](int e) { cout << n++ * e << " "; });
#endif

    return 0;
}
