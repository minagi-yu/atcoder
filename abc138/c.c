#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int compare (const void *a, const void *b)
{
    if(*(intmax_t *)a - *(intmax_t *)b < 0)
        return -1;
    if(*(intmax_t *)a - *(intmax_t *)b > 0)
        return 1;
    return 0;
}

int main (void)
{
    intmax_t N, v[50];
    double ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &v[i]);
    }

    qsort(v, N, sizeof(intmax_t), compare);

    ans = (v[0] + v[1]) / 2.0;
    for (size_t i = 2; i < N; i++) {
        ans = (ans + v[i]) / 2.0;
    }

    printf("%.6f\n", ans);

    return 0;
}
