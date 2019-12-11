#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

struct a {
    intmax_t i;
    intmax_t A;
};

int compare (const void *a, const void *b)
{
    if(((struct a *)a)->A < ((struct a *)b)->A)
        return -1;
    if(((struct a *)a)->A > ((struct a *)b)->A)
        return 1;
    return 0;
}

int main (void)
{
    intmax_t N;
    struct a a[(int)1e5];
    intmax_t ans = 0;

    scanf("%jd", &N);
    for(size_t i = 0; i < N; i++) {
        scanf("%jd", &a[i].A);
        a[i].i = (i + 1);
    }

    qsort(a, N, sizeof(struct a), compare);

    for (size_t i = 0; i < N; i++) {
        printf("%jd", a[i].i);
        if (i < (N - 1)) 
            printf(" ");
        else
            printf("\n");
    }

    return 0;
}
