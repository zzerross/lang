#include <functional>
#include <iostream>
#include <map>

using namespace std;

double add(double a, double b) {
    return a + b;
}

auto main() -> int {
    map<string, function<double(double, double)>> functions;

    functions["+"] = add;

    cout << functions["+"](1.0, 2.0) << endl;

    return 0;
}
