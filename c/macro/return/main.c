#include <stdio.h>

#define ADD(a, b) ({ \
    int r = 0; \
    r = a + b; \
    r; \
})

int main() {
    printf("%d\n", ADD(1, 2));
    
    return 0;
}
