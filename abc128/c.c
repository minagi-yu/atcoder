#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int bitcount (uint16_t a)
{
    a = (a & 0x5555) + (a >> 1 & 0x5555);
    a = (a & 0x3333) + (a >> 2 & 0x3333);
    a = (a & 0x0f0f) + (a >> 4 & 0x0f0f);
    a = (a & 0x00ff) + (a >> 8 & 0x00ff);
    return a;
}

int main (int argc, char const *argv[])
{
    int64_t N, M, k[10], p[10];
    uint16_t s[10] = {0};
    int64_t tmp, ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64, &k[i]);
        for (int j = 0; j < k[i]; j++) {
            scanf("%"PRId64, &tmp);
            s[i] |= (1 << (tmp - 1));
        }
    }
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64, &p[i]);
    }

    for (uint16_t i = 0; i <= (0x3FF >> (10 - N)); i++) {
        tmp = 0;
        for (int j = 0; j < M; j++) {
            if (((bitcount(s[j] & i) % 2)) == p[j]) tmp++;
        }
        if (tmp == M) ans++;
    }

    printf("%"PRId64"\n", ans);
}
