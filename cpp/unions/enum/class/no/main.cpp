#include <iostream>

using namespace std;

int main() {
    enum class E : int { };

    cout << "__cplusplus=" << __cplusplus << endl;

    E e0;
    cout << "e0=" << static_cast<int>(e0) << endl;

#if 201703L < __cplusplus 
    E e1{ 1 };
    cout << "e1=" << static_cast<int>(e1) << endl;
#endif

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
__cplusplus=201402
e0=0

$ g++ -std=c++17 main.cpp
__cplusplus=201703
e0=0

$ g++ -std=c++2a main.cpp
__cplusplus=201709
e0=0
e1=1
#endif
