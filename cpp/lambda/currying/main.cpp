#include <functional>
#include <iostream>

using namespace std;

template<typename F, typename... A>
auto curry(F func, A... args) {
    return [=](auto... last) {
        return func(args..., last...);
    };
}

int areaof(int h, int w) {
    return h * w;
}

int volumeof(int h, int w, int l) {
    return h * w * l;
}

auto main() -> int {
    cout << curry(areaof, 2)(3) << endl;

    cout << curry(volumeof, 2, 3)(4) << endl;

    return 0;
}
