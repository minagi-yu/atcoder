#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t T, X;

    scanf("%"PRId64"%"PRId64, &T, &X);

    printf("%f\n", (double)T / (double)X);

    return 0;
}
