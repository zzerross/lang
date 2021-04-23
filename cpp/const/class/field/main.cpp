#include <iostream>

using namespace std;

auto main() -> int {
    class A {
    public:
#if 0 // error: uninitialized const member in ‘const int’ [-fpermissive]
        A() {
            i = 9;
        }
#endif

        A(const int i): i(i) {
        }

        const int i;
    };

#if 0 // error: no matching function for call to ‘main()::A::A()’
    {
        A a;
        cout << a.i << endl;
    }
#endif

    {
        A a { 1 };
        cout << a.i << endl;
    }

    {
        A a { .i = 2 };
        cout << a.i << endl;
    }

    {
        A a(3);
#if 0 // error: assignment of read-only member ‘main()::A::i’
        a.i = 3;
#endif
        cout << a.i << endl;
    }

    return 0;
}
