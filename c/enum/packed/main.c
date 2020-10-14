#include <stdio.h>

int main() {
    enum _A {
        A,
    };

    enum _B {
        B = 0xffff,
    } __attribute__((packed));

    enum _C {
        C,
    } __attribute__((packed));

    enum _A a = A;
    enum _B b = B;
    enum _C c = C;

    printf("sizeof(a)=%lubytes\n", sizeof(a));
    printf("sizeof(b)=%lubytes\n", sizeof(b));
    printf("sizeof(c)=%lubytes\n", sizeof(c));

    return 0;
}

#ifdef test
$ gcc main.c 
$ ./a.out
sizeof(a)=4bytes
sizeof(b)=2bytes
sizeof(c)=1bytes

$ gcc -fshort-enums main.c
$ ./a.out
sizeof(a)=1bytes
sizeof(b)=2bytes
sizeof(c)=1bytes
#endif
