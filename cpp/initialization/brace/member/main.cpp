#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

class G {
public:
    short a[4];
};

class Z {
public:
    Z(): a { } {
    }

    short a[4];
};

auto main() -> int {
    G g;
    copy(begin(g.a), end(g.a), ostream_iterator<short>(cout, ", "));
    cout << endl;

    Z z;
    copy(begin(z.a), end(z.a), ostream_iterator<short>(cout, ", "));
    cout << endl;

    return 0;
}

#if 0
$ g++ main.cpp
$ ./a.out
-26800, -29202, 32641, 0, 
0, 0, 0, 0, 
#endif
