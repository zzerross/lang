#include <iostream>
#include <map>

using namespace std;

auto main() -> int {
    map<string, size_t> m = {
        { "Apple", 0 },
        { "Banana", 1 },
    };

    const auto [iterator, inserted] = m.insert({ "Banana", 2 });
    cout << "inserted=" << inserted << endl;
    cout << "{ " << iterator->first << ", " << iterator->second << " } was exist" << endl;

    return 0;
}
