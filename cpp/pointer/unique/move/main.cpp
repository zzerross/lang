#include <memory>
#include <iostream>

using namespace std;

#define print() cout << this << ": " << __PRETTY_FUNCTION__ << endl

auto main() -> int {
    struct Struct {
        Struct() {
            print();
        }

        ~Struct() {
            print();
        }

        void dump() {
            print();
        }
    };

    auto up = make_unique<Struct>();
    cout << "up=" << up.get() << endl;

#if 0 // error: use of deleted function ‘std::unique_ptr<_Tp, _Dp>::unique_ptr(const std::unique_ptr<_Tp, _Dp>&) [with _Tp = main()::Struct; _Dp = std::default_delete<main()::Struct>]’
    auto dp = up;
#endif

    auto cp = *up;

    auto mv = move(up);
    mv->dump();
    cout << "up=" << up.get() << endl;

    return 0;
}
