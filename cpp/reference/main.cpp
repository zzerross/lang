#include <stdio.h>

int main() {
    int variable = 3;
    int& reference = variable;

    reference = 4;

    printf(" &variable=%p, %d\n", &variable, variable);
    printf("&reference=%p, %d\n", &reference, reference);

    return 0;
}

#if 0
$ g++ main.cpp
$ ./a.out

 &variable=0x7fffc6e6901c, 4
&reference=0x7fffc6e6901c, 4
#endif
