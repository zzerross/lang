#include <iostream>

using namespace std;

int main() {
    int data[]{ 0, 1, 2, 3, 4, 5 };

    auto it = begin(data);

    cout << *it << endl;

    advance(it, 3);

    cout << *it << endl;

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
0
3
#endif
