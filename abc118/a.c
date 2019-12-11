#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t A, B;

    scanf("%"PRId64"%"PRId64, &A, &B);

    if (B % A) {
        printf("%"PRId64"\n", B - A);
    } else {
        printf("%"PRId64"\n", B + A);
    }

    return 0;
}
