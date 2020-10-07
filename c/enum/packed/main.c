#include <stdio.h>

int main() {
    enum _A {
        A,
    };

    enum _B {
        B,
    } __attribute__ ((packed));

    enum _A a = A;
    enum _B b = B;

    printf("sizeof(a)=%lubytes\n", sizeof(a));
    printf("sizeof(b)=%lubytes\n", sizeof(b));

    return 0;
}

#ifdef test
$ gcc main.c 
$ ./a.out
sizeof(a)=4bytes
sizeof(b)=1bytes

$ gcc -fshort-enums main.c
sizeof(a)=1bytes
sizeof(b)=1bytes
#endif
