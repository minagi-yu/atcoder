#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t K, X;
    intmax_t ans = 0;

    scanf("%jd%jd", &K, &X);

    for (intmax_t i = X - (K - 1); i < X + K; i++) {
        printf("%jd ", i);
    }
    puts("");

    return 0;
}
