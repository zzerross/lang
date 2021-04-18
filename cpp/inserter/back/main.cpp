#include <iostream>
#include <list>
#include <iterator>
#include <set>

using namespace std;

auto main() -> int {
    {
        list<int> l = { 1, 2, 3 };
        fill_n(inserter(l, l.end()), 5, 0);
        copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    {
        list<int> l = { 1, 2, 3 };
        fill_n(back_inserter(l), 5, 0);
        copy(l.begin(), l.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

#if 0 // error: ‘class std::multiset<int>’ has no member named ‘push_back’
    {
        multiset<int> s = { 1, 2, 3 };
        fill_n(back_inserter(s), 5, 0);
        copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }

    {
        multiset<int> s = { -1, -2, -3 };
        fill_n(back_inserter(s), 5, 0);
        copy(s.begin(), s.end(), ostream_iterator<int>(cout, " "));
        cout << endl;
    }
#endif

    return 0;
}
