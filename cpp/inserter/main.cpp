#include <iostream>
#include <list>
#include <iterator>
#include <set>

using namespace std;

auto main() -> int {
    list<int> l = { 1, 2, 3 };
    fill_n(inserter(l, l.end()), 5, 0);
    copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    {
        multiset<int> s = { 1, 2, 3 };
        fill_n(inserter(s, s.end()), 5, 0);
        copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    {
        multiset<int> s = { -1, -2, -3 };
        fill_n(inserter(s, s.end()), 5, 0);
        copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    return 0;
}
