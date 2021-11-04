#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> sp1 { new int {} };
    cout << sp1.unique() << endl;

    shared_ptr<int> sp2 { sp1 };
    cout << sp1.unique() << endl;

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
1
0
#endif
