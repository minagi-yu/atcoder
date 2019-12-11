#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct drink {
    int64_t A;
    int64_t B;
};

int compare (const void *a, const void *b)
{
    if(((struct drink *)a)->A - ((struct drink *)b)->A < 0)
        return -1;
    if(((struct drink *)a)->A - ((struct drink *)b)->A > 0)
        return 1;
    return 0;
}

int main (int argc, char const *argv[])
{
    int64_t N, M;
    struct drink d[(int)1e5];
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64"%"PRId64, &d[i].A, &d[i].B);
    }

    qsort(d, N, sizeof(struct drink), compare);

    for (int i = 0; i < N; i++) {
        if (d[i].B < M) {
            ans += d[i].A * d[i].B;
            M -= d[i].B;
        } else {
            ans += d[i].A * M;
            break;
        }
    }
    
    printf("%"PRId64"\n", ans);
}
