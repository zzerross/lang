#include <functional>
#include <iostream>

using namespace std;

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
