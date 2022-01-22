#include <iostream>

using namespace std;

class A {
public:
    int a;
};

class B : public A {
public:
    int b;
};

auto main() -> int {
    A g;
    cout << "g.a=" << g.a << endl << endl;;

    A z { };
    cout << "z.a=" << z.a << endl << endl;;

    A a = { 1 };
    cout << "a.a=" << a.a << endl << endl;;

#if 201703L <= __cplusplus  // -std=c++17
    B b = { { 2 }, 3 };
    cout << "b.a=" << b.a << endl;
    cout << "b.b=" << b.b << endl << endl;

    B b1 = { A { 4 }, .b = 5 };
    cout << "b1.a=" << b1.a << endl;
    cout << "b1.b=" << b1.b << endl << endl;

#if 0 // error: too many initializers for ‘B’
    B b2 = { .b = 6, A { 7 } };
    cout << b2.a << endl;
    cout << b2.b << endl << endl;
#endif
#endif

    return 0;
}

#if 0
$ g++ -std=c++17 main.cpp
$ ./a.out
g.a=32616

z.a=0

a.a=1

b.a=2
b.b=3

b1.a=4
b1.b=5
#endif
