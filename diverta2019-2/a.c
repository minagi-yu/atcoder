#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, K;
    intmax_t ans = 0;

    scanf("%jd%jd", &N, &K);

    if (K == 1) {
        ans = 0;
    } else {
        ans = N - K;
    }

    printf("%jd\n", ans);
}
