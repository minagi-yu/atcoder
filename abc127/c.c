#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int main (int argc, char const *argv[])
{
    int64_t N, M, L[(int)1e5], R[(int)1e5];
    int64_t maxl, minr;

    scanf("%"PRId64"%"PRId64, &N, &M);
    for (int i = 0; i < M; i++) {
        scanf("%"PRId64"%"PRId64, &L[i], &R[i]);
    }

    maxl = L[0];
    minr = R[0];

    for (int i = 1; i < M; i++) {
        if (maxl < L[i]) maxl = L[i];
        if (minr > R[i]) minr = R[i];
    }

    if (maxl <= minr) {
        printf("%"PRId64"\n", minr - maxl + 1);
    } else {
        puts("0");
    }
}
