#include <iostream>
#include <numeric>
#include <list>

using namespace std;

auto main() -> int {
    list<int> l(10);

    iota(l.begin(), l.end(), -5);

    for (auto i : l)
        cout << i << " ";

    cout << endl;

    return 0;
}
