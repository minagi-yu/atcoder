#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main (int argc, char const *argv[])
{
    uint64_t N, K, A[(int)1e5];
    uint64_t bit[64] = {0}, x = 0, ans = 0;

    scanf("%"PRIu64"%"PRIu64, &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%"PRIu64, &A[i]);
        for (int j = 0; j < 64; j++) {
            if (A[i] & (1 << j)) bit[j]++;
        }
    }

    for (int i = 63; i >= 0; i--) {
        if (bit[i] * 2U < N) x |= (1 << i);
        if (x > K) x &= ~(1 << i);
    }

    for (int i = 0; i < N; i++) {
        ans += x ^ A[i];
    }

    printf("%"PRIu64"\n", ans);
}
