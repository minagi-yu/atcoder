#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    size_t N;
    uint_least64_t A;
    intmax_t num[64] = {};
    intmax_t ans = 0;

    scanf("%zu", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%"SCNuFAST64, &A);
        for (unsigned int j = 0; (1ULL << j) < (1ULL << 61); j++) {
            if (A & (1ULL << j))
                num[j]++;
        }
    }

    for (size_t i = 0; i < 64; i++) {
        intmax_t tmp = 1;
        tmp *= num[i] % ((int)1e9 + 7);
        tmp %= (int)1e9 + 7;
        tmp *= (N - num[i]) % ((int)1e9 + 7);
        tmp %= (int)1e9 + 7;
        tmp *= (1ULL << i) % ((int)1e9 + 7);
        tmp %= (int)1e9 + 7;
        ans += tmp;
        ans %= (int)1e9 + 7;
    }

    printf("%jd\n", ans);

    return 0;
}
