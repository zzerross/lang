#include <iostream>
#include <memory>

using namespace std;

template <typename T>
using Ptr = shared_ptr<T>;

int main() {
    Ptr<int> i = make_shared<int>(3);

    cout << *i << endl;

    return 0;
}
