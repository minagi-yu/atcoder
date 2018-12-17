#include <stdio.h>

int main (void)
{
    int N, p[10000];
    int i, ans = 0, max = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &p[i]);
        ans += p[i];
        if (p[i] > max) max = p[i];
    }

    ans -= max / 2;

    printf("%d\n", ans);

    return 0;
}
