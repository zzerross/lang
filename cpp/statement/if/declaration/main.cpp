#include <iostream>

using namespace std;

auto main() -> int {
    if (int* p = new int(3)) {
        cout << *p << endl;

        delete p;
    }

    if (auto p = new int(4)) {
        cout << *p << endl;

        delete p;
    }

    return 0;
}
