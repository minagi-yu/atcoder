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
    long long N, K;
    long long h[(int)1e5];
    long long i, min = (int)1e9;

    scanf("%lld %lld", &N, &K);

    for (i = 0; i < N; i++) {
        scanf("%lld", &h[i]);
    }

    qsort(h, N, sizeof(long long), compare);

    for (i = 0; i <= (N - K); i++) {
        if ((h[i + K - 1] - h[i]) < min) min = h[i + K - 1] - h[i];
    }

    printf("%lld\n", min);

}
