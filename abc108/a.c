#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t K;

    scanf("%"PRId64, &K);

    printf("%"PRId64"\n", (K / 2) * (K / 2 + (K % 2 ? 1 : 0)));

    return 0;
}
