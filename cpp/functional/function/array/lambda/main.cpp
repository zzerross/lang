#include <functional>
#include <iostream>

using namespace std;

auto main() -> int {
    function<double(double, double)> arithmetics[] = {
        [](double a, double b) {
            return a + b;
        },
        [](double a, double b) {
            return a - b;
        },
        [](double a, double b) {
            return a * b;
        },
        [](double a, double b) {
            return a / b;
        },
    };

    for (auto operation : arithmetics)
        cout << operation(2, 3) << endl;

    return 0;
}
