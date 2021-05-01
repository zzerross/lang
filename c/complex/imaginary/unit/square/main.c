#include <stdio.h>
#include <complex.h>

int main() {
    // refer https://www.youtube.com/watch?v=Ko6Ri9zKADY
    printf(
        " Imaginary Unit Square  \n"
        " i ^ 2 = -1             \n"
        "          ^             \n"
        "          |             \n"
        "          + 2i          \n"
        "          |             \n"
        "          + i           \n"
        "          |             \n"
        " <--+--+--+--+--+-->    \n"
        "   -2 -1  |  1  2       \n"
        "          + -i          \n"
        "          |             \n"
        "          + -2i         \n"
        "          |             \n"
    );

    printf("1 rotates  90 degrees:\n");
    double complex z = 1 * I;
    double r = creal(z);
    double i = cimag(z);
    printf("1 * I     = %+02.1lf %+.1lfi\n", r, i);

    printf("1 rotates 180 degrees:\n");
    z = 1 * I * I;
    r = creal(z);
    i = cimag(z);
    printf("1 * I * I = %+02.1lf %+.1lfi\n", r, i);

    return 0;
}
