#include <iostream>

using namespace std;

auto main() -> int {
    cout << []() -> int { return 1234; } << endl;

    return 0;
}
