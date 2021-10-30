#include <iostream>

using namespace std;

int main() {
    // error: cannot bind non-const lvalue reference of type ‘int&’ to an rvalue of type ‘int’
    // int& ref = 5;
    int&& ref = 5;
    ref = 3;
    cout << ref << endl;

    // error: cannot bind rvalue reference of type ‘int&&’ to lvalue of type ‘int’
    // int&& rref = ref;
    
    int& rref = ref;
    rref = 4;
    cout << ref << endl;

    return 0;
}
