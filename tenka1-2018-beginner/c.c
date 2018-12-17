#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    if( *(long long*)a - *(long long*)b < 0 )
        return -1;
    if( *(long long*)a - *(long long*)b > 0 )
        return 1;
    return 0;
}

int main (void)
{
    long long N, A[(int)1e5];
    long long i, ans = 0, bsb, sbs;

    scanf("%lld", &N);

    for (i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }

    qsort(A, N, sizeof(long long), compare);

    if (N % 2) {
        for (i = 0; i < ((N - 3) / 2); i++) ans += -2 * A[i];
        sbs  = -1 * A[i]; bsb  = -2 * A[i++];
        sbs += -1 * A[i]; bsb +=  1 * A[i++];
        sbs +=  2 * A[i]; bsb +=  1 * A[i++];
        ans += (sbs > bsb) ? sbs : bsb;
        for (;i < N; i++) ans += 2 * A[i];
    } else {
        for (i = 0; i < ((N - 2) / 2); i++) ans += -2 * A[i];
        ans += -1 * A[i++];
        ans +=  1 * A[i++];
        for (;i < N; i++) ans += (2 * A[i]);
    }

    printf("%lld\n", ans);

    return 0;
}
