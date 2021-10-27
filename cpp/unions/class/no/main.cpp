#include <iostream>

using namespace std;

int main() {
    enum class E : int { };

#if 0 // error: cannot convert ‘int’ to ‘main()::E’ in initialization
    E e2{ 0 };
#else
    E e1;
    cout << static_cast<int>(e1) << endl;
#endif

    return 0;
}

#if 0
$ g++ main.cpp
$ ./a.out

0
#endif
