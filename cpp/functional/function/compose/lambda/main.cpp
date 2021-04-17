#include <functional>
#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
auto compose(function<T(T)> f, function<T(T)> g) {
    return [f, g](T x) {
        return f(g(x));
    };
}

auto main() -> int {
    auto func = compose<double>(
        [](auto x) {
            return x * 2;
        },
        [](auto x) {
            return x * 3;
        }
    );

    cout << func(2) << endl;

    return 0;
}
