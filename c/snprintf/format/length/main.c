#include <stdio.h>

int main() {
    char a[] = "01234";
    char b = '5';
    char c[] = "6789";

    printf("%d\n", snprintf(NULL, 0, "%s%c%s", a, b, c));

    return 0;
}
