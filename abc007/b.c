#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>

int main (int argc, char const *argv[])
{
    char A[12];

    gets(A);

    if (strcmp(A, "a") == 0) {
        puts("-1");
    } else {
        puts("a");
    }

    return 0;
}
