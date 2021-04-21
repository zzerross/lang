#include <iostream>
#include <tuple>

using namespace std;

auto main() -> int {
    int i;
    string s;
    bool b;

    tuple<int, string, bool> t1(9, "hello", true);
    tie(i, s, b) = t1;
    cout << i << ", " << s << ", " << b << endl;

    auto t2 = make_tuple(5, "world", false);
    tie(ignore, s, ignore) = t2;
    cout << i << ", " << s << ", " << b << endl;

    return 0;
}
