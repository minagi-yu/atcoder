#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (void)
{
    intmax_t N, K, Q, A[(int)1e5];
    intmax_t ans[(int)1e5] = {0};

    scanf("%jd%jd%jd", &N, &K, &Q);
    for (size_t i = 0; i < Q; i++) {
        scanf("%jd", &A[i]);
        ans[A[i] - 1]++;
    }

    for (size_t i = 0; i < N; i++) {
        if (ans[i] > (Q - K)) puts("Yes");
        else puts("No");
    }

    return 0;
}
