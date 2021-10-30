#include <iostream>

using namespace std;

void print(int& i) {
    cout << "lvalue reference: " << i << endl;
}

void print(int&& i) {
    cout << "rvalue reference: " << i << endl;
}

int main() {
    int i = 1;
    print(i);

    print(2);

    // error: binding reference of type ‘int&’ to ‘const int’ discards qualifiers
    // const int c = 3;
    // print(c);

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
lvalue reference: 1
rvalue reference: 2
#endif
