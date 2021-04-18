#include <iostream>
#include <list>
#include <numeric>

using namespace std;

auto main() -> int {
    list<double> l = { 1.0, 2.0 };

    auto foldl = accumulate(
        l.begin(),
        l.end(),
        10,
        plus<double>());

    auto foldr = accumulate(
        l.rbegin(),
        l.rend(),
        10,
        plus<double>());

    cout << foldl << endl;
    cout << foldr << endl;

    return 0;
}
