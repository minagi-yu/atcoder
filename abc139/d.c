#include <stdio.h>
#include <stdint.h>

int main (void)
{
    intmax_t N;
    intmax_t ans = 0;

    scanf("%jd", &N);

    ans = N * (N - 1) / 2;

    printf("%jd\n", ans);

    return 0;
}
