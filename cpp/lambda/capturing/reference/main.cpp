#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

auto main() -> int {
    array<int, 5> a = { 0, 1, 2, 3, 4 };
    int n = 0;

    for_each(begin(a), end(a), [n](int e) mutable { cout << n++ * e << " "; });
    cout << "n=" << n << endl;

    for_each(begin(a), end(a), [&n](int e) { cout << n++ * e << " "; });
    cout << "n=" << n << endl;

    return 0;
}
