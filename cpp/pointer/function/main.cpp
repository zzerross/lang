#include <cstdio>

int main() {
    int (*func) () = main;

    printf("func=%p\n", func);
    printf("main=%p\n", main);

    return 0;
}
