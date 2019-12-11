#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N;
    intmax_t ans = 0;

    scanf("%jd", &N);

    for (int i = 1; i < (N / 2); i++) {
        ans++;
    }
    if (N % 2) ans++;
    if (N == 1) ans--;

    printf("%jd\n", ans);

    return 0;
}
