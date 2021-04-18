#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#include <numeric>
#include <ostream>
#include <random>

using namespace std;

auto main() -> int {
    vector<int> v(10);

    iota(v.begin(), v.end(), -5);

    shuffle(v.begin(), v.end(), mt19937{random_device{}()});

    copy(begin(v), end(v), ostream_iterator<int>(cout, " "));

    return 0;
}
