#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, A[200000];
    intmax_t sum = 0, tmp = 0, ans = 0;
    size_t i;

    scanf("%jd", &N);
    for (i = 0; i < N; i++) {
        scanf("%jd", &A[i]);
        sum += A[i];
    }

    i = 0;
    while ((tmp * 2) <= sum)
        tmp += A[i++];

    i--;
    if ((tmp * 2) == sum)
        ans = 0;
    else if ((tmp - (sum - tmp)) < ((sum - tmp + A[i]) - (tmp - A[i])))
        ans = tmp - (sum - tmp);
    else
        ans = (sum - tmp + A[i]) - (tmp - A[i]);

    printf("%jd\n", ans);

    return 0;
}
