#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int64_t max(int64_t a, int64_t b)
{
    return a > b ? a : b;
}

int main (void)
{
    intmax_t A, B;
    intmax_t add, sub, mul, ans = 0;

    scanf("%jd%jd", &A, &B);

    add = A + B;
    sub = A - B;
    mul = A * B;

    ans = max(add, max(sub, mul));

    printf("%jd\n", ans);

    return 0;
}
