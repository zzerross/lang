#include <iostream>
#include <ostream>
#include <iterator>
#include <numeric>
#include <list>

using namespace std;

auto main() -> int {
    list<int> l(10);

    iota(l.begin(), l.end(), -5);

    copy(begin(l), end(l), ostream_iterator<int>(cout, " "));

    return 0;
}
