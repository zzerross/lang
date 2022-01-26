#include <map>
#include <iostream>

using namespace std;

int main() {
    map<string, int> m;

    auto v = m["A"];

    for (const auto& i : m)
        cout << "[" << i.first << "]=" << i.second << endl;

    return 0;
}
