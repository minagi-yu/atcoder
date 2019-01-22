#include <stdio.h>

int main(int argc, char *argv[])
{
    long long N, h[100], k[100] = {0};
    long long i, l, r, ans = 0;

    scanf("%lld", &N);
    for (i = 0; i < N; i++) {
        scanf("%lld", &h[i]);
    }

    for (;;) {
        for (l = 0; l < N; l++) {
            if (k[l] < h[l]) break;
        }
        
        for(r = l; r < N; r++) {
            if (k[r] == h[r]) break;
        }

        if (l == N && r == N) break;

        for (i = l; i < r; i++) k[i]++;

        ans++;
    }

    printf("%lld\n", ans);

    return 0;
}
