#include <stdio.h>

int main (void)
{
    int N, T, c, t;
    int i;
    int ans = 1001;

    scanf("%d %d", &N, &T);

    for(i = 0; i < N; i++) {
        scanf("%d %d", &c, &t);
        if (t <= T && c < ans) ans = c;
    }

    if (ans > 1000) {
        puts("TLE");
    } else {
        printf("%d\n", ans);
    }

    return 0;
}
