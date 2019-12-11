#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, A[100];
    double ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
    }

    for (size_t i = 0; i < N; i++) {
        ans += (1 / (double)A[i]);
    }
    ans = 1 / ans;

    printf("%.6f\n", ans);

    return 0;
}
