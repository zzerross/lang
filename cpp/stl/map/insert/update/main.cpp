#include <map>
#include <iostream>

using namespace std;

int main() {
    map<string, size_t> m = {
        { "Apple", 0 },
        { "Banana", 1 },
        { "Coconut", 2 },
    };

    pair<map<string, size_t>::iterator, bool> r = m.insert({ "Coconut", 3 });
    cout << "insert=" << r.second
        << " key=" << r.first->first
        << " value=" << r.first->second
        << endl;

    if (!r.second) {
        r.first->second = 10;
        cout << "Value of Coconut was updated to " << m["Coconut"] << endl;
    }

    return 0;
}

#if 0
$ g++ main.cpp
$ ./a.out
insert=0 key=Coconut value=2
Value of Coconut was updated to 10
#endif
