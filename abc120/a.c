#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t A, B, C;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64"%"PRId64, &A, &B, &C);

    ans = ((B / A) > C) ? C : (B / A);

    printf("%"PRId64"\n", ans);
}
