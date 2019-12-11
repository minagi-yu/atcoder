#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct job {
    intmax_t A;
    intmax_t B;
};

int comp (const void *a, const void *b)
{
    if(((struct job *)a)->A - ((struct job *)b)->A < 0) {
        return -1;
    }
    if(((struct job *)a)->A - ((struct job *)b)->A > 0) {
        return 1;
    }
    if(((struct job *)a)->B - ((struct job *)b)->B < 0) {
        return 1;
    }
    if(((struct job *)a)->B - ((struct job *)b)->B > 0) {
        return -1;
    }
    return 0;
}

int main (void)
{
    size_t N;
    intmax_t M;
    struct job job[(int)1e5];
    intmax_t ans = 0;

    scanf("%jd%jd", &N, &M);
    for (size_t i = 0; i < N; i++) {
        scanf("%jd%jd", &job[i].A, &job[i].B);
    }
    
    qsort(job, N, sizeof(struct job), comp);

    for (intmax_t i = 0; i < N; i++) {
        printf("%jd %jd\n", job[i].A, job[i].B);
    }

    intmax_t init = 0;
    for (intmax_t day = 1; day <= M; day++) {
        for (intmax_t i = init; i < N; i++) {
            if (job[i].A <= day) {
                ans += job[i].B;
                job[i].B = 0;
                init = (i + 1);
                break;
            }
        }
    }

    printf("%jd\n", ans);

    return 0;
}
