#include <iostream>

using namespace std;

class B {
public:
    // globally defined calss only can have
    // constexpr member fields that must have static and initializer.
    constexpr static int i = 3;
};

auto main() -> int {
    class A {
    public:
#if 0 // error: non-static data member ‘i’ declared ‘constexpr’
        constexpr int i;
#endif
#if 0 // error: ‘constexpr’ static data member ‘i’ must have an initializer
      // error: local class ‘class main()::A’ shall not have static data member ‘const int main()::A::i’ [-fpermissive]
        constexpr static int i;
#endif
#if 0 // error: local class ‘class main()::A’ shall not have static data member ‘constexpr const int main()::A::i’ [-fpermissive]
        constexpr static int i = 9;
#endif
    };

    cout << B::i << endl;

    B b;
    cout << b.i << endl;

#if 0 // error: ‘b’ is not a class, namespace, or enumeration
    cout << b::i << endl;
#endif

    return 0;
}
