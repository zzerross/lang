#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    vector<double> doubles;

    cout << "input: ";

    // copies of the elements in the range [first, last) are
    // inserted at position (in the same order)
    doubles.insert(begin(doubles),         // iterator position
            istream_iterator<double>(cin), // InputIterator first
            istream_iterator<double>());   // InputIterator last (end of stream)

    cout << "     : ";
    for (const auto& value : doubles)
        cout << value << ' ';
    cout << endl;

    return 0;
}
#if 0
$ g++ main.cpp && ./a.out
input: 1.0 2.0 3.0
     : 1 2 3
#endif
