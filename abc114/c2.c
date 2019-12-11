#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int compare (const void *a, const void *b)
{
    if(*(int64_t *)a - *(int64_t *)b < 0)
        return -1;
    if(*(int64_t *)a - *(int64_t *)b > 0)
        return 1;
    return 0;
}

int main (int argc, char const *argv[])
{
    int64_t N, A[(int)1e5];
    int64_t ans = 0, died = 0;

    scanf("%"PRId64, &N);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &A[i]);
    }

    qsort(A, N, sizeof(int64_t), compare);

    while ((N - died) > 1) {
        for (int i = 0; i < N; i++) {
            
        }
    }

    printf("%"PRId64"\n", ans);

    return 0;
}
