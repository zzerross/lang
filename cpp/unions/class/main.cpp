#include <iostream>

using namespace std;

int main() {
    enum class X {
        A = 1,
    };

    enum class Y {
        A = 10,
    };

#if 0 // error: no match for ‘operator<<’ (operand types are ‘std::ostream’ 
      //        {aka ‘std::basic_ostream<char>’} and ‘main()::X’)
    cout << X::A << endl;
#endif
    cout << static_cast<int>(X::A) << endl;
    cout << static_cast<int>(Y::A) << endl;

    return 0;
}

#if 0
$ g++ %
$ ./a.out

1
10
#endif
