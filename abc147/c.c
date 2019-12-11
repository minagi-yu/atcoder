#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main (void)
{
    intmax_t N, A[15], x[15][14], y[15][14];
    intmax_t ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
        for (size_t j = 0; j < A[i]; j++)
            scanf("%jd%jd", &x[i][j], &y[i][j]);
    }

    for (uint_least16_t i = 0; i <= (0x7fff >> (15 - N)); i++) {
        bool flag = true;
        for (uintmax_t j = 0; j < N; j++) {
            if (!(i & (1 << j)))
                continue;
            for (uintmax_t k = 0; k < A[j]; k++) {
                if ((i & (1 << (x[j][k] - 1))) != (y[j][k] << (x[j][k] - 1)))
                    flag = false;
            }
        }
        if (flag) {
            uintmax_t bits = 0;
            for (uint_least16_t mask = 1; mask != 0; mask <<= 1) {
                if (i & mask)
                    bits++;
            }
            if (bits > ans)
                ans = bits;
        }
    }

    printf("%jd\n", ans);

    return 0;
}
