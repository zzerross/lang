#include <stdio.h>

int test(void) {
    return printf("%s\n", __func__);
}
