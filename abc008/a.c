#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t S, T;

    scanf("%"PRId64"%"PRId64, &S, &T);

    printf("%"PRId64"\n", T - S + 1);

    return 0;
}
