#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    vector<int> data { 0, 1, 2, 3, 4 };

    copy(begin(data), end(data), ostream_iterator<int>(cout, ", "));

    return 0;
}
