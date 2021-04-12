#include <memory>
#include <iostream>

using namespace std;

auto main() -> int {
    struct Struct {
        Struct() {
            cout << __func__ << endl;
        }

        ~Struct() {
            cout << __func__ << endl;
        }
    };

    auto up = make_unique<Struct>();

    return 0;
}
