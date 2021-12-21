#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    vector<string> words { "first", "fourth" };

    auto iter = words.emplace(++begin(words), 5, '2');

    words.emplace(++iter, "third");

    copy(begin(words), end(words), ostream_iterator<string> { cout, ", " });

    return 0;
}
