#include <stdio.h>
#include <complex.h>

int main() {
    // imaginary unit square
    double complex z = I * I;

    double r = creal(z);
    double i = cimag(z);

    printf("I * I = %lf%+lfi\n", r, i);

    return 0;
}
