#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    intmax_t N, W[100];
    intmax_t sum = 0, ans = 0;

    scanf("%jd", &N);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd", &W[i]);
        sum += W[i];
    }

    ans = sum;
    intmax_t tmp = 0;
    for (size_t i = 0; i < N; i++) {
        tmp += W[i];
        if (labs(tmp - (sum - tmp)) < ans) ans = labs(tmp - (sum - tmp));
    }

    printf("%jd\n", ans);
}
