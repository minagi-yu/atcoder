#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct str {
    int64_t B;
    int64_t C;
};

int compare (const void *a, const void *b)
{
    if(*(int64_t *)a - *(int64_t *)b < 0)
        return -1;
    if(*(int64_t *)a - *(int64_t *)b > 0)
        return 1;
    return 0;
}

int comparestr (const void *a, const void *b)
{
    if(((struct str *)a)->C - ((struct str *)b)->C < 0)
        return 1;
    if(((struct str *)a)->C - ((struct str *)b)->C > 0)
        return -1;
    return 0;
}

int main (int argc, char const *argv[])
{
    int64_t N, M, A[(int)1e5];
    struct str BC[(int)1e5];
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &A[i]);
    }
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64"%"PRId64, &BC[i].B, &BC[i].C);
    }

    qsort(A, N, sizeof(uint64_t), compare);
    qsort(BC, M, sizeof(struct str), comparestr);

    for (int i = 0, j = 0; i < N; i++) {
        if (A[i] > BC[j].C) break;
        A[i] = BC[j].C;
        BC[j].B--;
        if (BC[j].B == 0) j++;
    }

    for (int i = 0; i < N; i++) {
        ans += A[i];
    }

    printf("%"PRId64"\n", ans);
}
