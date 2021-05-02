#include <iostream>

using namespace std;

int main() {
#define S 4
    char buf[S];

    cin >> buf; // it can be overflowed

    for (int i = 0; i <= S; i++)
        printf("[%d] = %c\n", i, buf[i]);

    return 0;
}
