#include <stdio.h>

int main (void)
{
    long long N, H, W, A[1000], B[1000];
    int i, ans;

    scanf("%lld %lld %lld", &N, &H, &W);

    for (i = 0; i < N; i++) {
        scanf("%lld %lld", &A[i], &B[i]);
        if ((A[i] >= H) && (B[i] >= W)) ans++;
    }

    printf("%d\n", ans);
}
