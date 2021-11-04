#include <iostream>

using namespace std;

int main() {
    int a[]{ 0, 1, 2, 3, 4 };

    cout << distance(begin(a), end(a)) << endl;

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
5
#endif
