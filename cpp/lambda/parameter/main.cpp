#include <array>
#include <algorithm>
#include <iostream>

using namespace std;

auto main() -> int {
    array<int, 5> a = { 0, 1, 2, 3, 4 };

    for_each(begin(a), end(a), [](int e) { e++; });
    for_each(begin(a), end(a), [](int e) { cout << e << " "; });
    cout << endl;

    for_each(begin(a), end(a), [](int& e) { e++; });
    for_each(begin(a), end(a), [](int e) { cout << e << " "; });
    cout << endl;

    return 0;
}
