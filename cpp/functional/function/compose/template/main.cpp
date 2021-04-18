#include <functional>
#include <iostream>

using namespace std;

double twice(double x) {
    return x * 2;
}

template <typename R, typename P>
auto compose(function<R(P)> f, function<R(P)> g) {
    return [f, g](P x) {
        return f(g(x));
    };
}

auto main() -> int {
    auto func = compose<double, double>(twice, twice);

    cout << func(2) << endl;

    return 0;
}
