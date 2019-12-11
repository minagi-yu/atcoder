#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N;
    double ans;

    scanf("%jd", &N);

    ans = (N / 2 + (N % 2)) / (double)N;

    printf("%f\n", ans);

    return 0;
}
