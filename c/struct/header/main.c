#include <stdio.h>

int main() {
    struct {
        short id;
        char data[0];
    } __attribute__((packed)) header;

    printf("sizeof(header)=%lu\n", sizeof(header));

    return 0;
}

#ifdef test
$ gcc main.c
$ ./a.out

sizeof(header)=2
#endif
