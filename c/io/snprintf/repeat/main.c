#include <stdio.h>

int main() {
    char buf[2] = "";

    size_t len = 0;
    
    len += snprintf(&buf[len], sizeof(buf) - len, "%s", "A");
    len += snprintf(&buf[len], sizeof(buf) - len, "%s", "B");
    len += snprintf(&buf[len], sizeof(buf) - len, "%s", "C");

    printf("buf=\"%s\"\n", buf);

    return 0;
}

#ifdef test

$ gcc main.c
$ ./a.out

buf="A"

#endif
