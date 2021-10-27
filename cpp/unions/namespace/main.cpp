#include <iostream>

using namespace std;

enum E {
    A = 10,
};

namespace n {
    enum E {
        A = 1,
    };
};

int main() {
    enum E x = A;
    cout << x << endl;

    enum n::E y = n::E::A;
    cout << y << endl;

    return 0;
}
#if 0
$ g++ main.cpp
$ ./a.out

10
1
#endif
