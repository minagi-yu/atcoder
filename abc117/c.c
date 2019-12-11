#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int compare (const void *a, const void *b)
{
    if(*(int64_t *)a - *(int64_t *)b < 0)
        return 1;
    if(*(int64_t *)a - *(int64_t *)b > 0)
        return -1;
    return 0;
}

int main (int argc, char const *argv[])
{
    int64_t N, M, X[(int)1e5];
    int64_t sub[(int)1e5 - 1], ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64, &X[i]);
    }

    qsort(X, M, sizeof(int64_t), compare);

    for (int i = 0; i < M; i++) {
        if (i != 0) sub[i - 1] = X[i - 1] - X[i];
    }

    qsort(sub, (M - 1), sizeof(int64_t), compare);

    for(int i = (N - 1); i < M; i++) {
        ans += sub[i];
    }

    printf("%"PRId64"\n", ans);
}
