#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

uint64_t get_gcd (uint64_t a, uint64_t b)
{
    if (b == 0) return a;
    else return get_gcd(b, a % b);
}

int main (int argc, char const *argv[])
{
    int64_t N, A[(int)1e5];
    int64_t l[(int)1e5], r[(int)1e5], tmp, ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &A[i]);
    }

    l[0] = 0;
    r[N - 1] = 0;
    for (int i = 1; i < N; i++) {
        l[i] = get_gcd(l[i - 1], A[i - 1]);
        r[N - i - 1] = get_gcd(A[N - i], r[N - i]);
    }

    for (int i = 0; i < N; i++) {
        tmp = get_gcd(l[i], r[i]);
        if (tmp > ans) ans = tmp;
    }

    printf("%"PRId64"\n", ans);
}
