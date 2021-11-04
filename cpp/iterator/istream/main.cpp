#include <numeric>
#include <iostream>
#include <iterator>

using namespace std;

int main() {
    auto first = istream_iterator<int>(cin);
    auto last = istream_iterator<int>();
    int init = 0;

    cout << accumulate(first, last, init) << endl;

    return 0;
}

#if 0
$ g++ main.cpp && ./a.out
1 2 3 4 5 <ctrl+d> 
15

$ ./a.out
1
2
<ctrl+d> 
3

$ cat input.txt
1 2 3 4 5 6 7 8 9 10
$ ./a.out < input.txt
55
#endif
