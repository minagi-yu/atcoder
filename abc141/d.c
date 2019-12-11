#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>
#include <string.h>
#include <math.h>

int compare (const void *a, const void *b)
{
    if(*(uintmax_t *)a < *(uintmax_t *)b)
        return 1;
    if(*(uintmax_t *)a > *(uintmax_t *)b)
        return -1;
    return 0;
}

int main (void)
{
    uintmax_t N, M, A[(int)1e5];
    uintmax_t ans = 0, msb = (INTMAX_C(1) << 63);
    size_t i;

    scanf("%ju%ju", &N, &M);
    for (i = 0; i < N; i++) {
        scanf("%ju", &A[i]);
    }

    qsort(A, N, sizeof(uintmax_t), compare);

    while((msb & A[0]) == 0) msb >>= 1;

    i = 0;
    do {
        if (A[i] & msb) {
            A[i] >>= 1;
            M--;
            i++;
        } else {
            msb >>= 1;
            while (A[i] & msb) i++;
            qsort(A, (i + 1), sizeof(uintmax_t), compare);
            i = 0;
        }
        if (i > N) i = 0;
    } while (M && msb);

    for (i = 0; i < N; i++) {
        ans += A[i];
    }

    printf("%jd\n", ans);

    return 0;
}
