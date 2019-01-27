#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, A, B;
    int64_t max, min;

    scanf("%"PRId64"%"PRId64"%"PRId64, &N, &A, &B);

    max = A < B ? A : B;

    if (A + B > N) min = A + B - N;
    else min = 0;

    printf("%"PRId64" %"PRId64"\n", max, min);
}
