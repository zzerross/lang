#include <iostream>

using namespace std;

int main() {
    cout << __cplusplus << endl;

    return 0;
}

#if 0
$ make
g++ main.cpp && ./a.out
201402
g++ main.cpp -std=c++11 && ./a.out
201103
g++ main.cpp -std=c++14 && ./a.out
201402
g++ main.cpp -std=c++17 && ./a.out
201703
g++ main.cpp -std=c++2a && ./a.out
201709
#endif
