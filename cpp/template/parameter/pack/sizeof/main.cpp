#include <iostream>

using namespace std;

template<typename ...Ts> void func(Ts... args) {
    cout << sizeof...(args) << endl;
}

auto main() -> int {
    func(1, 2, 3, 4, 5);
    func("1", "2", "3");
    func(1, "2");
    func();

    return 0;
}
