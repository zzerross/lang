#include <iostream>

using namespace std;

class B {
public:
    int i;
};

template <typename T>
class I : public T {
public:
    I() {
        T::i = 1;
    }
};

class CB : public I<B> {
public:
    CB() {
    }
};

class C : public CB {
public:
    C() {
        i++;
    }
};

int main() {
    CB c;

    cout << c.i << endl;

    return 0;
}
