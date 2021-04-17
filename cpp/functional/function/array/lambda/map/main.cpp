#include <functional>
#include <iostream>
#include <map>

using namespace std;

auto main() -> int {
    map<string, function<double(double, double)>> arithmetics;

    arithmetics["+"] = [](double a, double b) { return a + b; };
    arithmetics["-"] = [](double a, double b) { return a - b; };
    arithmetics["*"] = [](double a, double b) { return a * b; };
    arithmetics["/"] = [](double a, double b) { return a / b; };

    double a = 2.0;
    double b = 3.0;

    cout << arithmetics["+"](a, b) << endl;
    cout << arithmetics["-"](a, b) << endl;
    cout << arithmetics["*"](a, b) << endl;
    cout << arithmetics["/"](a, b) << endl;

    for (auto& operation : arithmetics)
        cout << a << operation.first << b << "=" << operation.second(a, b) << endl;

    return 0;
}
