#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
    string str { "01234" };

    vector<string> words;

    words.emplace_back(str, 1, 3);
    words.emplace_back(str, 2, 4);

    copy(begin(words), end(words), ostream_iterator<string> { cout, ", " });

    return 0;
}
