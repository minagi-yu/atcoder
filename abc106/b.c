#include <stdio.h>

int main (void)
{
    int n, i, j, tmp = 0, ans = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i += 2) {
        tmp = 0;
        for (j = 1; j <= n; j++) {
            if (i % j == 0) ++tmp;
        }
        if (tmp == 8) ++ans;
    }

    printf("%d\n", ans);

    return 0;
}
