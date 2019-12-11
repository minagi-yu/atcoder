#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

uint64_t get_gcd (uint64_t a, uint64_t b)
{
    if (b == 0) return a;
    else return get_gcd(b, a % b);
}

int main (int argc, char const *argv[])
{
    int64_t N, A[(int)1e5];
    int64_t ans = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &A[i]);
    }

    ans = A[0];
    for (int i = 1; i < N; i++) {
        ans = get_gcd(ans, A[i]);
    }

    printf("%"PRId64"\n", ans);

    return 0;
}
