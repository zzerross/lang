#include <iostream>
#include <memory>

using namespace std;

int main() {
    shared_ptr<int> sp1 { new int {} };
    shared_ptr<int> sp2 { sp1 };

    cout << sp1 << ", " << sp1.use_count() << endl;
    cout << sp2 << ", " << sp2.use_count() << endl;

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
0x7fffc4bd9eb0, 2
0x7fffc4bd9eb0, 2
#endif
