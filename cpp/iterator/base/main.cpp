#include <iostream>
#include <vector>

using namespace std;

int main() {
    // The base iterator refers to the element that is next
    // to the element the reverse_iterator is currently pointing to. 
    vector<int> v = { 0, 1, 2, 3, 4 };

    for (auto rbegin = v.rbegin(), rend = v.rend(); rend != v.rbegin(); rend--)
        cout << "  rend=" << *rend 
            << " next is base{"
            << "begin=" << *rbegin.base()
            << " rend=" << *rend.base()
            << "}" 
            << endl;

    for (auto rbegin = v.rbegin(), rend = v.rend(); rbegin != v.rend(); rbegin++)
        cout << "rbegin=" << *rbegin 
            << " previous is base{"
            << "begin=" << *rbegin.base()
            << " rend=" << *rend.base()
            << "}"
            << endl;

    return 0;
}
