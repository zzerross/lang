#include <iostream>

using namespace std;

class A {
public:
    int i;

    explicit A(int i): i(i) { }
    A(char c): i(c) { }

    static void print(A a) {
        cout << a.i << endl;
    }
};

int main() {
    // error: cannot convert ‘int’ to ‘A’
    // A::print(1);
    A::print(A(1));

    char c = 'a';
    A::print(c);

    return 0;
}
