#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, A[(int)1e5];
    intmax_t ans = 0;

    scanf("%jd", &N);
    for (size_t i = 1; i <= N; i++) {
        scanf("%jd", &A[i]);
    }

    printf("%jd\n", ans);

    return 0;
}
