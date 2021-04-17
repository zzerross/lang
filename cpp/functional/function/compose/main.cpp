#include <functional>
#include <iostream>
#include <cmath>

using namespace std;

double twice(double x) {
    return x * 2;
}

auto compose(function<double(double)> f, function<double(double)> g) {
    return [f, g](double x) {
        return f(g(x));
    };
}

auto main() -> int {
    auto func = compose(twice, twice);

    cout << func(2) << endl;

    return 0;
}
