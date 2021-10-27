#include <iostream>

using namespace std;

union Value {
    int i;
    float f;
};


void dump(const union Value& value) {
    cout << "i=" << value.i << " f=" << value.f << endl;
}

int main() {
    union Value value = { 1 };

    dump(value);

    value.f = 0.1;
    dump(value);

    return 0;
}

#if 0
$ g++ %
$ ./a.out

i=1 f=1.4013e-45
i=1036831949 f=0.1
#endif
