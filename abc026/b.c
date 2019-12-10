#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

const double PI = 3.14159265359;

int desc(const void *a, const void *b)
{
    if (*(intmax_t *)a > *(intmax_t *)b)
        return -1;
    else if (*(intmax_t *)a < *(intmax_t *)b)
        return 1;
    else
        return 0;
}

int main(void)
{
    size_t N;
    intmax_t R[1000];
    double ans = 0.0;

    scanf("%zd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &R[i]);
    }

    qsort(R, N, sizeof(intmax_t), desc);

    for (size_t i = 0; i < N; i++) {
        if (i % 2)
            ans -= R[i] * R[i];
        else
            ans += R[i] * R[i];
    }

    ans *= PI;

    printf ("%.7f\n", ans);

    return 0;
}
