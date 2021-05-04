#include <cstdio>
#include <cmath>

int main() {
    for (double d = -3.0; d <= 3.0; d += 0.1) {
        if (0 < d)
            printf("%s", ((int) (d * 10)) % 10 ? "" : "\n");

        printf("ceil(%02.3lf) = %02.3lf\n", d, ceil(d));

        if (d < 0)
            printf("%s", ((int) (d * 10)) % 10 ? "" : "\n");
    }

    return 0;
}
