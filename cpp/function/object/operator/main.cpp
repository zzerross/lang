#include <iostream>

using namespace std;

class Sum {
public:
    template <typename T>
    T operator()(T a, T b) {
        return a + b;
    }
};

int main() {
    Sum sum;

    cout << sum(1, 2) << endl;
    cout << sum(0.9, 1.5) << endl;

    return 0;
}
