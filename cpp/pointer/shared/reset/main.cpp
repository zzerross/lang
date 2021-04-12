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

    auto sp1 = make_shared<Struct>();
    cout << "uniquue=" << sp1.unique() << " count=" << sp1.use_count() << endl;

    auto sp2 = sp1;
    cout << "uniquue=" << sp1.unique() << " count=" << sp1.use_count() << endl;

    sp2.reset();
    cout << "uniquue=" << sp1.unique() << " count=" << sp1.use_count() << endl;

    return 0;
}
