#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, M, K, A;
    int64_t like[30] = {0}, ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &K);
        for (int j = 0; j < K; j++) {
            scanf("%"PRId64, &A);
            like[A - 1]++;
        }
    }

    for (int i = 0; i < M; i++) {
        if (like[i] == N) ans++;
    }

    printf("%"PRId64"\n", ans);

    return 0;
}
