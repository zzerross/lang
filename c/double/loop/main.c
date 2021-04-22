#include <stdio.h>

int main() {
    int i = 0;

    for (double d = 0.0; d < 1.0; d += 0.1)
        printf("i=%2d d=%lf +%lf\n", i++, d, 0.1);

    return 0;
}
