#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

intmax_t min(intmax_t a, intmax_t b)
{
    if (a > b) 
        return b;
    else
        return a;
}

int main(void)
{
    intmax_t N, B[100];
    intmax_t A[100], ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < (N - 1); i++) {
        scanf("%jd", &B[i]);
    }

    A[0] = B[0];
    for (size_t i = 1; i < (N - 1); i++) {
        A[i] = min(B[i - 1], B[i]);
    }
    A[N - 1] = B[N - 2];

    for (size_t i = 0; i < N; i++) {
        ans += A[i];
    }

    printf("%jd\n", ans);

    return 0;
}
