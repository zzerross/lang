#include <iostream>
#include <iomanip>
#include <list>
#include <numeric>

using namespace std;

double divide(double numerator, double denominator) {
    double share = numerator / denominator;

    cout << setw(5) << numerator << " / " << denominator << " = " << share << endl;

    return share;
}

auto main() -> int {
    list<double> l = { 2.0, 4.0 };

    auto foldl = accumulate(
        l.begin(),
        l.end(),
        1.0,
        divide);

    auto foldr = accumulate(
        l.rbegin(),
        l.rend(),
        1.0,
        divide);

    cout << foldl << endl;
    cout << foldr << endl;

    return 0;
}
