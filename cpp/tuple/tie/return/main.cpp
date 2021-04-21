#include <iostream>
#include <tuple>

using namespace std;

tuple<int, string, bool> func(int i) {
    return make_tuple(i ? 7 : 8, i ? "hello" : "world", i ? true : false);
}

auto main() -> int {
    int i;
    string s;
    bool b;

    tuple<int, string, bool> t1 = func(1);
    tie(i, s, b) = t1;
    cout << i << ", " << s << ", " << b << endl;

    auto t2 = func(0);
    cout << get<0>(t2) << ", " << get<1>(t2) << ", " << get<2>(t2) << endl;

    return 0;
}
