#include <functional>
#include <iostream>

using namespace std;

auto main() -> int {
    function<double(double, double)> functions[] = { min<double>, max<double> };

    cout << functions[0](1, 2) << endl;
    cout << functions[1](1, 2) << endl;

    return 0;
}
