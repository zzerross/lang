#include <iostream>

using namespace std;

int main() {
#define ONE 1
#define TWO 2

    int lValueHasAddress = ONE;
    constexpr int constExpr = TWO;

    lValueHasAddress = constExpr;

    cout << "&lValueHasAddress=" << &lValueHasAddress << endl;
    cout << "       &constExpr=" << &constExpr << endl;

#if 0
    cout << "             &ONE=" << &ONE << endl;

    main.cpp: In function ‘int main()’:
    main.cpp:6:13: error: lvalue required as unary ‘&’ operand
        6 | #define ONE 1
          |             ^
    main.cpp:16:38: note: in expansion of macro ‘ONE’
       16 |     cout << "             &ONE=" << &ONE << endl;
          |                                      ^~~
#endif
    
#if 0
    ONE = 3;

    main.cpp: In function ‘int main()’:
    main.cpp:30:11: error: lvalue required as left operand of assignment
       30 |     ONE = 3;
          |           ^
#endif

    return 0;
}
