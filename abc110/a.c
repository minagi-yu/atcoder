#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    int64_t A, B, C;
    int64_t max, ans = 0;

    scanf("%"PRId64"%"PRId64"%"PRId64, &A, &B, &C);

    max = A > B ? A : B;
    max = max > C ? max : C;

    ans = A + B + C + max * 10 - max;

    printf("%"PRId64"\n", ans);
}
