#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int compare (const void *a, const void *b)
{
    if(*(int64_t *)a - *(int64_t *)b < 0)
        return -1;
    if(*(int64_t *)a - *(int64_t *)b > 0)
        return 1;
    return 0;
}

int64_t V[50];
int64_t r, l;

int popl (void)
{
    return V[l++];
}

void pushl (int64_t a)
{
    V[--l] = a;
}

int popr (void)
{
    return V[r--];
}

void pushr (int64_t a)
{
    V[++r] = a;
}

int main (int argc, char const *argv[])
{
    int64_t N, K;
    int64_t ans = 0;

    scanf("%"PRId64"%"PRId64, &N, &K);
    for (int i = 0; i < N; i++) {
        scanf("%"PRId64, &V[i]);
    }

    l = 0;
    for (int i = 0; (i <= K) && (i <= N); i++) {
        int64_t idx = 0, a[50] = {0};

        if (i > 0) a[idx++] = popl();

        r = N - 1;
        for (int j = 0; (i + j) <= K; j++) {
            
        }
    }
    

    printf("%"PRId64"\n", ans);
}
