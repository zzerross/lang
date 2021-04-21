#include <iostream>
#include <tuple>

using namespace std;

auto main() -> int {
    tuple<int, string, bool> t1(9, "hello", true);
    cout << get<0>(t1) << ", " << get<1>(t1) << ", " << get<2>(t1) << endl;

    auto t2 = make_tuple(5, "world", false);
    cout << get<0>(t2) << ", " << get<1>(t2) << ", " << get<2>(t2) << endl;

    return 0;
}
