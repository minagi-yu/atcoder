#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, a[(int)2e5 + 1];
    intmax_t box[(int)2e5 + 1] = {0}, M = 0;

    scanf("%jd", &N);
    for (size_t i = 1; i <= N; i++) {
        scanf("%jd", &a[i]);
    }

    for (size_t i = N; i > 0; i--) {
        intmax_t balls = 0;
        for (size_t j = (i * 2); j <= N; j += i) {
            balls += box[j];
        }
        if (a[i] != (balls % 2)) {
            M++;
            box[i] = 1;
        }
    }

    printf("%jd\n", M);
    if (M <= 0) return 0;
    for (size_t i = 1; i <= N; i++) {
        if (box[i]) {
            printf("%zd", i);
            if (--M) {
                printf(" ");
            } else {
                printf("\n");
                break;
            }
        }
    }

    return 0;
}
