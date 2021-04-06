#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

auto main() -> int {
    vector<int> s = { 0, 1, 2, 3, 4 };
    vector<int> d;

    d.resize(s.size());

    transform(begin(s), end(s), begin(d), [](int e) -> int { return e * e; });

    for_each(begin(d), end(d), [](int e) { cout << e << " "; });

    return 0;
}
