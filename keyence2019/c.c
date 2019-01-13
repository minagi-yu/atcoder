#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    if( *(long long*)a - *(long long*)b < 0 )
        return 1;
    if( *(long long*)a - *(long long*)b > 0 )
        return -1;
    return 0;
}

int main(int argc, char *argv[])
{
    long long N, A[(int)1e5], B[(int)1e5];
    long long sub[(int)1e5];
    long long i, minus = 0, ans = 0;

    scanf("%lld", &N);
    for (i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    for (i = 0; i < N; i++) {
        scanf("%lld", &B[i]);
        sub[i] = A[i] - B[i];
    }

    qsort(sub, N, sizeof(long long), compare);

    for (i = 0; i < N; i++) {
        if (sub[i] >= 0) continue;
        minus += sub[i];
        ans++;
    }

    for (i = 0; i < N; i++) {
        if (minus >= 0) break;
        if (sub[i] <= 0) {
            puts("-1");
            return 0;
        }
        minus += sub[i];
        ans++;
    }

    printf("%lld\n", ans);

    return 0;
}
